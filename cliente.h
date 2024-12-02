/**
* @file cliente.h
* @author Rodrigo Salgueiro, Diogo Gonçalves
* @date 25-11-2024
* @version 1
*
*
* @brief Ficheiro onde são declaradas algumas variaveis e estruturas relacionadas ao cliente.
*
*/

#ifndef CLIENTE_H
#define CLIENTE_H


#define ERRO_CLIENTE_NAO_EXISTE "O cliente não existe."
#define ERRO_LISTA_VAZIA        "A lista de clientes está vazia."
#define ERRO_LISTA_CHEIA        "A lista de clientes está cheia."
#define ERRO_CLIENTE_EXISTE     "O cliente já se encontra atribuído."

#define MAX_CH_NOME             31
#define MSG_OBTER_NOME          "Insira o nome do cliente: "
#define MSG_OBTER_EMAIL         "Insira o email do cliente \n (Se não pretender usar email como forma de contacto prima enter)"
#define MSG_OBTER_TELEFONE      "Insira o número de telefone do cliente \n (Se não pretender usar o número de telefone como forma de contacto insira 0)"
#define MSG_OBTER_NIF           "Insira o nif do cliente"

#define MAX_CLIENTES 100
#define MAX_CHAR_EMAIL 100
#define MAX_NIF 1000000000

typedef struct{

    int dia,mes,ano,hora,minuto,segundo;

}Data;

typedef struct
{

        int telefone;
        char email[MAX_CHAR_EMAIL];


}Contacto;

typedef struct{

    int idCliente;
    char nome[MAX_CH_NOME];
    Contacto contactos;
    int nif;
    Data data_registo;

}Cliente;

typedef struct{

    int contador;
    Cliente cliente[MAX_CLIENTES];

}Clientes;

void inserirCliente(Cliente *Clientes);
void removerCliente(Cliente *Clientes);
void atualizarCliente(Cliente *Clientes);
void procurarClientes(Cliente Clientes);
void listarCliente(Cliente *Clientes);

#endif /* CLIENTE_H */

