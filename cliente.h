#ifndef CLIENTE_H
#define CLIENTE_H


#define ERRO_CLIENTE_NAO_EXISTE "O cliente não existe na lista."
#define ERRO_LISTA_VAZIA        "A lista de cliente está vazia."
#define ERRO_LISTA_CHEIA        "A lista de cliente está cheia."
#define ERRO_CLIENTE_EXISTE     "O número de cliente já se encontra atribuído."

#define MAX_CH_NOME             31
#define MSG_OBTER_NOME          "Insira o nome do cliente: "

#define MAX_CLIENTES 100 


typedef struct{
    
 int idCliente; 
 char nome[MAX_CH_NOME]; 
 int contacto; 
 int nif; 
 Data data_registo; 
    
}Cliente; 

typedef struct{ 
    
    int contador; 
    Clientes Cliente[MAX_CLIENTES]; 
    
}Clientes;

void inserirCliente(Cliente *Clientes);
void removerCliente(Cliente *Clientes);
void atualizarCliente(Cliente *Clientes);
void procurarCliente(Cliente Clientes);
void listarCliente(Cliente *Clientes);





#endif /* CLIENTE_H */

