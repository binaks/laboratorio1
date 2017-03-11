#include <iostream>
#include "../include/calcarea.h"

using std::cin;
using std::cout;
using std::endl;

void CalcPeriTriangulo () {
	float lado;

	cout << "Perimetro do Triangulo: " << PeriTriangulo(lado) << endl;

}

void CalcPeriRetangulo () {
	float base;
	float altura;

	cout << "Perimetro do Retangulo: " << PeriRetangulo(base, altura) << endl;

}

void CalcPeriQuadrado () {
	float lado;

	cout << "Perimetro do Quadrado: " << PeriTQuadrado(lado) << endl;

}

void CalcPeriCirculo () {
	float raio;

	cout << "Perimetro do Raio: " << PeriCirculo(lado) << endl;

}