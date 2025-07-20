/**
 * @file: PROVA-FUNC+VET_1.cpp
 * @author: Rodrigo Andrade
 * @date: 18 Jul 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

// Função para calcular a média de valores em uma lista.
float media(float temp[], int N) {
  float sum = 0;

  for (int i = 0; i < N; i++) sum += temp[i];

  return (sum / N);
}

int main() {
  // temp: vetor para armazenar as temperaturas.
  // aux: auxiliar para ler uma temperatura.
  float temp[1000], aux;
  // Armazena a quantidade de temperaturas.
  int N = 0;

  // Armazena as temperaturas no vetor.
  while (cin >> aux && aux != -100) {
    temp[N] = aux;
    N++;
  }

  // Exibe a media das temperaturas.
  cout << fixed << setprecision(1) << media(temp, N) << endl;

  return 0;
}
