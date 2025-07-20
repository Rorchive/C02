/**
 * @file: PROVA-STRUCT_1.cpp
 * @author: Rodrigo Andrade
 * @date: 18 Jul 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

// Struct para armazenar as coordenadas de um ponto.
struct ponto {
  int x, y;
};

int main() {
  // Vetor para armazenar dois pontos.
  ponto pontos[2];

  // Lê dois pontos.
  for (int i = 0; i < 2; i++) {
    float x, y;
    cin >> x >> y;

    ponto aux;
    aux.x = x;
    aux.y = y;

    pontos[i] = aux;
  }

  // Calcula a distância entre dois pontos.
  float dist = sqrt((pontos[0].x - pontos[1].x) * (pontos[0].x - pontos[1].x) +
                    (pontos[0].y - pontos[1].y) * (pontos[0].y - pontos[1].y));

  // Exibe a distância entre dois pontos.
  cout << fixed << setprecision(2) << dist << endl;

  return 0;
}
