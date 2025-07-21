<div align="center">
<img width="384px" alt="Logo Moodle" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Moodle-logo.svg/1200px-Moodle-logo.svg.png">
<br/>
<br/>
<h1>📋 C02 - Vetores</h1>
</div>

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - Facebook](VET-Facebook.cpp)

<h3>Descrição</h3>
<p>
O Facebook serve pra gente encontrar velhos amigos, parentes que nem conhecemos, saber por onde andam as pessoas, e muitas outras coisas.

Há pessoas que têm muitos amigos na rede social, e outras que preferem ter contato apenas com os mais chegados.
Para entender um pouco mais esta dinâmica, o Mark Zucherberg pediu pra você armazenar o número de amigos dos usuários do facebook em um vetor, e mostrar o maior e o menor número armazenado neste.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha da entrada consiste de um único número inteiro, que corresponde ao número de usuários do facebook (0 < N < 1000).

  Na segunda linha, tem-se N números inteiros, que indicam o número de contatos de cada pessoa.
  </p>
  <h3>Saída</h3>
  <p>
  A saída deve mostrar o menor e o maior valor do vetor.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  10
  10 50 21 400 2043 43 128 291 9 355

  ** Output **
  Menor numero de contatos: 9
  Maior numero de contatos: 2043
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - Whindersson Nunes](VET-Whindersson_Nunes.cpp)

<h3>Descrição</h3>
<p>
  Whindersson Nunes é um fenômeno no Youtube: cada vídeo dele tem milhões de visualizações, e o canal do jovem piauiense tem quase 30 milhões de inscritos.

  Ele ganha dinheiro pelo número de visualizações, e decidiu pedir pra você fazer um programa que mostrasse quantos vídeos têm 10 milhões de visualizações ou mais, e quantos têm menos de 10 milhões de visualizações.

  Então, você deve fazer um programa que leia o número de views de cada vídeo, armazene estes dados em um vetor, e forneça os dados listados acima.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha da entrada consiste de um único número inteiro, que corresponde ao número de vídeos a serem analisados (0 < N < 1000).

  Na segunda linha, tem-se N números inteiros, que indicam o número de visualizações de cada vídeo.
  </p>
  <h3>Saída</h3>
  <p>
  A saída deve mostrar quantos vídeos têm mais de 10 milhões de visualizações e quantos têm menos de 10 milhões de visualizações.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  3
  10101231 7453852 22535934

  ** Output **
  2 video(s) com mais de 10M views
  1 video(s) com menos de 10M views
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - Escola Mundial](VET-Escola_Mundial.cpp)

<h3>Descrição</h3>
<p>
A Profa. Helena do terceiro ano está muito atarefada porque o Kokimoto e o Paulo se meteram em encrencas de novo.

Para ajudá-la, você decidiu fazer um programa para ela monitorar o progresso (ou não) de seus alunos.

Faça então um programa que leia as notas deles e mostre a média da turma e o número de alunos com nota abaixo da média e o número de alunos com nota igual ou acima da média.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha consiste de um único inteiro N, que representa o número de alunos da Profa. Helena.

  A segunda linha contém N números reais, que correspondem às notas dos alunos.
  </p>
  <h3>Saída</h3>
  <p>
  A saída deve mostrar a média da turma, com duas casas depois da vírgula, o número de alunos com nota igual ou superior à média da turma, e o número de alunos com nota abaixo da média da turma.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  6
  20.0 100.0 50.0 75.0 40.0 65.0

  ** Output **
  Media da turma: 58.33
  Alunos com nota acima da media: 3
  Alunos com nota abaixo da media: 3
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - La casa de papel](VET-La_casa_de_papel.cpp)

<h3>Descrição</h3>
<p>
La casa de papel é a série não americana de maior sucesso no Netflix, embora tenha gente que odiou.
Depois de uma séria discussão se a série era boa ou não, resolveram fazer uma pesquisa de opinião: quem gostou dava um like, e quem não gostou dava um dislike no facebook.

