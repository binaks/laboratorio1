#include <iostream>
#include "../include/perimetro.h"

float PeriTriangulo (float lado) {
	return (3 * lado);
}

float PeriRetangulo (float base, float altura) {
	return (2 * (base + altura));
}

float PeriQuadrado (float lado) {
	return (4 * lado);
}

float PeriCirculo (float raio) {
	return (2 * 3.1415 * raio);
}