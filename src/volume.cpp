/**
 * @file area.cpp
 * @brief Funções que calculam o volume das figuras geométricas espaciais
 * @author Bianca Rodrigues Cesarino
 * @author Renato Marinheiro
 * @since 09/03/2017
 * @date 12/03/2017
 * @sa https://github.com/binaks/laboratorio1
 */

#include <iostream>
#include <cmath>
#include "../include/volume.h"

float VolPiramide (float area_base, float altura) {
	return ((area_base * altura)/3);
}
/**
 * @brief Calcula o volume da pirâmide
 * @param  area_base Área da base da pirâmide
 * @param altura Altura da pirâmide
 * @return Volume da pirâmide
 */


float VolCubo (float aresta) {
	return (pow(aresta,3));
}
/**
 * @brief Calcula o volume do cubo
 * @param aresta Aresta do cubo
 * @return Volume do cubo
 */

float VolParalelepipedo (float aresta1, float aresta2, float aresta3) {
	return (aresta1 * aresta2 * aresta3);
}
/**
 * @brief Calcula o volume do paralelepípedo
 * @param aresta1 Aresta do paralelepípedo
 * @param aresta2 (Outra) aresta do paralelepípedo
 * @param aresta3 (Outra) aresta do paralelepípedo
 * @return Volume do paralelepípedo
 */

float VolEsfera (float raio) {
	return (4/3 * (3.1415 * pow(raio,3)));
}
/**
 * @brief Calcula o volume da esfera
 * @param raio Raio da esfera
 * @return Volume da esfera
 */