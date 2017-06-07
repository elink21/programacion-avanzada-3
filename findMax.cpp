/*Usar 3 arreglos[6], funciones:
---------------------------------
inicializar a,b;
imprimir cualquiera;
sumar(a,b y depositar en c)
*/

/*
inicializar a.b
se imprime a
se imorime b
se suman 
 se imprime c
-----------------------*/

 /*------------------------
 	Arreglo double[10]
 	funciones:
 	inicializar
 	numeros aleatorios
 	funcin de la suma de los elementos, retorne el total
 */
#include <bits/stdc++.h>
using namespace std;

const int maxSize=5;
//Encontrar maximo
int findMax(int[]);
//Inicializar el arreglo
void setArray(int[]);
//findProduct *[2]
void arrayX2(int[]);
//Print
void printArray(int[]);

int main()
{
	
	int numbers[maxSize];
	setArray(numbers);
	arrayX2(numbers);
	printArray(numbers);	

	cout<<"\n\nEl maximo del arreglo es: "<<findMax(numbers);
}

void printArray(int numbers[])
{
	cout<<"\n El arreglo es: \n";
	for(int i=0;i<maxSize;i++)cout<<numbers[i]<<"  ";
}

void arrayX2(int  numbers[])
{
	for(int i=0;i<maxSize;i++)numbers[i]*=2;
}
void setArray(int numbers[])
{
	srand(time(NULL));
	cout<<"El arreglo generado es: \n\n";

	for(int i=0;i<maxSize;i++)
	{
		numbers[i]=1+rand()%100;
		cout<<numbers[i]<<"  ";
	}
}

int findMax(int numbers[maxSize])
{
	int max=numbers[0];
	for(int i=0;i<maxSize;i++)
		if(numbers[i]>max)max=numbers[i];

	return max;
}