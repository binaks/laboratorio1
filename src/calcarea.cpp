/**
 * @file area.cpp
 * @brief Funções que chamam e mostram o resultado do cálculo da área da figura geométrica
 * @author Bianca Rodrigues Cesarino
 * @author Renato Marinheiro
 * @since 09/03/2017
 * @date 12/03/2017
 * @sa https://github.com/binaks/laboratorio1
 */

#include <iostream>
#include "../include/calcarea.h"

using std::cout;
using std::endl;

void CalcAreaTriangulo (float base, float altura) {
	cout << "Área do triângulo: " << AreaTriangulo(base, altura) << endl;
}
/**
 * @brief Chama o cálculo da área do triângulo e mostra seu resultado
 * @param base Base do triângulo
 * @param altura Altura do triângulo
 */

void CalcAreaRetangulo (float base, float altura) {
	cout << "Área do retângulo: " << AreaRetangulo(base, altura) << endl;
}
/**
 * @brief Chama o cálculo da área do retângulo e mostra seu resultado
 * @param base Base do retângulo
 * @param altura Altura do retângulo
 */

void CalcAreaQuadrado (float lado) {
	cout << "Área do quadrado: " << AreaQuadrado(lado) << endl;
}
/**
 * @brief Chama o cálculo da área do quadrado e mostra seu resultado
 * @param lado Lado do quadrado
 */

void CalcAreaCirculo (float raio) {
	cout << "Área do círculo: " << AreaCirculo(raio) << endl;
}
/**
 * @brief Chama o cálculo da área do círculo e mostra seu resultado
 * @param raio Raio do círculo
 */

void CalcAreaPiramide (float base, float altura) {
	cout << "Área da piramide: " << AreaPiramide(base, altura) << endl;
}
/**
 * @brief Chama o cálculo da área da pirâmide e mostra seu resultado
 * @param base Base da pirâmide
 * @param altura Altura da pirâmide
 */

void CalcAreaCubo (float aresta) {
	cout << "Área do cubo: " << AreaCubo(aresta) << endl;
}
/**
 * @brief Chama o cálculo da área do cubo e mostra seu resultado
 * @param aresta Aresta do cubo
 */


void CalcAreaParalelepipedo (float aresta1, float aresta2, float aresta3) {
	cout << "Área do paralelepípedo: " << AreaParalelepipedo(aresta1, aresta2, aresta3) << endl;
}
/**
 * @brief Chama o cálculo da área do paralelepípedo e mostra seu resultado
 * @param aresta1 Aresta 1 do paralelepípedo
 * @param aresta2 Aresta 2 do paralelepípedo
 * @param aresta3 Aresta 3 do paralelepípedo
 */

void CalcAreaEsfera (float raio) {
	cout << "Área da esfera: " << AreaEsfera(raio) << endl;
}
/**
 * @brief Chama o cálculo da área da esfera e mostra seu resultado
 * @param raio Raio da esfera
 */