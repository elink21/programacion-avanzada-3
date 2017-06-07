/*
Suma de arreglos unidimensionales 
Elias Edgardo Segundo Antonio
ICO-21 1316282
*/
#include <bits/stdc++.h>

using namespace std;

const int maxSize=6;

void setArray(int[],int[]);

void printArray(int[]);

void addArray(int[],int[],int[]);

int main()
{
	int a[maxSize];
	int b[maxSize];
	int c[maxSize];

	setArray(a,b);
	cout<<" \n\nMostrando A: \n";
	printArray(a);
	cout<<"\n\nMostrando B: \n";
	printArray(b);
	addArray(a,b,c);
	cout<<"\n\nMostrando C: \n";
	printArray(c);
}

void addArray(int a[], int b[], int c[])
{
	for(int i=0;i<maxSize;i++)
	{
		c[i]=a[i]+b[i];
	}
}

void printArray(int x[])
{
	cout<<"\n El arreglo es: \n";
	for(int i=0;i<maxSize;i++)cout<<x[i]<<"  ";
}


void setArray(int a[],int b[])
{
	srand(time(NULL));
	

	for(int i=0;i<maxSize;i++)
	{
		a[i]=1+rand()%100;
	}


	for(int i=0;i<maxSize;i++)
	{
		b[i]=1+rand()%100;
	}

}
