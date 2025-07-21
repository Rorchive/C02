<div align="center">
  <img width="384px" alt="Logo Moodle" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Moodle-logo.svg/1200px-Moodle-logo.svg.png">
</div>

<br/>
<br/>

<h1 align="center">📋 C02 - Estruturas de Repetição (WHILE)</h1>

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE - Crescente e decrescente](WHILE-Crescente_e_decrescente.cpp)

<h3>Descrição</h3>
<p>
  Leia uma quantidade indeterminada de duplas de valores inteiros X e Y.

  Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.
  </p>

  <h3>Saída</h3>
  <p>
    Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  0 2
  3 -1
  2 2

  ** Output **
  Crescente
  Decrescente
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE - Senha fixa](WHILE-Senha_fixa.cpp)

<h3>Descrição</h3>
<p>
  Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada é composta por vários casos de testes contendo valores inteiros.
  </p>

  <h3>Saída</h3>
  <p>
    Para cada valor lido mostre a mensagem correspondente à descrição do problema.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  2200
  1020
  2022
  2002

  ** Output **
  Senha Invalida
  Senha Invalida
  Senha Invalida
  Acesso Permitido
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE - Quadrante](WHILE-Quadrante.cpp)

<h3>Descrição</h3>
<p>
  Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.
  </p>

  <h3>Saída</h3>
  <p>
    Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  2 2
  3 -2
  -8 -1
  -7 1
  0 2

  ** Output **
  primeiro
  quarto
  terceiro
  segundo
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [Titulo](Link)

<h3>Descrição</h3>
<p>
  Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada contém vários valores reais, positivos ou negativos. O programa deve ser encerrado quando forem lidas duas notas válidas.
  </p>

  <h3>Saída</h3>
  <p>
  Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".

  Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. O valor deve ser apresentado com duas casas após o ponto decimal.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  -3.5
  3.5
  11.0
  10.0

  ** Output **
  nota invalida
  nota invalida
  media = 6.75
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE - Várias notas com validação](WHILE-Varias_notas_com_validacao.cpp)

<h3>Descrição</h3>
<p>
  Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

  No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    O arquivo de entrada contém vários valores reais, positivos ou negativos. Quando forem lidas duas notas válidas, deve ser lido um valor inteiro X. O programa deve parar quando o valor lido para este X for igual a 2.
  </p>

  <h3>Saída</h3>
  <p>
  Se uma nota inválida for lida, deve ser impressa a mensagem “nota invalida”. Quando duas notas válidas forem lidas, deve ser impressa a mensagem “media = ” seguido do valor do cálculo.

  Antes da leitura de X deve ser impressa a mensagem "novo calculo (1-sim 2-nao)" e esta mensagem deve ser apresentada novamente se o valor da entrada padrão para X for menor do que 1 ou maior do que 2, conforme o exemplo abaixo.

  A média deve ser impressa com dois dígitos após o ponto decimal.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  -3.5
  3.5
  11.0
  10.0
  7
  1
  8.0
  9.0
  2

  ** Output **
  nota invalida
  nota invalida
  media = 6.75
  novo calculo (1-sim 2-nao)
  novo calculo (1-sim 2-nao)
  media = 8.50
  novo calculo (1-sim 2-nao)
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE - Grenais](WHILE-Grenais.cpp)

<h3>Descrição</h3>
<p>
  A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:

  - Quantos GRENAIS fizeram parte da estatística.
  - O número de vitórias do Inter.
  - O número de vitórias do Grêmio.
  - O número de Empates.
  - Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.
  </p>

  <h3>Saída</h3>
  <p>
    Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  3 2
  1
  2 3
  1
  3 1
  2

  ** Output **
  Novo grenal (1-sim 2-nao)
  Novo grenal (1-sim 2-nao)
  Novo grenal (1-sim 2-nao)
  3 grenais
  Inter: 2
  Gremio: 1
  Empates: 0
  Inter venceu mais
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE-3n+1](WHILE-3n+1.cpp)

<h3>Descrição</h3>
<p>
  Dado um número n:

  - se ele for par, divida-o por 2

  - se ele for ímpar, multiplique-o por 3 e some 1.

  Dada a entrada 22, a seguinte sequência de números será impressa:

  22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

  Conjectura-se que o algoritmo acima irá terminar (quando um 1 for impresso) para qualquer valor inteiro. Apesar da simplicidade do algoritmo, não se sabe se esta conjectura é verdadeira. Entretanto, verificou-se que esta é verdadeira para todos os inteiros n tais que 0 < n < 1.000.000

  Dada uma entrada n, é possível determinar a quantidade de números impressos até que o número 1 seja impresso. Para um dado número n, esta é chamada de comprimento de ciclo de n. No exemplo anterior, o comprimento de ciclo de 22 é 16.

  Para quaisquer números i e j, você deve determinar o comprimento de ciclo máximo de todos os números entre e incluindo i e j.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada irá consistir de um par de inteiros i e j. Todos os inteiros serão menores que 10000 e maiores que 0. Você pode assumir que nenhuma operação irá produzir um overflow para inteiros de 32 bits.
  </p>

  <h3>Saída</h3>
  <p>
    A saída deve apresentar i, j, e o maior comprimento de ciclo para os inteiros entre e incluindo i e j. Estes três números devem mostrados em uma única linha, e devem estar separados por um espaço em branco. Os inteiros i e j devem aparecer na saída na mesma ordem na qual apareceram na entrada.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  1 10
  100 200

  ** Output **
  1 10 20
  100 200 125
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE-Primo](WHILE-Primo.cpp)

<h3>Descrição</h3>
<p>
  Faça um programa que leia um número inteiro N, e verifique se o mesmo é primo.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    Um inteiro N (N <= 1000)
  </p>

  <h3>Saída</h3>
  <p>
    Se N for primo, o programa deve apresentar a mensagem "primo", senão, o programa deve apresentar a mensagem "nao e primo".
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  1
  4
  13
  243

  ** Output **
  primo
  nao e primo
  primo
  nao e primo
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [WHILE-Seno e cosseno](WHILE-Seno_e_cosseno.cpp)

<h3>Descrição</h3>
<p>
  Escreva um programa que leia dois números reais N1 e N2, correspondentes aos limites inferior e superior de um intervalo para um ângulo θ, e verifique para quais valores de θ a expressão sinθ*cosθ é positiva. Faça a verificação para θ ∈ [N1, N2], com intervalos de 0,1 radianos.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    Dois valores reais N1 e N2, sendo que N1 < N2.
  </p>

  <h3>Saída</h3>
  <p>
    O programa deve apresentar o intervalo onde a expressão sinθ*cosθ é positiva. Os limites inferior e superior do intervalo devem ser apresentados com 1 casa decimal.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  0 2
  3 5

  ** Output **
  0.1 a 1.5
  3.2 a 4.7
  ```

</details>
<br/>
