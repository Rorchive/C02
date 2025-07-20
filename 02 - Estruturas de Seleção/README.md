<h1 align="center">📝 Estruturas de Seleção</h1>

## 📋 Exercícios
1. 🚀 [Teste de Seleção 1](IF-Teste_de_selecao_1.cpp)
2. 📏 [Intervalo](IF-Intervalo.cpp)
3. 🍔 [Lanche](IF-Lanche.cpp)
4. 📍 [Coordenadas de um Ponto](IF-Coordenadas_de_um_ponto.cpp)
5. 🔢 [Ordenação Simples](IF-Ordenacao_simples.cpp)
6. 📞 [DDD](IF-DDD.cpp)
7. 💰 [Taxas](IF-Taxas.cpp)
8. 📅 [Mês](IF-Mes.cpp)
9. 📐 [Fórmula de Bhaskara](IF-Formula_de_Baskara.cpp)
10. 🗓️ [Dia da Semana](IF-Dia_da_semana.cpp)
11. 🏢 [Elevador](IF-Elevador.cpp)
12. ⚫ [Desafio dos Círculos](IF-Desafio_Circulos.cpp)
13. 🧑‍🤝‍🧑 [Equipes de Projeto](IF-Equipes_de_Projeto.cpp)

---

## 🚀 Teste de Seleção 1

<strong>Descrição</strong>
<p>Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  Quatro números inteiros A, B, C e D.
  </p>
  <strong>Saída:</strong><br/>
  Mostre a respectiva mensagem de acordo com a validação dos valores.
  </p>

  **Exemplos:**

  | Entrada   | Saída                 |
  | --------- | --------------------- |
  | `5 6 7 8` | `Valores nao aceitos` |
  | `2 3 2 6` | `Valores aceitos`     |

  <br/>
</details>

---

## 📏 Intervalo

<strong>Descrição</strong>
<p>Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente, se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  O arquivo de entrada contém um número com ponto flutuante qualquer.
  </p>
  <strong>Saída:</strong><br/>
  A saída deve ser uma mensagem conforme exemplo abaixo.
  </p>

  **Exemplos:**

  | Exemplos de Entrada | Exemplos de Saída  |
  | ------------------- | ------------------ |
  | 25.01               | Intervalo (25,50]  |
  | 25.00               | Intervalo [0,25]   |
  | 100.00              | Intervalo (75,100] |
  | -25.02              | Fora de intervalo  |

  <br/>
</details>

---
## 🍔 Lanche

<strong>Descrição</strong>
<p>Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.</p>

| Código | Especificação   | Preço   |
| ------ | --------------- | ------- |
| 1      | Cachorro Quente | R$ 4.00 |
| 2      | X-Salada        | R$ 4.50 |
| 3      | X-Bacon         | R$ 5.00 |
| 4      | Torrada simples | R$ 2.00 |
| 5      | Refrigerante    | R$ 1.50 |

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.
  </p>
  <strong>Saída:</strong><br/>
  O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
  </p>

  **Exemplos:**

  | Entrada | Saída             |
  | ------- | ----------------- |
  | `3 2`   | `Total: R$ 10.00` |
  | `4 3`   | `Total: R$ 6.00`  |

  <br/>
</details>

---
## 📍 Coordenadas de um Ponto

<strong>Descrição</strong>
<p>Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).<br/><br/>Se o ponto estiver na origem, escreva a mensagem “Origem”.<br/><br/>Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  A entrada contem as coordenadas de um ponto.
  </p>
  <strong>Saída:</strong><br/>
  A saída deve apresentar o quadrante em que o ponto se encontra.
  </p>

  **Exemplos:**

  | Entrada    | Saída    |
  | ---------- | -------- |
  | `4.5 -2.2` | `Q4`     |
  | `0.1 0.1`  | `Q1`     |
  | `0.0 0.0`  | `Origem` |

  <br/>
</details>

---
## 🔢 Ordenação Simples

<strong>Descrição</strong>
<p>Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  A entrada contem três números inteiros.
  </p>
  <strong>Saída:</strong><br/>
  Imprima a saída conforme foi especificado.
  </p>

  **Exemplos:**

  | Entrada    | Saída                      |
  | ---------- | -------------------------- |
  | `7 21 -14` | `-14\n7\n21\n\n7\n21\n-14` |

  <br/>
</details>

---

## 📞 DDD

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>

---

## 💰 Impostos

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>

---

## 📅 Mês

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>

---

## 📐 Fórmula de Bhaskara

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>

---

## 🗓️ Dia da Semana

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>

---

## 🏢 Elevador

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>

---

## ⚫ Desafio dos Círculos

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>

---

## 🧑‍🤝‍🧑 Equipes de Projeto

<strong>Descrição</strong>
<p>[Descrição do exercício]</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <p>
  <br/>
  <strong>Entrada:</strong><br/>
  [Entrada esperada]
  </p>
  <strong>Saída:</strong><br/>
  [Saída do programa]
  </p>

  **Exemplos:**

  | Entrada | Saída |
  | ------- | ----- |
  | `...`   | `...` |

  <br/>
</details>
