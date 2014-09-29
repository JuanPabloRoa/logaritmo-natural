#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>


static double f1=0.333333333;
static double f2=0.2;
static double f3=0.142857142;
static double f4=0.111111111;
static double f5=0.09090909;
static double f6=0.076923076;

double log(double x){// funcion que retornara el logaritmo de x en base a  la serie de Taylor

    double A=x-1;//149.6
    double B=x+1;
    double I0=((x-1)/(x+1));
    double I1= f1*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1));
    double I2=f2*(A/(x+1))*(A/(x+1))*(A/(x+1))*(A/(x+1))*(A/(x+1));
    double C=(A/B);
   double I3=f3*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B);
    double I4=f4*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B);
    double I5=f5*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B)*(A/B);
    double I6=f6*C*C*C*C*C*C*C*C*C*C*C*C*C;
	return 2*(I0+I1+I2+I3+I4+I5+I6);
  
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