/**
 * @file area.cpp
 * @brief Funções que chamam e mostram o resultado do cálculo do volume da figura geométrica espacial
 * @author Bianca Rodrigues Cesarino
 * @author Renato Marinheiro
 * @since 09/03/2017
 * @date 12/03/2017
 * @sa https://github.com/binaks/laboratorio1
 */

#include <iostream>
#include "../include/calcvolume.h"

using std::cout;
using std::endl;

void CalcVolPiramide (float base, float altura) {
	cout << "Volume da pirâmide: " << VolPiramide(base, altura) << endl;
}
/**
 * @brief Chama o cálculo do volume da pirâmide e mostra seu resultado
 * @param base Base da pirâmide
 * @param altura Altura da pirâmide
 */

void CalcVolCubo (float aresta) {
	cout << "Volume do cubo: " << VolCubo(aresta) << endl;
}
/**
 * @brief Chama o cálculo do volume do cubo e mostra seu resultado
 * @param aresta Aresta do cubo
 */


void CalcVolParalelepipedo (float aresta1, float aresta2, float aresta3) {
	cout << "Volume do paralelepípedo: " << VolParalelepipedo(aresta1, aresta2, aresta3) << endl;
}
/**
 * @brief Chama o cálculo do volume do paralelepípedo e mostra seu resultado
 * @param aresta1 Aresta 1 do paralelepípedo
 * @param aresta2 Aresta 2 do paralelepípedo
 * @param aresta3 Aresta 3 do paralelepípedo
 */

void CalcVolEsfera (float raio) {
	cout << "Volume da esfera: " << VolEsfera(raio) << endl;
}
/**
 * @brief Chama o cálculo do volume da esfera e mostra seu resultado
 * @param raio Raio da esfera
 */