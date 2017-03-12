#ifndef CALCVOLUME_H
#define CALCVOLUME_H

#include <iostream>
#include "../include/volume.h"

void CalcVolPiramide (float base, float altura);
/**
 * @brief Chama o cálculo do volume da pirâmide e mostra seu resultado
 * @param base Base da pirâmide
 * @param altura Altura da pirâmide
 */

void CalcVolCubo (float aresta);
/**
 * @brief Chama o cálculo do volume do cubo e mostra seu resultado
 * @param aresta Aresta do cubo
 */


void CalcVolParalelepipedo (float aresta1, float aresta2, float aresta3);
/**
 * @brief Chama o cálculo do volume do paralelepípedo e mostra seu resultado
 * @param aresta1 Aresta 1 do paralelepípedo
 * @param aresta2 Aresta 2 do paralelepípedo
 * @param aresta3 Aresta 3 do paralelepípedo
 */

void CalcVolEsfera (float raio);
/**
 * @brief Chama o cálculo do volume da esfera e mostra seu resultado
 * @param raio Raio da esfera
 */

#endif