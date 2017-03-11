#include <iostream>
#include "../include/calcperimetro.h"

using std::cin;
using std::cout;
using std::endl;

void CalcPeriTriangulo () {
	float lado;

	cout << "Digite o tamanho do lado do triângulo: " << endl;
	cin >> lado;
	cout << "Perímetro do triângulo: " << PeriTriangulo(lado) << endl;
}

void CalcPeriRetangulo () {
	float base;
	float altura;
	
	cout << "Perímetro do retângulo: " << PeriRetangulo(base, altura) << endl;
}