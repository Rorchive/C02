<div align="center">
<img width="384px" alt="Logo Moodle" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Moodle-logo.svg/1200px-Moodle-logo.svg.png">
<br/>
<br/>
<h1>📋 C02 - Strings</h1>
</div>

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STR - DDD](STR-DDD.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia o nome de uma cidade e retorne seu DDD, segundo a tabela abaixo:
</p>

| Cidade                | DDD |
| --------------------- | --- |
| Brasilia              | 61  |
| Salvador              | 71  |
| Sao Paulo             | 11  |
| Rio de Janeiro        | 21  |
| Juiz de Fora          | 32  |
| Campinas              | 19  |
| Vitoria               | 27  |
| Belo Horizonte        | 31  |
| Santa Rita do Sapucai | 35  |

Se a entrada não for encontrada na tabela acima, a saída deve ser: DDD nao cadastrado

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste do nome de uma cidade.
  </p>
  <h3>Saída</h3>
  <p>
  Mostre o DDD da cidade. Mostre a mensagem DDD nao cadastrado se a cidade não constar da tabela.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  Brasilia

  ** Output **
  61
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STR - Animal](STR-Animal.cpp)

<h3>Descrição</h3>
<p>
  Neste problema, seu trabalho é ler três palavras que definem um animal de acordo com a figura abaixo. Depois, mostre o nome do animal definido por estas três palavras

  ![Diagrama Animal](assets/animal.png)
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada contém 3 palavras, uma por linha, que serão usadas para identificar o animal, de acordo com a figura acima, com todas as letras minúsculas.
  </p>
  <h3>Saída</h3>
  <p>
  Mostre o nome do animal de acordo com a entrada dada.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  vertebrado
  mamifero
  onivoro

  vertebrado
  ave
  carnivoro

  invertebrado
  anelideo
  onivoro

  ** Output **
  homem

  aguia

  minhoca
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STR - Vai Curíntia!](STR-Vai_Curintia.cpp)

<h3>Descrição</h3>
<p>
Com a onda de "gatos" invadindo o futebol, você foi contratado pelo Corinthians para recadastrar todos os jogadores do clube.

Faça um programa que leia o nome e a idade de cada jogador, e mostre somente aqueles que são maiores de idade.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha da entrada contém um único número inteiro N, que é o número de atletas a serem cadastrados.

  Para cada atleta, o programa deve ler o nome e a idade, sendo que cada informação é dada em uma linha separada.
  </p>
  <h3>Saída</h3>
  <p>
  Para cada atleta maior de idade, o programa deve mostrar o nome e a idade. Se nãou houver nenhum jogador maior de idade, o programa deve mostrar a mensagem "Nenhum jogador com 18 anos ou mais".
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  3
  Socrates Brasileiro
  38
  Rivelino
  45
  Joaozinho da Serra
  5

  1
  Joao Felix 17

  ** Output **
  Socrates Brasileiro 38
  Rivelino 45

  Nenhum jogador com 18 anos ou mais
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STR - Mais uma do Joãozinho](STR-Mais_uma_do_Joaozinho.cpp)

<h3>Descrição</h3>
<p>
A professora Helena não consegue corrigir as provas e lançar as notas por causa das artes do Joãozinho. Pediu então que você fizesse um programa pra ela lançar as notas e calcular a média de cada aluno automaticamente.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha da entrada consiste de um inteiro N, que corresponde ao número de alunos da Profa. Helena.

  Depois, o programa deve ler o nome de cada aluno, e as 4 notas, N1, N2, N3 e N4, que cada um recebeu.
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve mostrar o nome do aluno, seguido de sua média, com 2 casas decimais. A média é calculada a partir da soma ponderada das 4 notas, como a seguir:

  MEDIA = (N1 + 2 * N2 + 3 * N3 + 4 * N4) / 10
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  4
  Cirilo Rivera
  4 5 2 7
  Maria Joaquina
  10 10 10 10
  Jaime Palillo
  1 3 2 4
  Kokimoto Mishima
  3 5 7 2

  ** Output **
  Cirilo Rivera: 4.80
  Maria Joaquina: 10.00
  Jaime Palillo: 2.90
  Kokimoto Mishima: 4.20
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STR - Pedra, papel, tesoura](STR-Pedra_papel_tesoura.cpp)

<h3>Descrição</h3>
<p>
Pedra, papel e tesoura é um  é um jogo de mãos recreativo e simples para duas ou mais pessoas, que não requer equipamentos nem habilidade. Neste os jogadores devem simultaneamente esticar a mão, na qual cada um formou um símbolo (que significa pedra, papel ou tesoura). Então, os jogadores comparam os símbolos para decidir quem ganhou, da seguinte forma:

  - Pedra ganha da tesoura (amassando-a ou quebrando-a).
  - Tesoura ganha do papel (cortando-o).
  - Papel ganha da pedra (embrulhando-a).
  - Se ambos mostrarem o mesmo símbolo, então ocorreu um empate.

Dadas as opções escolhidas por cada jogador, faça um programa que determine o vencedor de cada partida.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha da entrada consiste de um inteiro T, que corresponde ao número de casos de teste.

  Para cada caso de teste haverá duas linhas, uma para cada jogador (jogador A primeiro). As entradas possíveis serão "pedra", "papel" e "tesoura".
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve mostrar o vencedor de cada partida (Jogador A ou Jogador B), ou a mensagem "Empate", se os dois jogadores mostrarem a mesma figura.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  3
  papel
  tesoura
  pedra
  pedra
  papel
  pedra

  ** Output **
  Jogador B
  Empate
  Jogador A
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STR - Ordem alfabética](STR-Ordem_alfabetica.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia três palavras e as mostre em ordem alfabética
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de três linhas, com uma palavra por linha. Todas as palavras serão escritas somente com letras minúsculas.
  </p>
  <h3>Saída</h3>
  <p>
  O programa deve mostrar as 3 palavras lidas em uma única linha, separadas por um espaço em branco, e em ordem alfabética.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  telefone
  casa
  morango

  ** Output **
  casa morango telefone
  ```

</details>
<br/>
