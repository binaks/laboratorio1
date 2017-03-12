/**
 * @file area.cpp
 * @brief Funções que calculam o perímetro das figuras geométricas planas
 * @author Bianca Rodrigues Cesarino
 * @author Renato Marinheiro
 * @since 09/03/2017
 * @date 12/03/2017
 * @sa https://github.com/binaks/laboratorio1
 */

#include <iostream>
#include "../include/perimetro.h"

float PeriTriangulo (float lado) {
	return (3 * lado);
}
/**
 * @brief Calcula o perímetro do triângulo
 * @param lado Lado do triângulo
 * @return Perímetro do triângulo
 */

float PeriRetangulo (float base, float altura) {
	return (2 * (base + altura));
}
/**
 * @brief Calcula o perímetro do retângulo
 * @param base Base do retângulo
 * @param altura Altura do retângulo
 * @return Perímetro do retângulo
 */

float PeriQuadrado (float lado) {
	return (4 * lado);
}
/**
 * @brief Calcula o perímetro do quadrado
 * @param lado Lado do quadrado
 * @return Perímetro do quadrado
 */

float PeriCirculo (float raio) {
	return (2 * 3.1415 * raio);
}
/**
 * @brief Calcula o perímetro do círculo
 * @param raio Raio do círculo
 * @return Perímetro do círculo
 */