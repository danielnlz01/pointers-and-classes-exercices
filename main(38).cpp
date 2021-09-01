#include <iostream>
using namespace std;
#include "clases_ejer3.h"
#include "clases_ejer4.h"

int main (){
	//Ejercicio 1
	cout << "Inicia Ejercicio 1\n" << endl;

  int  a,  b;
  cout << "Ingrese valor de a: ";
  cin >> a;
  cout << "Ingrese valor de b: ";
  cin >> b;

  int *ptrA=&a;
  int *ptrB=&b;

  cout << "Valor de ptrA: " << *ptrA << "dirección: "<< ptrA<<"\n";
	cout << "Valor de ptrB " << *ptrB << "dirección: "<< ptrB<<"\n";
	
	//Ejercicio 2
	cout << "\n\n\n\nInicia Ejercicio 2\n" << endl;

	int cantVal;
	int maximo = 0;
  
	cout << "Cantidad de valores: " << endl;
  cin >> cantVal;

  cout << "Valores en la lista: " << endl;
  int lista[cantVal];

  for (int i = 0; i < cantVal; i++)
	{
   cin >> lista[i];
  }

  for (int j = 0; j <= cantVal; j++)
	{
   if (lista[j] > maximo)
	 {
		 maximo = lista[j];
	 }
  }

  int *ptr = &maximo;

  cout << "Posición del valor máximo de la lista: " << endl << *ptr << " con dirección en: " << ptr << endl;

	//Ejercicio 3
	cout << "\n\n\n\nInicia Ejercicio 3\n" << endl;

	Rectangulo rectan;
	Triangulo trian;
	rectan.set_datos (5,3);
	trian.set_datos (2,5);
	cout << "Area del rectángulo: " << rectan.area() << endl;
	cout << "Area del triángulo: " <<trian.area() << endl;	
	
	//Ejercicio 4
	cout << "\n\n\n\nInicia Ejercicio 4\n" << endl;

  hija renata;
	renata.display();
}