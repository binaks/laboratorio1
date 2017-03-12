#include <iostream>
#include "../include/calcvolume.h"

using std::cin;
using std::cout;
using std::endl;

void CalcVolPiramide (float base, float altura) {
	cout << "Volume da pirâmide: " << VolPiramide(base, altura) << endl;
}

void CalcVolCubo (float aresta) {
	cout << "Volume do cubo: " << VolCubo(aresta) << endl;
}

void CalcVolParalelepipedo (float aresta1, float aresta2, float aresta3) {
	cout << "Volume do paralelepípedo: " << VolParalelepipedo(aresta1, aresta2, aresta3) << endl;
}

void CalcVolEsfera (float raio) {
	cout << "Volume da esfera: " << VolEsfera(raio) << endl;
}