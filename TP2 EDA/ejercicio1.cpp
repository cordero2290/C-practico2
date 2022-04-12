/*
Ejercicio 1: Realice un programa que solicite de la entrada
estándar un entero del 1 al 10 y muestre en la salida estándar
 su tabla de multiplicar.
*/
#include<iostream>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

//Funciones 
int validarNum(char numero[50]);
int convertir(int aux, char numero[50]);

int main(){
	int aux;
	char numero[50];
	int numeroValido;
	do {
		cout<<"Ingrese un numero del 1 al 10."<< endl;
		cin>>numero;
		aux=validarNum(numero); //Guarda 0 si son numeros
		if(aux==0){
			numeroValido= convertir(aux,numero); // convierte la cadena en entero y lo guardo en una variable
			
		}
	}while( (numeroValido<1|| numeroValido>10) || aux!=0 ); //si no esta entre 1 y 10, y no es 0 se repite el while
	
	for(int i=0;i<=10 ;i++) {
	
		cout<< i<<"x"<<numeroValido<<"="<<numeroValido*i<<endl;
	
	}
	
	return 0;
}

int	validarNum(char numero[50]) {
	int aux=0, i=0, j;
	j=strlen(numero);
	while(i<j && aux==0){
		if (isdigit(numero[i]) !=0 ) {
			i++;
		}else {
			aux=1;
		}
	}
	return aux;
}

int convertir(int aux, char numero[50]){
	int convertido=0;
	if(aux==0){
		convertido = atoi(numero);
	}
	
	return convertido;
}
	
