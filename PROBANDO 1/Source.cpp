#include <iostream>
using namespace std;
// MODA.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;
using namespace System;
void Generar_Numeros(int*notas, int n)
{
	Random r;
	for (int i = 0;i < n;i++)
	{
		notas[i] = r.Next(0, 21);
		cout << notas[i] << "  ";
	}
	cout << endl;
}
void moda(int*notas, int n)
{
	int con[21] = { 0 };
	int mayor;
	mayor = con[0];
	for (int k = 0;k < 21;k++)
	{
		for (int i = 0;i<n;i++)
		{
			if (notas[i] == k)
				con[k]++;
		}
	}
	for (int k = 0;k < 21;k++)
	{
		if (con[k] > mayor)
		{
			mayor = con[k];
		}
	}
	cout << "La moda es: ";
	for (int k = 0;k <= 20;k++) {
		if (con[k] == mayor) {
			cout << k << " ";
		}
	}
	cout << endl;
}
void main()
{
	int*notas, n;
	cout << "ingrese n ";
	cin >> n;
	notas = new int[n];
	Generar_Numeros(notas, n);

	cout << endl;
	moda(notas, n);
	getch();

}


