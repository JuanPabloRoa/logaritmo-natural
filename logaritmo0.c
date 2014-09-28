#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>
double log(double x){// funcion que retornara el logaritmo de x en base a  la serie de Taylor

return 2*(((x-1)/(x+1))+
	(1/3)*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
	(1/5)*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
	(1/7)*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
	(1/9)*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
       (1/11)*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))+
       (1/13)*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))*((x-1)/(x+1))
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
