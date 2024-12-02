/**
* @file cliente.c
* @author Rodrigo Salgueiro, Diogo Gonçalves
* @date 25-11-2024
* @version 1
*
*
* @brief Ficheiro onde são declaradas algumas funções relacionadas ao cliente.
*
*/

#include "cliente.h"

#include <limits.h>
#include <string.h>

#include "input.h"

void printCliente(Cliente cliente){

    printf("ID: %d",cliente.idCliente);
    printf("Nome: %s",cliente.nome);
    printf("Email: %s",cliente.contactos.email);
    printf("Telefone: %d",cliente.contactos.telefone);
    printf("Nif: %d",cliente.nif);
    printf("Data Registo: %d-%02d-%02d %02d:%02d:%02d",cliente.data_registo.dia,cliente.data_registo.mes,cliente.data_registo.ano,cliente.data_registo.hora,cliente.data_registo.minuto,cliente.data_registo.segundo);

}

int procurarCliente(Clientes clientes, int nif) {
    int i;
    for (i = 0; i < clientes.contador; i++) {
        if (clientes.cliente[i].nif == nif) {
            return i;
        }
    }
    return -1;
}

void inserirCliente(Clientes *ListaClientes){

    int nif = obterInt(0,MAX_NIF,MSG_OBTER_NIF);

    if (ListaClientes->contador >= MAX_CLIENTES)
    {
        printf(ERRO_LISTA_CHEIA);

    }else if (procurarCliente(*ListaClientes,nif) != -1){

        printf(ERRO_CLIENTE_EXISTE);


    }else{

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int id = ListaClientes->contador;

    ListaClientes->cliente[id] = ListaClientes->cliente[id];
    ListaClientes->cliente[id].data_registo.ano = tm.tm_year + 1900;
    ListaClientes->cliente[id].data_registo.mes = tm.tm_mday;
    ListaClientes->cliente[id].data_registo.dia =tm.tm_mon + 1;
    ListaClientes->cliente[id].data_registo.hora = tm.tm_hour;
    ListaClientes->cliente[id].data_registo.minuto = tm.tm_min;
    ListaClientes->cliente[id].data_registo.segundo = tm.tm_sec;

    lerString(ListaClientes->cliente[id].nome,MAX_CH_NOME,MSG_OBTER_NOME);

    lerString(ListaClientes->cliente[id].contactos.email,MAX_CHAR_EMAIL,MSG_OBTER_EMAIL);

    ListaClientes->cliente[id].contactos.telefone = obterInt(0,INT_MAX,MSG_OBTER_TELEFONE);

    ListaClientes->cliente[id].nif = nif;

    ListaClientes->contador++;
}}


void procurarCliente(Clientes Clientes){

    int nif, i ;

    if (Clientes.contador > 0){

      nif = obterInt(0,MAX_NIF,MSG_OBTER_NIF);

        for (i = 0; i < Clientes.contador; i++){

            if (Clientes.cliente[i].nif == nif){

                printCliente(Clientes.cliente[i]);
            }
        }

    }else{
        printf(ERRO_LISTA_VAZIA);
    }
}

void atualizarCliente(Clientes *clientes){

    int id = obterInt(0,MAX_NIF,MSG_OBTER_NIF);

    if (clientes->contador > 0){

        if (id = procurarCliente(*clientes,id) != -1){

            lerString(clientes->cliente[id].nome,MAX_CH_NOME,MSG_OBTER_NOME);
            clientes->cliente[id].contactos.telefone = obterInt(0,INT_MAX,MSG_OBTER_TELEFONE);
            lerString(clientes->cliente[id].contactos.email,MAX_CHAR_EMAIL,MSG_OBTER_EMAIL);

        }else{

            printf(ERRO_CLIENTE_NAO_EXISTE);
        }

    }else
    {
        printf(ERRO_LISTA_VAZIA);
    }
}

void removerCliente(Clientes *clientes){

    if (clientes->contador > 0){


    int i, id;

        if (id = procurarCliente(*clientes, obterInt(0, MAX_NIF, MSG_OBTER_NIF)) != -1){

        for (i = id; i < clientes->contador - 1; i++)
        {
            clientes->cliente[i] = clientes->cliente[i + 1];
        }

        strcpy(clientes->cliente[id].nome, "");
        strcpy(clientes->cliente[id].contactos.email, "");
        clientes->cliente[id].contactos.telefone = clientes->cliente[id].data_registo.ano = clientes->cliente[id].data_registo.mes = clientes->cliente[id].data_registo.dia = clientes->cliente[id].data_registo.hora = clientes->cliente[id].data_registo.minuto = clientes->cliente[id].data_registo.segundo = clientes->cliente[id].nif = 0  ;

        clientes->contador--;

        }else{

            printf(ERRO_CLIENTE_NAO_EXISTE);
        }

    }else
    {
        printf(ERRO_LISTA_VAZIA);
    }
}

void listarCliente(Clientes *clientes){

    if (clientes->contador > 0){

        int i;

        for (i = 0; i < clientes->contador; i++)
        {
            printCliente(clientes->cliente[i]);
        }

    }


}








