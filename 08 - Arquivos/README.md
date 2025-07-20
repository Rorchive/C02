<div align="center">
<img width="384px" alt="Logo Moodle" src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/Moodle-logo.svg/1200px-Moodle-logo.svg.png">
<br/>
<br/>
<h1>📋 C02 - Arquivos</h1>
</div>

<!-- ----- EXERCÍCIO ----- -->

## 🚀 [ARQ - Lendo um arquivo texto](ARQ-Lendo_um_arquivo_texto.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia o nome de um arquivo texto e mostre seu conteúdo na tela.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de uma única linha, que contém o nome do arquivo a ser processado.
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve mostrar o conteúdo do arquivo.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  texto.txt

  ** Output **
  Este e um arquivo de teste.
  ```

  <h3>Apêndices</h3>

  arquivo.txt
  ```
  Minha casa, minha vida.
  Nao sei de nada.
  ```
</details>

<br/>

<!-- ----- EXERCÍCIO ----- -->

<br/>

## 🌡️ [ARQ - Temperatura Média](ARQ-Temperatura_media.cpp)

<h3>Descrição</h3>
<p>
Em uma cidade, uma estação automatizada mede a temperatura ambiente a cada hora e os envia a você por meio de um arquivo texto. Faça um programa que leia este arquivo texto e mostre a temperatura média daquele dia.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de uma única linha, que contém o nome do arquivo a ser processado.
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve mostrar a temperatura média da cidade naquele dia, com uma casa decimal.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  temperaturas.txt

  ** Output **
  Temperatura media: 20.0 graus
  ```

  <h3>Apêndices</h3>

  temperaturas.txt
  ```
  19.0
  18.0
  17.5
  16.0
  15.4
  15.5
  16.0
  17.3
  18.0
  19.0
  20.2
  21.3
  22.4
  25.7
  26.4
  25.1
  24.7
  24.0
  23.7
  22.1
  21.6
  20.1
  19.5
  19.0
  ```

  arquivo2.txt
  ```
  30.7
  35.2
  42.1
  27.8
  28.9
  30.2
  31.3
  ```
</details>

<br/>

<!-- ----- EXERCÍCIO ----- -->

<br/>

## 📝 [ARQ - Escrevendo em um arquivo](ARQ-Escrevendo_em_um_arquivo.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia vários número reais e os armazene em um arquivo texto, cujo nome deve ser escolhido pelo usuário.
Depois, o programa deve abrir o arquivo gerado e mostrar seu conteúdo na tela.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada consiste de 2 linhas

  - a primeira linha contém o nome do arquivo de saída

  - a segunda linha consiste de vários números reais, que devem ser armazenados no arquivo. O final da entrada é sinalizado pelo valor 0, que não deve ser incluído.
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve mostrar o conteúdo armazenado no arquivo, com 2 casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  dados.txt
  12.5 2.34 5.77 -3.4 0

  ** Output **
  12.50 2.34 5.77 -3.40
  ```
</details>

<br/>

<!-- ----- EXERCÍCIO ----- -->

<br/>

## 👜 [ARQ - Compras](ARQ-Compras.cpp)

<h3>Descrição</h3>
<p>
Faça um programa que leia os nomes dos produtos e os preços unitários dos produtos de uma loja a partir de um arquivo, e os armazene em um vetor de structs. Para isto, você deve usar a struct abaixo:
</p>

```cpp
struct dados
{
    string produto;
    float preco;
};
```

<p>
Depois, o programa deve ler o nome do produto comprado por um cliente, a quantidade comprada retornar o preço total a ser pago.
</p>

<details>
  <summary><strong>Entrada & Saída</strong></summary>
  <h3>Entrada</h3>
  <p>
  A entrada tem várias linhas:

   - A primeira linha tem o nome do arquivo com os produtos cadastrados.

   - No arquivo, para cada produto teremos 2 linhas: a primeira com o seu nome e a segunda com seu preço unitário (um número real).

   - As duas últimas linhas da entrada irão conter o nome do produto comprado, e a quantidade comprada, respectivamente.
  </p>
  <h3>Saída</h3>
  <p>
  Na saída, o programa deve mostrar o preço total a ser pago, com duas casas decimais.
  </p>
  <h3>Exemplos</h3>

  ```
  ** Input **
  produtos1.txt
  Café
  2

  ** Output **
  R$ 20.40
  ```

  <h3>Apêndices</h3>

  produtos1.txt
  ```
  Arroz
  34.00
  Cafe
  10.20
  Tomate
  3.00
  ```

  produtos2.txt
  ```
  Caderno
  15.00
  Lapis
  2.50
  Borracha
  3.00
  Compasso
  15.50
  ```
</details>
<br/>
