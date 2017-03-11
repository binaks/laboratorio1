#include <iostream>
#include <cmath>
#include "../include/area.h"

using std::cin;
using std::cout;

float AreaTriangulo (float base, float altura) {
	return (base * altura)/2.0;
}

float AreaRetangulo (float base, float altura) {
	return (base * altura);
}

float AreaQuadrado (float lado) {
	return (pow(lado,2));
}

float AreaCirculo (float raio) {
	return ( (pow(raio,2)*3.1415) );
}

float AreaPiramide (float base, float altura) {

	float area_base = pow(base,2);
	float area_lateral = 4* ( (base*altura)/2);

	return (area_base + area_lateral);
}

float AreaCubo (float lado) {
	return ( (6 * pow(lado,2) ) );
}

float AreaParalelepipedo (float base, float altura, float largura) {

	return ( (2*(base*altura) ) + (2*(base*largura) ) + (2*(altura*largura) ) );
}

float AreaEsfera (float raio) {
	return ( (4 * 3.1415 * pow(raio,2) ) );
}