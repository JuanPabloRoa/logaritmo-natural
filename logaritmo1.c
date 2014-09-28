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
//double  A= x-1;
//double B=x+1;
//double C=(A/B);

return 2*(((x-1)/(x+1))+
	f1*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
	f2*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
	f3*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
	f4*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
    f5*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
    f6*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))

);


}


int main(int argc, char **argv){


extern char *optarg;//almacena argumentos introducidos luego de indicar a que variable se le colocan los argumentos
//extern int optind;//numero de argumentos introducidos a  la variable

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
