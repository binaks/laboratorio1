#include <iostream>
#include "../include/calcarea.h"

using std::cout;
using std::endl;

void CalcAreaTriangulo (float base, float altura) {
	cout << "Área do triângulo: " << AreaTriangulo(base, altura) << endl;
}

void CalcAreaRetangulo (float base, float altura) {
	cout << "Área do retângulo: " << AreaRetangulo(base, altura) << endl;
}

void CalcAreaQuadrado (float lado) {
	cout << "Área do quadrado: " << AreaQuadrado(lado) << endl;
}

void CalcAreaCirculo (float raio) {
	cout << "Área do círculo: " << AreaCirculo(raio) << endl;
}

void CalcAreaPiramide (float base, float altura) {
	cout << "Área da piramide: " << AreaPiramide(base, altura) << endl;
}

void CalcAreaCubo (float lado) {
	cout << "Área do cubo: " << AreaCubo(aresta) << endl;
}

void CalcAreaParalelepipedo (float aresta1, float aresta2, float aresta3) {
	cout << "Área do paralelepípedo: " << AreaParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void CalcAreaEsfera (float raio) {
	cout << "Área da esfera: " << AreaEsfera(raio) << endl;
}