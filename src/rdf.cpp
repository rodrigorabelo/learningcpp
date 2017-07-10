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

float sub(float a, float b){
	return a - b;
}



int main() {


	float a, b, results;
	char op;
	char d;

	a = b = results = 0.0;
	op = d = 'x';


	do {

		system("clear");

		cout <<"Insira o primeiro valor."<< endl;
			cin >> a;
		if (cin.fail()){
		    cin.clear();
		    cin.ignore(100,'\n'); // it will ignore 100 characters or get to the end of the line.
		    cout <<"Não são permitidas inserções não numéricas. Favor inserir um valor válido"<< endl;
		    			cin >> a;
		}


		cout <<"Insira o tipo de operação (*, /, +, -)." << endl;
			cin >> op;


		if (op != '*' && op != '/' && op != '+' && op != '-'){

			do {

				cout << endl <<"Operadores válidos:" << endl << endl;
				cout <<"	'+' para adição." << endl;
				cout <<"	'-' para subtração." << endl;
				cout <<"	'*' para multiplicação." << endl;
				cout <<"	'/' para divisão."<< endl;
				cin >> op;

			} while (op != '*' && op != '/' && op != '+' && op != '-');
		}


		cout <<"Insira o segundo valor." << endl;
			cin >> b;
		if (cin.fail()){
			cin.clear();
		    cin.ignore(100,'\n'); // it will ignore 100 characters or get to the end of the line.
			cout <<"Não são permitidas inserções não numéricas. Favor inserir um valor válido"<< endl;
				cin >> a;
			}


		if (op == '*')
			results = multi(a,b);

			else if (op == '/')
				results = div(a,b);

			else if (op == '+')
				results = a+b;

			else
				results = sub(a,b);


		cout << "Resultado: " << results << endl << endl;

		cout <<"'S' para realizar outra operação. Caso contrário insira qualquer outra tecla."<< endl;
			cin >> d;

		cout << endl;


	} while (d == 'S' || d == 's');

	system("clear");

	cout << endl << setw(30) << "Há braços" << endl <<endl;

	sleep(2);

	system("clear");


	return 0;
}
