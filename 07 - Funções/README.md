<div align="center">
<img width="384px" alt="Logo Moodle" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Moodle-logo.svg/1200px-Moodle-logo.svg.png">
<br/>
<br/>
<h1>📋 C02 - Funções</h1>
</div>

<!-- Exercício -->

## 🚀 [FUN - Peso ideal](FUN-Peso_ideal.cpp)

<h3>Descrição</h3>
<p>
Faça uma função que receba a altura h em metros, e o sexo de uma pessoa e retorne o seu peso ideal.

Para homens, o peso ideal é dado por: peso ideal = 72.7 x h - 58 e,

para mulheres, peso ideal = 62.1 x h - 44.7

A função deve ter o seguinte cabeçalho:

```CPP
float ideal(float h, char sexo)
```

</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  Altura e sexo da pessoa.
  </p>
  <h3>Saída</h3>
  <p>
  Peso ideal para a altura e sexo.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  1.70 M
  1.70 F

  ** Output **
  Peso ideal = 65.59 kg
  Peso ideal = 60.87 kg
  ```

</details>

<br/>

---

<!-- Exercício -->

## 🚀 [FUN - Cálculo de áreas](FUN-Calculo_de_areas.cpp)

<h3>Descrição</h3>
<p>
Crie um programa que ofereça um menu para calcular áreas de diferentes figuras geométricas: círculo, retângulo e triângulo. O programa deve implementar três funções separadas para calcular a área de cada uma dessas figuras e uma função principal para exibir o menu e chamar as funções apropriadas.

As funções devem ter os seguintes cabeçalhos:

```CPP
double calcularAreaCirculo(double raio)

double calcularAreaRetangulo(double base, double altura)

double calcularAreaTriangulo(double base, double altura)
```

O programa deve permitir múltiplas execuções até o usuário resolver sair.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de várias linhas:

  - a primeira linha consiste do nome da figura geométrica de cuja área se deseja calcular

  - a segunda linha consiste de um ou mais números, dependendo do tipo de figura geométrica:

      - se for um círculo, esta terá apenas um número real, correspondente ao raio;

      - nos outros casos, esta terá 2 números reais, correspondentes ao comprimento da base e da altura, respectivamente.

  A entrada termina quando for digitada a palavra fim.
  </p>
  <h3>Saída</h3>
  <p>
  Para cada figura geométrica, o programa deve mostrar a área com 2 casas decimais, como nos exemplo abaixo.
  Use π = 3.14159
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  retangulo
  2.3 3.8
  circulo
  4.7
  triangulo
  9.2 15.7
  fim

  ** Output **
  area = 8.74
  area = 69.40
  area = 72.22
  ```

</details>

<br/>

---

<!-- Exercício -->

## 🚀 [FUN - Funções1](FUN-Funcoes1.cpp)

<h3>Descrição</h3>
<p>
Seja o código abaixo:

```CPP
#include<iostream>
using namespace std;
int main() {
    int a,b,c,x,y;
    cin >> x >> y;
    // a = 2x^2 + 3x - 1;
    cout << a << endl;
    // b = x^3;
    cout << b << endl;
    // c = y^3;
    cout << c << endl;
    return 0;
}
```

Substitua as linhas comentadas por funções que façam os cálculos indicados, e chame estas funções dentro do seu programa. Os cabeçalhos das funções devem ser:

```CPP
int calc_a(int x)

int calc_b(int x)

int calc_c(int y)
```