O seu trabalho é fazer um programa que veja se a série é boa ou não, na opinião da galera.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha da entrada consiste de um único número inteiro, que corresponde ao número de votos (0 < N < 1000).

  Na segunda linha, tem-se N números inteiros, que indicam se a pessoa gostou (+1) ou não (-1) da série.
  </p>
  <h3>Saída</h3>
  <p>
  A saída deve mostrar o resultado da enquete.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  10
  1 -1 -1 1 -1 1 1 1 -1 1

  10
  -1 -1 -1 -1 -1 -1 1 1 1 -1

  6
  1 1 1 -1 -1 -1

  ** Output **
  A maioria gostou

	A maioria nao gostou

	Deu empate
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - Pesquisa](VET-Pesquisa.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia vários números inteiros e os armazene em um vetor.
Depois o programa deve ler um único número X e verificar se este está ou não no vetor.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A primeira linha da entrada consiste de vários números inteiros, terminando com o número 0 (zero), que indica que a entrada de dados terminou. O zero não deve ser inserido no vetor. Você pode admitir que a entrada não vai ter mais que 100 números.

  Na segunda linha, tem-se um único número inteiro X, que é o elemento a ser pesquisado.
  </p>
  <h3>Saída</h3>
  <p>
  A saída deve mostrar uma mensagem informando se o elemento X foi encontrado ou não no vetor. Ainda, se ele for encontrado, deve-se mostrar em que posição o mesmo foi encontrado.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  10 5 6 2 -1 0
  1

  5 4 7 3 -2 0
  0

  2 -1 3 -4 10 20 0
  -4

  ** Output **
  Elemento 1 nao foi encontrado

  Elemento 0 nao foi encontrado

  Elemento -4 encontrado na posicao 3
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - Joãozinho na aula de matemática](VET-Joaozinho_na_aula_de_matematica.cpp)

<h3>Descrição</h3>
<p>
Joãozinho estava na escola e fala para o amigo:
-Aê,descobri como colar na prova oral de tabuada: você só precisa escrever a tabuada na gola da sua camisa e eu leio.
No dia da prova a professora fala:
-Joãozinho fale a tabuada do cinco.
-Uma vez o cinco,cinco; duas vezes o cinco, dez; três vezes o cinco,quinze; 100 por cento algodão.

Faça um programa que leia um inteiro N e mostre a sua tabuada.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  Um número inteiro N, N < 1000.
  </p>
  <h3>Saída</h3>
  <p>
  A tabuada de N
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  140

  ** Output **
  140 x 0 = 0
  140 x 1 = 140
  140 x 2 = 280
  140 x 3 = 420
  140 x 4 = 560
  140 x 5 = 700
  140 x 6 = 840
  140 x 7 = 980
  140 x 8 = 1020
  140 x 9 = 1260
  140 x 10 = 1400
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - Joãozinho 2](VET-Joaozinho_2.cpp)

<h3>Descrição</h3>
<p>
  O professor de matemática pergunta para o Joãozinho:
  O que devo fazer para repartir 11 batatas por 7 pessoas?
  Ele respondeu: Purê de batata.

  Elabore um programa que dados dois vetores X e Y, inteiros de N posições cada, efetue as respectivas operações indicadas por um outro vetor Op de N posições de caracteres também fornecido pelo usuário, contendo as quatro operações aritméticas em qualquer combinação, armazenando os resultados num quarto vetor Z.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A primeira linha contém um único inteiro N (N < 100), que contém o número de casos.
    A segunda linha contém N números inteiros, que devem ser guardados no vetor X.
    A terceira linha contém N números inteiros, que devem ser guardados no vetor Y.
    A quarta linha contém N caracteres, que podem ser +, -, * ou /, e que devem ser guardados no vetor Op.
  </p>

  <h3>Saída</h3>
  <p>
    Para cada caso de teste, o programa deve mostrar a operação realizada, e o resultado. Se o resultado for real, este deve ser apresentado com 2 casas decimais.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  4
  2 3 4 5
  4 4 7 2
  * - + /

  ** Output **
  2 * 4 = 8
  3 - 4 = -1
  4 + 7 = 11
  5 / 2 = 2.50
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [VET - Resultado da corrida](VET-Resultado_da_corrida.cpp)

<h3>Descrição</h3>
<p>
  O organizador de uma corrida armazenou os tempos de cada competidor, e deseja agora saber a classificação de cada um.

  Elabore um programa que leia os tempos de cada corredor e os armazene em um vetor de números reais.

  Depois o programa deve mostrar a classificação da corrida (a posição de cada elemento no vetor identifica o corredor).
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>

  <h3>Entrada</h3>
  <p>
    A entrada consiste de uma única linha com os tempos de cada corredor (real). Esta linha termina com o número -1.
  </p>

  <h3>Saída</h3>
  <p>
    Na saída o programa deve mostrar a classificação geral da corrida. Considere que o primeiro corredor é o de número 0.
  </p>

  <h3>Exemplos</h3>

  ```
  ** Input **
  10.91 9.97 11.23 12.56 9.27 9.51 -1

  ** Output **
  Classificacao:
  4
  5
  1
  0
  2
  3
  ```

</details>
<br/>
