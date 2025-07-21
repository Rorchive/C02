<div align="center">
<img width="384px" alt="Logo Moodle" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Moodle-logo.svg/1200px-Moodle-logo.svg.png">
<br/>
<br/>
<h1>📋 C02 - Structs</h1>
</div>

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STRUCT - Pré-Noob](STRUCT-Pre-Noob.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia o número de matrícula e as notas (reais) de duas provas de um aluno, e armazene estas informações em uma struct adequada.
Depois o programa deve mostrar os dados armazenados na tela.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  Número de matrícula, nota da primeira prova, nota da segunda prova.
  </p>
  <h3>Saída</h3>
  <p>
  Os valores digitados, sendo que as notas devem ser mostradas com duas casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  4223 70.00 71.00

  ** Output **
  Matricula do aluno: 4223
  Nota da primeira prova: 70.00
  Nota da segunda prova: 71.00
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STRUCT - Noob](STRUCT-Noob.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia o número de matrícula e as notas de duas provas de um aluno (as notas são reais), e armazene estas informações em uma struct adequada.
Depois o programa deve calcular a média do aluno (uma média ponderada, onde a primeira prova tem peso 2 e a segunda, peso 3), e guardar este resultado na struct também.

Finalmente, o programa deve mostrar os dados na tela.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  Número de matrícula, nota da primeira prova, nota da segunda prova.
  </p>
  <h3>Saída</h3>
  <p>
  Os valores digitados e a média final do aluno. As notas e a média devem ser mostradas com 2 casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  4223 70.0 71.0

  ** Output **
  Matricula do aluno: 4223
  Nota da primeira prova: 70.00
  Nota da segunda prova: 71.00
  Media: 70.60
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STRUCT - Stormtroopers](STRUCT-Stormtroopers.cpp)

<h3>Descrição</h3>
<p>
Os Stormtroopers são a tropa de base do Império Galáctico, e são montados a partir dos clones que participaram da derrubada da República.
Embora sejam clones, com o passar do tempo, começam a se diferenciar, por conta das diferentes missões que participam.
O Império criou então um conjunto de índices para controlar a eficácia de cada um dos membros desta tropa de elite. Estes indicadores são:

- Índice de Maldade (IM): mede o quão malvada é esta unidade
- Força de Abate (FA): proporcional ao número de inimigos abatidos

Temos uma missão importante para cumprir, então o comandante Darth Vader ordenou então que você fizesse um programa para cadastrar cada um dos Stormtroopers, e mostrar aquele mais apto para esta missão. O grau de aptidão (GA) pode ser calculado como a média aritmética dos dois índices acima.

Sugiro que você faça este programa rápido, e sem erros, senão você sabe o que vai acontecer...
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  Para cada Stormtrooper, tem-se uma linha na entrada. Esta linha consiste da identificação de cada soldado (um número inteiro), seu IM e seu FA (números reais entre 0 e 1).

  A entrada de dados termina quando for digitado um Id igual a zero.
  </p>
  <h3>Saída</h3>
  <p>
  Id do Stormtrooper escolhido, e seu grau de aptidão, este com duas casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  2134 0.2 0.5
  4432 0.7 0.8
  6154 0.2 0.9
  0

  ** Output **
  Stormtrooper escolhido: 4432
  GA = 0.75
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STRUCT - Padawan](STRUCT-Padawan.cpp)

<h3>Descrição</h3>
<p>
Um Padawan se referia a um adolescente sensível à Força que treinava na Ordem Jedi para se tornar um Cavaleiro Jedi. Depois de completar "os testes" para se tornar Jedi, um Padawan seria promovido para a patente de Cavaleiro.
Cada teste vale uma certa quantidade de pontos, e eles sempre competiam entre si para ver quem tinha mais pontos acumulados.

Para monitorar os Padawans, o mestre Yoda pediu que você fizesse um programa que armazenasse o nome de cada Padawan e o seu número de pontos, e mostrasse o Padawan com o maior número de pontos.

Ainda, o mestre solicitou que você mostrasse a média de pontos de todos os Padawans pra ele poder comparar.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de várias linhas:

  - A primeira tem um único inteiro N (0 < N <= 1000), que corresponde ao número de Padawans a cadastrar.

  - Nas próximas linhas tem-se o nome do Padawan e o número de pontos deste (uma informação em cada linha). O número de pontos é um dado inteiro.
  </p>
  <h3>Saída</h3>
  <p>
  Nome do Padawan com o maior número de pontos, bem como a sua pontuação, e a pontuação média da turma (esta com duas casas decimais).
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  2
  Obi-Wan Kenobi
  1000
  Bairdon Jace
  756

  ** Output **
  Padawan com mais pontos: Obi-Wan Kenobi
  Pontos: 1000
  Media da turma: 878.00 pontos
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [STRUCT - Jedi](STRUCT-Jedi.cpp)

<h3>Descrição</h3>
<p>
Um Jedi era um indivíduo sensível à Força, geralmente membro da Ordem Jedi, que estudava, servia-a, e usava as energias místicas da Força e seu lado luminoso.

Mestre Yoda espalhou os cavaleiros nas bases para poder defendê-las, e quer ter um controle de quem está aonde. Para isso, a sua missão é cadastrar o nome de cada cavaleiro e a base aonde este está alocado, para que ele possa traçar as suas estratégias de combate ao Império.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de várias linhas:

  - A primeira tem um único inteiro N (0 < N <= 1000), que corresponde ao número de cavaleiros a cadastrar.

  - Nas próximas linhas tem-se o nome do cavaleiro Jedi e o número da base em que ele se encontra.

  - A última linha corresponde à busca: o mestre digita o nome do cavaleiro, e o programa deve mostrar a base onde ele está no momento.
  </p>
  <h3>Saída</h3>
  <p>
  Número da base onde o cavaleiro se encontra, ou a mensagem "Este cavaleiro nao esta cadastrado", se o mesmo não for encontrado.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  2
  Mace Windu
  2
  Anakin Skywalker
  7
  Mace Windu

  2
  Mace Windu
  2
  Anakin Skywalker
  7
  Kanan Jarrus

  ** Output **
  Este cavaleiro esta na base 2

  Este cavaleiro nao esta cadastrado
  ```

</details>
<br/>
