/**
 * @file area.cpp
 * @brief Funções que chamam e mostram o resultado do cálculo da área da figura geométrica plana
 * @author Bianca Rodrigues Cesarino
 * @author Renato Marinheiro
 * @since 09/03/2017
 * @date 12/03/2017
 * @sa https://github.com/binaks/laboratorio1
 */

#include <iostream>
#include "../include/calcperimetro.h"

using std::cout;
using std::endl;

void CalcPeriTriangulo (float lado) {
	cout << "Perímetro do triângulo: " << PeriTriangulo(lado) << endl;
}
/**
 * @brief Chama o cálculo do perímetro do triângulo e mostra seu resultado
 * @param lado Lado do triângulo
 */

void CalcPeriRetangulo (float base, float altura) {
	cout << "Perímetro do retângulo: " << PeriRetangulo(base, altura) << endl;
}
/**
 * @brief Chama o cálculo do perímetro do retângulo e mostra seu resultado
 * @param base Base do retângulo
 * @param altura Altura do retângulo
 */

void CalcPeriQuadrado (float lado) {
	cout << "Perímetro do quadrado: " << PeriQuadrado(lado) << endl;
}
/**
 * @brief Chama o cálculo do perímetro do quadrado e mostra seu resultado
 * @param lado Lado do quadrado
 */

void CalcPeriCirculo (float raio) {
	cout << "Perímetro do círculo: " << PeriCirculo(raio) << endl;
}
/**
 * @brief Chama o cálculo do perímetro do círculo e mostra seu resultado
 * @param raio Raio do círculo
 */