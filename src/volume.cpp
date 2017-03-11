#include <iostream>
#include <cmath>
#include "../include/volume.h"

float VolPiramide (float area_base, float altura) {
	return ((area_base * altura)/3);
}

float VolCubo (float aresta) {
	return (pow(aresta,3));
}

float VolParalelepipedo (float aresta1, float aresta2, float aresta3) {
	return (aresta1 * aresta2 * aresta3);
}

float VolEsfera (float raio) {
	return (4/3 * (3.1415 * pow(raio,3)));
}