#include <iostream>
#include "../include/calcperimetro.h"

using std::cout;
using std::endl;

void CalcPeriTriangulo (float lado) {
	cout << "Perímetro do triângulo: " << PeriTriangulo(lado) << endl;
}

void CalcPeriRetangulo (float base, float altura) {
	cout << "Perímetro do retângulo: " << PeriRetangulo(base, altura) << endl;
}

void CalcPeriQuadrado (float lado) {
	cout << "Perímetro do quadrado: " << PeriQuadrado(lado) << endl;
}

void CalcPeriCirculo (float raio) {
	cout << "Perímetro do círculo: " << PeriCirculo(raio) << endl;
}