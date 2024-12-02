/**
* @file menu.c
* @author Rodrigo Salgueiro, Diogo Gonçalves
* @date 25-11-2024
* @version 1
*
*
* @brief Ficheiro onde são declaradas algumas funções relacionadas ao menu.
*
*/
#include <stdio.h>
#include "input.c"


int menu(){
    
    int opcao;
    
    do{
        printf("\n----MENU---\n");
        printf("\nSelecione a categoria desejada:");
        printf("\n1-Produto");
        printf("\n2-Cliente");
        printf("\n3-Encomenda");
        printf("\n4-Máquina");
        printf("\n0-Sair");
        printf("\n-------------");
        opcao=obterInt(0,6,"Escolha a opção desejada");
        
        
        switch(opcao){
            case 1:
                menu_produtos();
                break;
                
            case 2:
                menu_cliente();
                break;
                
            case 3:
                menu_encomenda();
                break;
                
            case 4:
                menu_maquina();
                break;
                
            case 0:
                printf("A sair do programa...");
                return 0;
                
            default:
                printf("Opcao invalida");
        }
        
    
    }while(opcao != 0);
      
}

void menu_produtos(){
    
    int opcao;
    do{
        printf("\n---MENU PRODUTO---\n");
        printf("\n1-Adicionar produto");
        printf("\n2-Editar produto");
        printf("\n3-Remover produto");
        printf("\n4-Procurar produto");
        printf("\n5-Voltar ao menu anterior");
        printf("\n-------------------");
        opcao=obterInt(0,6,"Escolha a opção desejada");
        switch(opcao){
            case 1:
                //funcao adicionar produto
                break;
            case 2:
                //funcao editar produto
                break;
            case 3:
                //funcao remover produto
                break;
            case 4:
                //funcao procurar produto
                break;
            case 5:
                menu();
                break;
            default:
                printf("Opção inválida");
        }
    }while(opcao != 0);
}

void menu_cliente(){
    
    int opcao;
    
    do{
        printf("\n----MENU CLIENTE---\n");
        printf("\n1-Inserir cliente");
        printf("\n2-Remover cliente");
        printf("\n3-Atualizar cliente");
        printf("\n4-Procurar cliente");
        printf("\n5-Listar clientes");
        printf("\n6-Voltar ao menu anterior");
        printf("\n---------------------");
        opcao=obterInt(0,6,"Escolha a opção desejada");
        
        switch(opcao){
            
            case 1:
                //
                break;
                
            case 2:
                //
                break;
                
            case 3:
                //
                break;
                
            case 4:
                //
                break;
                
            case 5:
                //
                break;
            case 6:
                menu();
                break;
                
            default:
                printf("Opção inválida");
                
        }
                
    }while(opcao != 0);
}

void menu_encomenda(){
    
    int opcao;
    
    do{
        printf("/n----MENU ENCOMENDA---/n");
        printf("/n1-Criar encomenda");
        printf("/n2-Editar encomenda");
        printf("/n3-Remover encomenda");
        printf("/n4-Procurar encomenda");
        printf("/n5-Voltar ao menu anterior");
        printf("/n-----------------------");
        opcao=obterInt(0,6,"Escolha a opção desejada");
        
        switch(opcao){
            case 1:
                //funcao criar encomenda
                break;
                
            case 2:
                //funcao editar encomenda
                break;
                
            case 3:
                //funcao remover encomenda
                break;
                
            case 4:
                //funcao procurar encomenda
                break;
                
            case 5:
                menu();
                break;
                
            default:
                printf("Opção inválida");
                
        }
    }while(opcao != 0);
}

void menu_maquina(){
    
    int opcao;
    
    do{
        printf("\n----MENU MÁQUINA---");
        printf("\n1-Adicionar máquina");
        printf("\n2-Remover máquina");
        printf("\n3-Eliminar máquina");
        printf("\n4-Voltar ao menu principal");
        printf("\n--------------------");
        opcao=obterInt(0,6,"Escolha a opção desejada");
        
        
        switch(opcao){
            
            case 1:
                //funcao adicionar
                break;
            case 2:
                //funcao remover
                break;
            case 3:
                //funcao eliminar
                break;
            case 4:
                menu();
                break;
                
            default:
                printf("Opção inválida");
        }
    }while(opcao != 0);
}