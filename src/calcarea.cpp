#include <iostream>
#include "../include/calcarea.h"

using std::cin;
using std::cout;

void CalcAreaTriangulo () {
	float base;
	float altura;

	cout << "Digite o tamanho da base do triângulo: ";
	cin >> base;
	cout << "Digite o tamanho da altura do triângulo: ";
	cin >> altura;

	cout << "Área do triângulo: " << AreaTriangulo(base, altura) << std::endl;


}

void CalcAreaRetangulo () {
	float base;
	float altura;

	cout << "Digite o tamanho da base do retangulo: ";
	cin >> base;
	cout << "Digite o tamanho da altura do retangulo: ";
	cin >> altura;

	cout << "Área do retangulo: " << AreaRetangulo(base, altura) << std::endl;


}

