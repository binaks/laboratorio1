#ifndef CALCPERIMETRO_H
#define CALCPERIMETRO_H

#include <iostream>
#include "../include/perimetro.h"

void CalcPeriTriangulo (float lado);
/**
 * @brief Chama o cálculo do perímetro do triângulo e mostra seu resultado
 * @param lado Lado do triângulo
 */

void CalcPeriRetangulo (float base, float altura);
/**
 * @brief Chama o cálculo do perímetro do retângulo e mostra seu resultado
 * @param base Base do retângulo
 * @param altura Altura do retângulo
 */

void CalcPeriQuadrado (float lado);
/**
 * @brief Chama o cálculo do perímetro do quadrado e mostra seu resultado
 * @param lado Lado do quadrado
 */

void CalcPeriCirculo (float raio);
/**
 * @brief Chama o cálculo do perímetro do círculo e mostra seu resultado
 * @param raio Raio do círculo
 */

#endif