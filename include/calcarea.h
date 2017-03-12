#ifndef CALCAREA_H
#define CALCAREA_H

#include <iostream>
#include "../include/area.h"

void CalcAreaTriangulo (float base, float altura);
/**
 * @brief Chama o cálculo da área do triângulo e mostra seu resultado
 * @param base Base do triângulo
 * @param altura Altura do triângulo
 */

void CalcAreaRetangulo (float base, float altura);
/**
 * @brief Chama o cálculo da área do retângulo e mostra seu resultado
 * @param base Base do retângulo
 * @param altura Altura do retângulo
 */

void CalcAreaQuadrado (float lado);
/**
 * @brief Chama o cálculo da área do quadrado e mostra seu resultado
 * @param lado Lado do quadrado
 */

void CalcAreaCirculo (float raio);
/**
 * @brief Chama o cálculo da área do círculo e mostra seu resultado
 * @param raio Raio do círculo
 */

void CalcAreaPiramide (float base, float altura);
/**
 * @brief Chama o cálculo da área da pirâmide e mostra seu resultado
 * @param base Base da pirâmide
 * @param altura Altura da pirâmide
 */

void CalcAreaCubo (float aresta);
/**
 * @brief Chama o cálculo da área do cubo e mostra seu resultado
 * @param aresta Aresta do cubo
 */


void CalcAreaParalelepipedo (float aresta1, float aresta2, float aresta3);
/**
 * @brief Chama o cálculo da área do paralelepípedo e mostra seu resultado
 * @param aresta1 Aresta 1 do paralelepípedo
 * @param aresta2 Aresta 2 do paralelepípedo
 * @param aresta3 Aresta 3 do paralelepípedo
 */

void CalcAreaEsfera (float raio);
/**
 * @brief Chama o cálculo da área da esfera e mostra seu resultado
 * @param raio Raio da esfera
 */

#endif