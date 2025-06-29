# Lista de Exercícios 10 – Programação Orientada a Objetos (C++)

📁 Esta pasta contém a **resolução de uma lista de exerciícios**, com foco em **Programação Orientada a Objetos (POO)** utilizando a linguagem C++.

> ⚠️ **Importante:** As resoluções aqui disponibilizadas têm como objetivo **auxiliar na correção e revisão**.  
> Recomenda-se fortemente que o aluno **tente resolver os exercícios por conta própria antes de consultar as soluções**.

---

### Questão 01 – Cadastro de Clientes

Crie um programa com classes para cadastrar clientes de uma loja.  
Informações: **nome**, **data de nascimento**, **endereço** e **telefone**.

- Use classe, atributos e construtor.
- No `main`, crie um vetor de clientes com tamanho definido pelo usuário.

---

### Questão 02 – Comparação de Preços

Implemente uma classe com: **nome da loja**, **telefone** e **preço de um eletrodoméstico**.  
Cadastre **15 registros** e exiba:

- Menor preço
- Maior preço
- Preço médio

---

### Questão 03 – Conta Corrente

Crie uma classe com métodos para:

- Depositar
- Sacar (com **0,5% de taxa**)
- Consultar saldo

No `main`, crie duas contas: uma com depósito e outra com saque.

---

### Questão 04 – Classe Pessoa

Implemente a classe `Pessoa` com:

- Atributos privados: **nome**, **idade** e **altura**
- Métodos `get`/`set`
- Método para **imprimir os dados**

Crie duas pessoas no `main` e exiba seus dados.

---

### Questão 05 – Elevador

Crie a classe `Elevador` com:

- Andar atual (0 = térreo)
- Total de andares (sem contar o térreo)
- Capacidade (em pessoas)
- Quantidade de pessoas presentes

Métodos a implementar:

- `inicializa(capacidade, totalAndares)`
- `entra()` – adiciona uma pessoa (se possível)
- `sai()` – remove uma pessoa (se houver)
- `sobe()` – sobe um andar (se possível)
- `desce()` – desce um andar (se possível)
- Getters para os atributos
