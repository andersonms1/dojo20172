#include <stdio.h>
#include <stdlib.h>


/*
Lucas Gomes de Oliveira
entradas: dois numeros inteiros
saidas: a soma dos numedos
*/

/*
Wellingthon Diego Resende de Lima
entradas: dois numeros inteiros
saidas: subtração do primeiro pelo segundo
*/

/*
João Vitor Ramos de Souza
entradas: dois numeros inteiros
saidas: o maior dos numeros
*/
int maiornumero(int numeroa,int numerob){
    if(numeroa > numerob){
      return numeroa;
    }
    else if(numerob > numeroa){
      return numerob;
    }
    else{
      printf("Os numeros sao iguais\n");
    }
}

/*
Victor Alves Gomide
entradas: dois numeros inteiros
saidas: o menor dos numeros
*/

/*
Bruno Oliveira Dantas
entradas: um numero inteiro
saidas: quadrado da entrada
*/

/*
Martha Dantas Silva
entradas: um numero inteiros
saidas: cubo da entrada
*/

/*Exemplo
entradas: dois numeros
saidas: media dos numeros
*/

float media(float num1, float num2){
    return (num1+num2)/2;

float raiz(float num1) {
	return (num1 * num1);
}

int main(){

    return 0;
}
