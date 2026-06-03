# 🎓 Sistema de Notas v4.1

Este é um programa robusto desenvolvido em **C++** para a gestão de notas escolares. O software permite o cadastro de alunos, inserção de notas por disciplinas, cálculo automático de médias e geração de relatórios tanto no console quanto em arquivo externo.

---

## 🚀 Funcionalidades

O sistema oferece um fluxo completo para controle acadêmico:

- Cadastro de alunos e notas por disciplina
- Cálculo de médias por aluno
- Classificação: Aprovado, Recuperação ou Reprovado
- Relatório salvo em arquivo .txt com data e hora
- Leitura de relatório salvo
- Menu "Sobre o sistema"

---

## 🛠️ Tecnologias e Bibliotecas

O projeto utiliza bibliotecas padrão do C++ para garantir performance e simplicidade:

* `<iostream>`: Entrada e saída de dados.
* `<fstream>`: Manipulação de arquivos (leitura e escrita).
* `<windows.h>`: Ajuste de codificação do console.
* `<algorithm>`: Processamento de dados.
* `<ctime>`: Data e Hora


---

## 📋 Como Executar

### Pré-requisitos
* Um compilador C++ instalado (GCC/MinGW, Clang ou Visual Studio).
* Ambiente Windows (necessário para a biblioteca `windows.h`).

### Passo a Passo
1.  **Clone ou copie** o código para um arquivo chamado `main.cpp`.
2.  **Compile** o código via terminal:
    ```bash
    g++ main.cpp -o SistemaNotas.exe
    ```
3.  **Execute** o programa:
    ```bash
    ./SistemaNotas.exe
    ```

---

## 📂 Estrutura do Relatório Gerado

Ao finalizar o processamento, o programa gera um arquivo `relatorio.txt` com a seguinte estrutura:

> **João Exemplo - Média: 7.5** > **Situação: Aprovado** >  
> *Resumo: 1 aprovados, 0 em recuperação, 0 reprovados.*

---

## Feito por

> Guilherme Tomaz Camara 