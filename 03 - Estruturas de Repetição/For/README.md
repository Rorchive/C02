<div align="center">
  <img width="384px" alt="Logo Moodle" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Moodle-logo.svg/1200px-Moodle-logo.svg.png">
</div>

<br/>
<br/>

<h1 align="center">📋 C02 - Estruturas de Repetição (FOR)</h1>

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FOR - Números positivos](FOR-Numeros_positivos.cpp)

<h3>Descrição</h3>
<p>
  Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    Seis valores, negativos e/ou positivos.
  </p>

  <h3>Saída</h3>
  <p>
    Imprima uma mensagem dizendo quantos valores positivos foram lidos.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  5 6 7 -2 -7 3

  ** Output **
  4 valores positivos
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FOR - Números positivos e média](FOR-Numeros_positivos_e_media.cpp)

<h3>Descrição</h3>
<p>
  Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.
  </p>

  <h3>Saída</h3>
  <p>
    O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  7 -5 6 -3.4 4.6 12

  ** Output **
  4 valores positivos
  7.4
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FOR - Pares entre Cinco Números](FOR-Pares_entre_Cinco_Numeros.cpp)

<h3>Descrição</h3>
<p>
  Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    O arquivo de entrada contém 5 valores inteiros quaisquer.
  </p>

  <h3>Saída</h3>
  <p>
    Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  7 -5 -4 2 8

  ** Output **
  3 valores pares
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FOR - Quadrado de pares](FOR-Quadrado_de_pares.cpp)

<h3>Descrição</h3>
<p>
  Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada contém um valor inteiro N (5 < N < 2000).
  </p>

  <h3>Saída</h3>
  <p>
  Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

  Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que isso não ocorra.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  6

  ** Output **
  2^2 = 4
  4^2 = 16
  6^2 = 36
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FOR - Par ou ímpar](FOR-Par_ou_impar.cpp)

<h3>Descrição</h3>
<p>
  Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A primeira linha da entrada contém um valor inteiro N(N < 10000) que indica o número de casos de teste. Cada caso de teste a seguir é um valor inteiro X (-10^7 < X < 10^7).
  </p>

  <h3>Saída</h3>
  <p>
    Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo. Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço entre duas palavras impressas na mesma linha.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  4
  -5
  0
  3
  -4

  ** Output **

  ODD NEGATIVE
  NULL
  ODD POSITIVE
  EVEN NEGATIVE
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FOR - Fibonacci](FOR-Fibonacci.cpp)

<h3>Descrição</h3>
<p>
  A Sequência de Fibonacci consiste em uma sucessão de números, tais que, definindo os dois primeiros números da sequência como 0 e 1, os números seguintes serão obtidos por meio da soma dos seus dois antecessores. Portanto, os números são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987,1597, 2584, 4181...

  Dessa sequência, ao se dividir qualquer número pelo anterior, extrai-se a razão que é um "número irracional algébrico" conhecido como número de ouro, denotado com o símbolo "φ".

  A sua tarefa é fazer um programa que gere os N primeiros termos da sequência de Fibonacci.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada consiste de um único inteiro N, que corresponde ao número de termos da sequência que devem ser mostrados (0 < N < 100).
  </p>

  <h3>Saída</h3>
  <p>
    A saída deve mostrar os N primeiros da sequência de Fibonacci.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  2
  5
  8

  ** Output **
  0 1
  0 1 1 2 3
  0 1 1 2 3 5 8 13
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FOR - H](FOR-H.cpp)

<h3>Descrição</h3>
<p>
  Sendo H = 1 + 1/2 + 1/3 + ⋯ + 1/N, construa um programa que calcule o valor de H para um dado valor de N.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    Um inteiro N (N <= 1000)
  </p>

  <h3>Saída</h3>
  <p>
    O programa deve apresentar o valor calculado para H, com 4 casas decimais.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  1
  4
  8
  11

  ** Output **
  1.0000
  2.0833
  2.7179
  3.0199
  ```

</details>
<br/>
