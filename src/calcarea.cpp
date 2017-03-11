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

	cout << "Área do circulo: " << AreaCirculo(raio) << std::endl;


}

void CalcAreaPiramide () {
	float base;
	float altura;

	cout << "Digite o tamanho da base da piramide: ";
	cin >> base;
	cout << "Digite o tamanho da altura da piramide: ";
	cin >> altura;

	cout << "Área do piramide: " << AreaPiramide(base, altura) << std::endl;


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

	cout << "Digite o tamanho da base do paralelepipedo: ";
	cin >> base;
	cout << "Digite o tamanho da altura do paralelepipedo: ";
	cin >> altura;
	cout << "Digite o tamanho da largura do paralelepipedo: ";
	cin >> largura;

	cout << "Área do paralelepipedo: " << AreaParalelepipedo(base, altura, largura) << std::endl;


}

void CalcAreaEsfera () {
	float raio;

	cout << "Digite o tamanho do esfera: ";
	cin >> raio;

	cout << "Área do esfera: " << AreaEsfera(raio) << std::endl;


}