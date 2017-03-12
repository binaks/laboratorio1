#ifndef VOLUME_H
#define VOLUME_H

#include <iostream>

float VolPiramide (float area_base, float altura);
/**
 * @brief Calcula o volume da pirâmide
 * @param  area_base Área da base da pirâmide
 * @param altura Altura da pirâmide
 * @return Volume da pirâmide
 */

float VolCubo (float aresta);
/**
 * @brief Calcula o volume do cubo
 * @param aresta Aresta do cubo
 * @return Volume do cubo
 */

float VolParalelepipedo (float aresta1, float aresta2, float aresta3);
/**
 * @brief Calcula o volume do paralelepípedo
 * @param aresta1 Aresta do paralelepípedo
 * @param aresta2 (Outra) aresta do paralelepípedo
 * @param aresta3 (Outra) aresta do paralelepípedo
 * @return Volume do paralelepípedo
 */

float VolEsfera (float raio);
/**
 * @brief Calcula o volume da esfera
 * @param raio Raio da esfera
 * @return Volume da esfera
 */

#endif