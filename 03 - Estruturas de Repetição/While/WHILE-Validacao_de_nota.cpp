/**
 * @file: WHILE-Validacao_de_nota.cpp
 * @author: Rodrigo Andrade
 * @date: 20 Mar 2025
 * @license: MIT
 * @language: C++
 * @github: https://github.com/RodrigoCAndrade/C02
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  float n1, n2;

  while (cin >> n1 && (n1 < 0 || n1 > 10)) cout << "nota invalida" << endl;

  while (cin >> n2 && (n2 < 0 || n2 > 10)) cout << "nota invalida" << endl;

  cout << "media = " << fixed << setprecision(2) << ((n1 + n2) / 2);
}
