#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>


#define F1 0.333333333
#define F2 0.2
#define F3 0.142857142
#define F4 0.111111111
#define F5 0.09090909
#define F6 0.076923076



double log(double x){// funcion que retornara el logaritmo de x en base a  la serie de Taylor

	double  A = x-1;//48
	double B = x+1;
	double C = (A/B);  
	return 2*((A)/(x+1)+
	F1*(A/B)*(A/B)*(A/B)+
	F2*C*C*C*C*C+
	F3*C*C*C*C*C*C*C+
	F4*C*C*C*C*C*C*C*C*C+
        F5*C*C*C*C*C*C*C*C*C*C*C+
    	F6*C*C*C*C*C*C*C*C*C*C*C*C*C);
  
  
}


int main(int argc, char **argv){


	extern char *optarg;//almacena argumentos introducidos luego de indicar a que variable se le colocan los argumentos
	double iteraciones;//la cantudad de iteraciones que se realizaran.Este valor sera entregado por consola

	double argumento;//valor entregado que tendra como argumento la funcion logaritmo. Tal valor tambien es entragado por consola

	double resultado;//variable que contendra el valor de cada iteracion de la funcion

	int contador=0;

	while((contador= getopt(argc, argv ,"i:n:"))!=-1){//ciclo para asignar los argumentos de entrada a las variables
			switch(contador){
			case 'i':
				iteraciones=atoi(optarg);//funcion atoi para convertir el valor de entrada char a un entero
				break;
			case 'n':
				argumento=atoi(optarg);
			}
	}

	for(unsigned int i = 0; i < iteraciones; i++){
	
		resultado = log(argumento);
	}
	printf("%f\n", resultado);
	return 0;
}
