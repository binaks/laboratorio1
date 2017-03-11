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

	cout << "Digite o tamanho da base do retângulo: ";
	cin >> base;
	cout << "Digite o tamanho da altura do retângulo: ";
	cin >> altura;

	cout << "Área do retângulo: " << AreaRetangulo(base, altura) << std::endl;


}

void CalcAreaQuadrado () {
	float lado;
	

	cout << "Digite o tamanho do lado do quadrado ";
	cin >> lado;
	
	cout << "Área do quadrado: " << AreaQuadrado(lado) << std::endl;


}

void CalcAreaCirculo () {
	float raio;

	cout << "Digite o tamanho do raio: ";
	cin >> raio;

	cout << "Área do círculo: " << AreaCirculo(raio) << std::endl;


}

void CalcAreaPiramide () {
	float base;
	float altura;

	cout << "Digite o tamanho da base da piramide: ";
	cin >> base;
	cout << "Digite o tamanho da altura da piramide: ";
	cin >> altura;

	cout << "Área da piramide: " << AreaPiramide(base, altura) << std::endl;


}

void CalcAreaCubo () {
	float lado;
	

	cout << "Digite o tamanho do lado do cubo ";
	cin >> lado;
	
	cout << "Área do cubo: " << AreaCubo(lado) << std::endl;


}

void CalcAreaParalelepipedo () {
	float base;
	float altura;
	float largura;

	cout << "Digite o tamanho da base do paralelepípedo: ";
	cin >> base;
	cout << "Digite o tamanho da altura do paralelepípedo: ";
	cin >> altura;
	cout << "Digite o tamanho da largura do paralelepípedo: ";
	cin >> largura;

	cout << "Área do paralelepípedo: " << AreaParalelepipedo(base, altura, largura) << std::endl;


}

void CalcAreaEsfera () {
	float raio;

	cout << "Digite o tamanho do raio da esfera: ";
	cin >> raio;

	cout << "Área da esfera: " << AreaEsfera(raio) << std::endl;


}