</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  2 números inteiros, x e y.
  </p>
  <h3>Saída</h3>
  <p>
  Os valores calculados para a, b e c.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  2 3

  ** Output **
	a = 13
  b = 8
  c = 27
  ```

</details>
<br/>

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FUN - Delta](FUN-Delta.cpp)

<h3>Descrição</h3>
<p>
Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau (ax² + bx + c = 0) e retorne o valor do delta, que é dado por b² − 4ac.

O cabeçalho desta função deve ser:

```CPP
float calc_delta(float a, float b, float c)
```

</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  Três números reais, que correspondem aos coeficientes de uma equação do segundo grau. Garante-se que nunca teremos a = 0.
  </p>
  <h3>Saída</h3>
  <p>
  O valor de delta, conforme descrito acima.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  2 3 1
  1 0 1
  1 0 0

  ** Output **
  delta = 1
  delta = -4
  delta = 0
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FUN - O professor Assustador](FUN-O_professor_assustador.cpp)

<h3>Descrição</h3>
<p>
O professor Assustador pediu para que você desenvolvesse um programa que lesse as notas de todos os alunos de sua sala, e retornasse a média da turma.

Para isso, faça um programa que leia as notas de cada aluno e as armazene em um vetor. Depois, desenvolva uma função que receba este vetor e retorne a média da turma.

O cabeçalho desta função deve ser:

```CPP
float media(int notas[], int nAlunos)
```

</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de várias linhas:

  - a primeira linha contém um único inteiro N (0 < N <= 100), que corresponde ao número de alunos do professor Assustador.

  - a segunda linha irá conter as notas de cada um dos N alunos, separadas por um espaço em branco. Cada nota tem um valor inteiro, de 0 a 100.
  </p>
  <h3>Saída</h3>
  <p>
  O programa deve mostrar a média da turma, com 2 casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  4
  20 45 97 68

  ** Output **
  Media da turma = 57.50
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FUN - O professor Assustador 2](FUN-O_professor_assustador_2.cpp)

<h3>Descrição</h3>
<p>
Agora, o professor Assustador quer saber quantos alunos têm nota acima da média da turma e quantos têm nota abaixo da média da turma.

Assim, incremente o seu programa, desenvolvendo mais duas funções, uma para verificar quantos alunos têm nota abaixo da média e outra para verificar quantos alunos têm nota acima da média.

Os cabeçalhos destas funções devem ser:

```CPP
int nAbaixo(int notas[], int nAlunos, float media)
int nAcima(int notas[], int nAlunos, float media)
```

</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de várias linhas:

  - a primeira linha contém um único inteiro N (0 < N <= 100), que corresponde ao número de alunos do professor Assustador.

  - a segunda linha irá conter as notas de cada um dos N alunos, separadas por um espaço em branco. Cada nota tem um valor inteiro, de 0 a 100.
  </p>
  <h3>Saída</h3>
  <p>
  O programa deve mostrar a média da turma, com 2 casas decimais, e os números de alunos com notas abaixo e acima da média. Se um aluno tiver nota igual à média, ele deve ser contado no grupo dos alunos com nota acima da média.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  4
  20 45 97 68

  ** Output **
  Media da turma = 57.50
  Alunos com nota abaixo da media: 2
  Alunos com nota acima da media: 2
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FUN - O homem mais forte do mundo](FUN-O_homem_mais_forte_do_mundo.cpp)

<h3>Descrição</h3>
<p>
The World's Strongest Man é uma competição para ver quem é o homem mais forte do mundo.

Dentre as provas que os competidores têm que passar incluem-se carregar pedras super pesadas, puxar caminhões ou ônibus, jogar objetos gigantes, etc. Cada prova tem uma pontuação, e o competidor que fizer mais pontos é o vencedor.

Você foi contratado para desenvolver um sistema que receba os nomes e notas de cada competidor e aponte o vencedor (aquele que fizer mais pontos).

Para isso, faça um programa que leia o nome e 4 notas de cada competidor, e armazene estes dados em um vetor de structs. Depois, desenvolva uma função que receba este vetor e a posição em que está o vencedor da competição. Você pode considerar que não haverá empates.

A struct para armazenar os dados deve ser

```CPP
struct dados {
    string nome;
    int n1;
    int n2;
    int n3;
    int n4;
};
```

A função deve ter o seguinte cabeçalho:

```CPP
int strongest(dados atletas[], int nAtletas)
```

</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de várias linhas:

  - a primeira linha contém um único inteiro N, que corresponde ao número de atletas inscritos

  - para cada atleta haverá duas linhas: a primeira com o nome do atleta, e a segunda com as suas 4 notas (inteiras).
  </p>
  <h3>Saída</h3>
  <p>
  O programa deve mostrar o nome do atleta vencedor, como no exemplo abaixo.

  IMPORTANTE: garanta que a sua função retorne a posição do vencedor no vetor, e não o nome dele.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  4
  Eddie Hall
  70 85 92 67
  Brian Shaw
  72 87 99 85
  Zydrunas Savickas
  77 85 45 94
  Hafbor Julius Bjornsson
  98 77 99 95

  ** Output **
  Vencedor: Hafbor Julius Bjornsson
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FUN - Passagem de parâmetros por referência 1](FUN-Passagem_de_parametros_por_referencia_1.cpp)

<h3>Descrição</h3>
<p>
Faça uma função que receba dois números inteiros e retorne a média geométrica deles, em um parâmetro passado por referência. O cabeçalho desta função deve ser:

```CPP
void media(int x, int y, float &m)
```

Depois, faça um programa que leia dois números inteiros, e imprima na saída a média geométrica deles, calculada por esta função.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de dois números inteiros positivos X e Y.
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve apresentar a média geométrica de X e Y, com duas casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  2 3
  4 0

  ** Output **
  Media: 2.45
  Media: 0.00
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FUN - Passagem de parâmetros por referência 2](FUN-Passagem_de_parametros_por_referencia_2.cpp)

<h3>Descrição</h3>
<p>
Faça uma função que converta uma determinada temperatura, dada em graus Fahrenheit (F) para o equivalente em graus Celsius (C) e Kelvin (K). As fórmulas de conversão são:

```CPP
C = (5 / 9) * (F - 32)

K = C + 273
```

A função deve ter o seguinte cabeçalho:

```CPP
void converte(float F, float &C, float &K)
```

Depois, faça um programa que leia uma temperatura em graus Fahrenheit e mostre o valor equivalente nas outras duas escalas.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de um único número real F.
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve apresentar a temperatura correspondente em graus Celsius (C) e Kelvin (K), com duas casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  23.5

  ** Output **
  Celsius: -4.72
	Kelvin: 268.28
  ```

</details>
<br/>

---

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [FUN - Equação do segundo grau](FUN-Equacao_do_segundo_grau.cpp)

<h3>Descrição</h3>
<p>
Usando a função delta desenvolvida anteriormente, faça uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação do segundo grau (ax² + bx + c = 0), calcule e retorne as suas raízes.

Esta função deve ter o seguinte cabeçalho:

```CPP
int calc_raizes(float a, float b, float c, float &x1, float &x2)
```

Esta função deve retornar 0 se existirem raízes reais, e 1 caso contrário.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  Três números reais, que correspondem aos coeficientes de uma equação do segundo grau. Garante-se que nunca teremos a = 0.
  </p>
  <h3>Saída</h3>
  <p>
  As raízes da equação, se existirem, com 5 casas decimais, ou uma mensagem avisando que não é possível calcular. Se houverem duas raízes, a menor raiz deve ser apresentada primeiro.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  2 3 1
  1 0 1
  1 0 0

  ** Output **
  x1 = -1.00000
  x2 = -0.50000
	Impossivel calcular
	x = 0.00000
  ```

</details>
<br/>
