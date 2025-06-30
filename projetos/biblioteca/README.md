# Projeto – Sistema de Gerenciamento de Biblioteca

Este exercício propõe a implementação de um **sistema simples de gerenciamento de uma biblioteca**, utilizando os conceitos de **Programação Orientada a Objetos (POO)** em C++. O objetivo é reforçar o uso de classes, métodos, encapsulamento e organização do código em múltiplos arquivos.

---

## Enunciado

Implemente um sistema de gerenciamento de uma biblioteca com os seguintes requisitos:

### 1. Estrutura dos dados

A biblioteca deve armazenar **livros**, sendo que cada livro deve possuir os seguintes atributos:

- **Título**
- **Autor**
- **Ano de publicação**
- **ISBN** _(opcional)_

### 2. Funcionalidades do sistema

O sistema deverá oferecer as seguintes operações:

- Adicionar livros
- Listar todos os livros
- Buscar livros por título
- Remover livros por título

### 3. Organização do código

Divida seu código em **múltiplos arquivos**, de forma modular e bem estruturada:

- `Livro.h` / `Livro.cpp`

  > Define e implementa a classe `Livro`.

- `Biblioteca.h` / `Biblioteca.cpp`

  > Define e implementa a classe `Biblioteca`, responsável por gerenciar os livros cadastrados.

- `main.cpp`
  > Contém o **menu principal** e a lógica de interação com o usuário, utilizando as classes acima.

---

## Objetivos de aprendizagem

- Praticar os conceitos fundamentais de POO em C++
- Separar responsabilidades em diferentes classes e arquivos
- Utilizar vetores ou listas para armazenar objetos
- Implementar um menu interativo no terminal
