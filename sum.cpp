/*
Suma de arreglos unidimensionales 
Elias Edgardo Segundo Antonio
ICO-21 1316282
*/
#include <bits/stdc++.h>

using namespace std;

const int maxSize=10;

void setArray(int[]);

void printArray(int[]);

int sum(int[]);

int main()
{
	int a[maxSize];
	setArray(a);
	printArray(a);

	cout<<"\n\nLa suma de los elementos es : "<<sum(a);

}

int sum(int a[])
{
	int suma=0;
	for(int i=0;i<maxSize;i++)suma+=a[i];
	return suma;
}

void printArray(int x[])
{
	cout<<"\n El arreglo es: \n";
	for(int i=0;i<maxSize;i++)cout<<x[i]<<"  ";
}


void setArray(int a[])
{
	srand(time(NULL));
	
	for(int i=0;i<maxSize;i++)
	{
		a[i]=1+rand()%100;
	}
}
