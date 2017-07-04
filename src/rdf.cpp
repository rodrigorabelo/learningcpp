//============================================================================
// Name        : rdf.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <gtest/gtest.h>

using namespace std;



float multi(float a, float b){
	float multip = 0;
	multip = a*b;
	return multip;
}

float div(float a, float b){
	return a / b;
}

float soma(float a, float b){
	return a + b;
}

float sub(float a, float b){
	return a - b;
}




int main() {


	float a, b, results;
	char operador;
	char d;
	bool c;
	a = 0.0;
	b = 0.0;
	results = 0.0;
	operador = 'x';
	d = 'z';
	c = false;


	do {

	system("cls");

	cout <<"Insira o primeiro valor."<< endl;
		cin >> a;


	cout <<"Insira o tipo de operação ( *, /, +, -)." << endl;
		cin >> operador;

		if (operador != '*' && operador != '/' && operador != '+' && operador != '-'){
			do {
			cout << endl << "Operador inválido. Por favor inserir apenas '*' para multiplicação, '/' para divisão, '+' para soma e '-' para subtração" <<endl;
			cin >> operador;
			} while (operador != '*' && operador != '/' && operador != '+' && operador != '-');
		}


	cout <<"Insira o segundo valor." << endl;
		cin >> b;


	if (operador == '*')
		results = multi(a,b);

		else if
			(operador == '/')	results = div(a,b);

		else if
			(operador == '+')	results = soma(a,b);

		else
			results = sub(a,b);



	cout << "Resultado: " << results << endl << endl;

	cout <<"Se desejar realizar outra operação, insira 'S', caso contrário insira qualquer outra tecla."<< endl;
	cin >> d;
	if (d == 'S')
		c = true;

	else
		c = false;

	cout << endl;

} while (c == true);

	return 0;
}
