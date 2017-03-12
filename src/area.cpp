/**
 * @file area.cpp
 * @brief Funções que calculam a área das figuras geométricas
 * @author Bianca Rodrigues Cesarino
 * @author Renato Marinheiro
 * @since 09/03/2017
 * @date 12/03/2017
 * @sa https://github.com/binaks/laboratorio1
 */

#include <iostream>
#include <cmath>
#include "../include/area.h"

float AreaTriangulo (float base, float altura) {
	return (base * altura)/2.0;
}
/**
 * @brief Calcula a área do triângulo
 * @param base Base do triângulo
 * @param altura Altura do triângulo
 * @return Área do triângulo
 */


float AreaRetangulo (float base, float altura) {
	return (base * altura);
}
/**
 * @brief Calcula a área do retângulo
 * @param base Base do retângulo
 * @param altura Altura do retângulo
 * @return Área do retângulo
 */

float AreaQuadrado (float lado) {
	return (pow(lado,2));
}
/**
 * @brief Calcula a área do quadrado
 * @param lado Lado do quadrado
 * @return Área do quadrado
 */

float AreaCirculo (float raio) {
	return ( (pow(raio,2)*3.1415) );
}
/**
 * @brief Calcula a área do círculo
 * @param raio Raio do círculo
 * @return Área do círculo
 */


float AreaPiramide (float base, float altura) {
	float area_base = pow(base,2);
	float area_lateral = 4* ( (base*altura)/2);

	return (area_base + area_lateral);
}
/**
 * @brief Calcula a área da pirâmide
 * @param base Base da pirâmide
 * @param altura Altura da pirâmide
 * @return Área da pirâmide
 */

float AreaCubo (float lado) {
	return ( (6 * pow(lado,2) ) );
}
/**
 * @brief Calcula a área do cubo
 * @param lado Lado do cubo
 * @return Área do cubo
 */

float AreaParalelepipedo (float base, float altura, float largura) {
	return ( (2*(base*altura) ) + (2*(base*largura) ) + (2*(altura*largura) ) );
}
/**
 * @brief Calcula a área do paralelepípedo
 * @param base Base do paralelepípedo
 * @param altura Altura do paralelepípedo
 * @param largura Largura do paralelepípedo
 * @return Área do paralelepípedo
 */


float AreaEsfera (float raio) {
	return ( (4 * 3.1415 * pow(raio,2) ) );
}
/**
 * @brief Calcula a área da esfera
 * @param raio Raio da esfera
 * @return Área da esfera
 */