/**
 * @file: STRUCT-Padawan.cpp
 * @author: Rodrigo Andrade
 * @date: 26 May 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct padawan {
  string nome;
  float pontos;
};

padawan createPadawan(const string& nome, float pontos) {
  return {nome, pontos};
}

int main() {
  int n_padawans;
  cin >> n_padawans;

  if (n_padawans <= 0) {
    cout << "Padawan com mais pontos: nenhum" << endl;
    cout << "Pontos: 0" << endl;
    cout << "Media da turma: 0 pontos" << endl;

    return 0;
  }

  if (n_padawans > 1000) n_padawans = 1000;

  padawan padawans[1000];

  string nome;
  float pontos;

  for (int i = 0; i < n_padawans; i++) {
    getline(cin >> ws, nome);
    cin >> pontos;

    padawans[i] = createPadawan(nome, pontos);
  }

  float max_pontos = padawans[0].pontos;
  int padawan_id = 0;
  float total_pontos = 0;

  for (int j = 0; j < n_padawans; j++) {
    total_pontos += padawans[j].pontos;
    if (max_pontos < padawans[j].pontos) {
      max_pontos = padawans[j].pontos;
      padawan_id = j;
    }
  }

  cout << "Padawan com mais pontos: " << padawans[padawan_id].nome << endl;
  cout << "Pontos: " << padawans[padawan_id].pontos << endl;
  cout << "Media da turma: " << fixed << setprecision(2) << (total_pontos / n_padawans) << " pontos"
       << endl;

  return 0;
}