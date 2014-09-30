#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>


#define f1 0.333333333
#define f2 0.2
#define f3 0.142857142
#define f4 0.111111111
#define f5 0.09090909
#define f6 0.076923076

double log(double x){// funcion que retornara el logaritmo de x en base a  la serie de Taylor

double A= x-1;//34.95    
double B=x+1; 
double respuesta;
double C=(A/B); 
double C2=C*C;//c cuadrado
double C3=C*C*C;//c cubico
double C4=C*C*C*C;//en este ciclo se encuentra disponible el valor de C
double C5=C2*C2*C;
double C6=C3*C3;
respuesta= 2*(C+
	f1*C3+
	f2*C5+
	f3*C5*C2+
	f4*C6*C3+
	f5*C6*C5
	+ f6*C6*C6*C);

return respuesta;
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
for(unsigned int i = 0; i < iteraciones; i++)
    {
        resultado = log(argumento);
    }
 printf("%f\n", resultado);
return 0;
}
