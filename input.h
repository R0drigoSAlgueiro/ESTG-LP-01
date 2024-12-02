/**
* @file input.c
* @author Rodrigo Salgueiro, Diogo Gonçalves
* @date 25-11-2024
* @version 1
*
*
* @brief Ficheiro onde são declaradas funções protótipos 
*
*
*/

#ifndef INPUT_H
#define INPUT_H

int obterInt(int minValor, int maxValor, char *msg);

float obterFloat(float minValor, float maxValor, char *msg);

double obterDouble(double minValor, double maxValor, char *msg);

char obterChar(char *msg);

void lerString(char *string, unsigned int tamanho, char *msg);

#endif /* INPUT_H */

