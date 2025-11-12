# **Estudos de C, processos de Engenharia Computacional e pensamento científico**  

---
Assim que possivel estarei retirando a bibliografia do ar e estarei entrando em contato com autores, buscando disponibilizar elas de forma legal, por gentileza, não utilize de forma alguma nenhum texto sem autorização prévia. Esta ação esta sendo realizada de madrugada visando minimizar immpactos. Qualquer dúvida por gentilezza entrar em contato:  
### **lucafrioli7@gmail.com**
---

Aprender C não é apenas um passo para se tornar um programador, mas para se tornar um verdadeiro engenheiro de software. Diferente de linguagens de alto nível, que abstraem muitos detalhes do funcionamento do hardware, C permite que você entenda profundamente como um computador realmente opera, desde a manipulação da memória até a execução de instruções na CPU.

Este estudo não se limita a ensinar a sintaxe da linguagem, mas se propõe a formar uma base sólida em engenharia computacional. Você não apenas aprenderá a escrever código eficiente, mas também compreenderá os princípios fundamentais da arquitetura de computadores, eletrônica digital, sistemas operacionais e algoritmos de baixo nível.

A abordagem adotada aqui é progressiva e prática: começamos com os fundamentos da computação, passamos por conceitos essenciais de engenharia e, então, mergulhamos no C de forma aprofundada. Com isso, não apenas iremos aprender a linguagem, mas desenvolver a mentalidade necessária para resolver problemas complexos, otimizar código e criar sistemas robustos.

Se o objetivo é se tornar um profissional mais completo, capaz de atuar tanto no desenvolvimento de sistemas críticos quanto na otimização de código de alto desempenho, este guia será um excelente ponto de partida.


---

### **História da Computação e fundamentos do pensamento crítico e científico na área da T.I. (tempo sugerido 1 a 3 semanas para aprender, aprofundar, testar e exercitar os conhecimentos)**

- **O que é um computador? Definição e evolução.**
  - História da computação:
    - Primeiras máquinas de cálculo (Ábaco, Máquina de Pascal, Máquina de Turing).
    - Primeiros computadores (ENIAC, UNIVAC, IBM 360).
    - Revolução dos microprocessadores e o nascimento dos computadores pessoais.
  - Arquitetura de Von Neumann e modelos computacionais.

- **Fundamentos do Pensamento Científico e Computacional**
  - O que é pensamento crítico aplicado à TI?
  - Importância da análise algorítmica na solução de problemas.
  - Métodos científicos aplicados à computação.
  - Modelos matemáticos e a relação com engenharia computacional.

**[Para iniciar o módulo clique aqui !](./historia_e_fundamentos_da_computacao/readme.md)** (em processo de produção).

[Bibliografia do primeiro módulo](#1-história-da-computação-e-pensamento-computacional)

### **Fundametos da engenharia computacional (tempo sugerido 5 a 7 semanas para aprender, aprofundar, testar e exercitar os conhecimentos)**


#### **Fundamentos de Hardware e Arquitetura de Computadores**

- **Componentes físicos do computador**
  - CPU, Memória RAM, HDD/SSD, GPU, Fonte de Energia.
  - Placa-mãe, barramentos e interfaces de comunicação.

- **Como um processador funciona internamente**
  - Registros, ULA (Unidade Lógica e Aritmética), Cache, Clock.
  - Ciclo de busca, decodificação e execução de instruções.

- **Sistemas de armazenamento e hierarquia de memória**
  - Registradores, Cache, RAM, Memória Virtual, Armazenamento Secundário.

**Dispositivos de Entrada e Saída (I/O)**


#### **Sistemas de Numeração e Lógica Binária**

- **Sistemas numéricos**
  - Decimal
  - Binário
  - Octal
  - Hexadecimal.
  - Conversões entre bases numéricas.

- **Conversões entre bases numéricas**

- **Aritmética Binária** 
  - Adição
  - Subtração
  - Multiplicação
  - Divisão.

- **Códigos Binários** 
  - ASCII
  - Unicode
  - BCD (Binary-Coded Decimal).

**Representação de números em computadores**
  - Inteiros com sinal (Complemento de Dois).
  - Ponto flutuante (IEEE 754).


#### **Circuitos Digitais e Eletrônica Computacional**

- **Portas lógicas básicas**
  - AND
  - OR 
  - NOT
  - XOR 
  - NAND
  - NOR.

- **Circuitos combinacionais e sequenciais**
  - Multiplexadores 
  - Somadores 
  - Flip-Flops

- **Memória e armazenamento**
  - Construção de registradores e memórias básicas.

- **Introdução a FPGA e microcontroladores (ex: Arduino, Raspberry Pi)**

#### **Fundamentos da Lógica de Programação e Linguagem de Máquina**

- **O que é um algoritmo?** 
  - Estruturas básicas.

- **Linguagem de Máquina e Assembly**
  - Como a CPU executa instruções.
  - Tipos de instruções 
    -Load 
    -Store 
    -Jump
    -ALU operations

 - **Montadores e interpretadores**

- **Exemplo de código Assembly simples**

#### **Introdução ao Assembly**

**Registradores e memória**
  - EAX, EBX, ECX, EDX (x86)
  - Pilha e heap

- **Modos de endereçamento**

- **Interrupções e chamadas de sistema**

- **Exemplo prático** Escrever um programa em Assembly que imprime "Hello, World!"

- **Do Assembly ao C**

### **Fundamentos do C (tempo sugerido 1 a 2 semanas para aprender, aprofundar, testar e exercitar os conhecimentos)**
- **Introdução à linguagem C**
  - História e importância da linguagem
  - Instalação do GCC e configuração do ambiente de desenvolvimento (Linux/macOS recomendado)
  - Estrutura básica de um programa em C (`main`, `#include`, `return 0`)

- **Tipos de Dados e Operadores**
  - Tipos primitivos escalres: `int`, `char`, `float`, `double`, ...
  - Operadores aritméticos, relacionais e lógicos
  - Operadores bitwise (`&`, `|`, `^`, `~`, `<<`, `>>`)

- **Entrada e Saída (I/O)**
  - Uso de `printf` e `scanf`
  - Funções `getchar`, `putchar`, `gets`, `puts`

### **Estruturas de Controle e Funções (tempo sugerido 1 a 1,5 semana para aprender, aprofundar, testar e exercitar os conhecimentos)**
- **Condicionais e Laços**
  - `if`, `else if`, `else`
  - `switch-case`
  - Laços `for`, `while`, `do-while`

- **Funções e Escopo**
  - Declaração e definição de funções
  - Passagem de parâmetros por valor
  - `void` e retorno de valores
  - Escopo de variáveis (local vs. global)
  - Recursão

### **Ponteiros e Arrays (tempo sugerido 1 a 2,5 semanas para aprender, aprofundar, testar e exercitar os conhecimentos)**
- **Ponteiros e Alocação Dinâmica**
  - Declaração e uso de ponteiros (`*`, `&`)
  - Operações básicas com ponteiros
  - Arrays e ponteiros (`int arr[]`, `int *ptr`)
  - Alocação dinâmica com `malloc`, `calloc`, `realloc` e `free`

- **Strings e Manipulação de Memória**
  - Cadeias de caracteres (`char str[]`, `char *str`)
  - Funções da `string.h`: `strlen`, `strcpy`, `strcmp`, `strcat`
  - `memcpy`, `memset`

### **Estruturas de Dados e Manipulação de Arquivos (tempo sugerido 2 a 3 semanas para aprender, aprofundar, testar e exercitar os conhecimentos)**
- **Estruturas e Manipulação Avançada de Ponteiros**
  - `struct` e `typedef`
  - Estruturas aninhadas e arrays de structs
  - Ponteiros para estruturas

- **Manipulação de Arquivos**
  - Modos de abertura (`r`, `w`, `a`, `rb`, `wb`)
  - Funções `fopen`, `fclose`, `fread`, `fwrite`
  - `fprintf`, `fscanf`

### **Projetos Práticos e Exercícios compelxos (tempo sugerido "indeterminado" aprendizado contínuo, aprofundamento contínuo, testes contínuos e exercício continuo aplicando os conhecimentos já vistos e buscando novos. *Lista de exercícios terá uma marca onde será sugerido iniciar aprender c++*)**
- Resolver exercícios disponíveis online
- Implementar mini-projetos como:
  - Calculadora em linha de comando
  - Manipulação de arquivos CSV
  - Lista encadeada simples

### **Dicas Extras**
- Utilize simuladores para circuitos Lógicos;
- Resolva exercícios no **Exercism**, **LeetCode**, **CodeWars** (filtros de C);
- Leia a bibliografia;
- Pratique com os desafios;
- Aprenda a depurar com `gdb`;


## **Bibliografia Recomendada**  

### **1. História da Computação e Pensamento Computacional**  
- Livro **The Innovators** – Walter Isaacson  
- Conteúdo áudivisual **Triumph of the Nerds** (1996) – Documentário sobre a revolução dos computadores pessoais  ([clique aqui!](https://youtu.be/XlCaiD5VQRU?si=cSQoQxUJOLPGL8GI))
- Conteúdo áudivisual **Revolution OS** (2001) – Documentário sobre GNU/Linux  ([clique aqui!](https://youtu.be/Z3f-M43DiD4?si=XcgbVpK7YxXt-tQj)) 
- Conteúdo áudivisual **A História do Computador** – CrashCourse Computer Science (YouTube)  

### **2. Arquitetura de Computadores e Hardware**  
- Livro **Computer Organization and Design** – David A. Patterson, John L. Hennessy  
- Livro **The Art of Electronics** – Paul Horowitz (Referência essencial sobre eletrônica aplicada a computação)  
- Conteúdo áudivisual **How Computers Use Electricity to Think** – Ben Eater (YouTube)  
- Conteúdo áudivisual **Digital Logic Design** – Neso Academy (YouTube)  
- **Curso Online**: *Computer Architecture* – MIT OpenCourseWare  
- Ferramentas **Simuladores**:  
  - **Logisim** – Simulação de circuitos digitais  
  - **CircuitVerse** – Plataforma interativa para aprendizado de lógica digital  

### **3. Sistemas de Numeração, Circuitos Digitais e Eletrônica Computacional**  
- Livro **Code: The Hidden Language of Computer Hardware and Software** – Charles Petzold  
- Conteúdo áudivisual **Digital Logic and Number Systems** – Neso Academy (YouTube)  
- Livro **Digital Fundamentals** – Thomas L. Floyd (Lógica digital e circuitos eletrônicos)  
- Ferramentas **Simuladores e Emuladores**:  
  - **Logisim** – Para circuitos lógicos  
  - **Emu8086** – Simulador de Assembly e arquitetura x86  

### **4. Linguagem Assembly e Baixo Nível**  
- Livro **Programming from the Ground Up** – Jonathan Bartlett (Introdução prática a Assembly)  
- Conteúdo áudivisual **Introduction to Assembly Language** – Coursera  
- **Curso Online**: *Low-Level Programming* – Udemy  
- Livro **The Art of Assembly Language** – Randall Hyde  

### **5. Programação em C e Engenharia de Software**  
- Livro **The C Programming Language (K&R)** – Brian Kernighan & Dennis Ritchie (Clássico fundamental)  
- **Curso Online**: *CS50 – Introduction to Computer Science* (Harvard)  
- Livro **Expert C Programming: Deep C Secrets** – Peter Van Der Linden  
- Livro **Understanding Pointers in C** – Yashavant Kanetkar  
- Livro **C Programming: A Modern Approach** – K. N. King  
- **Plataformas de Prática**:  
  - **Exercism** – Desafios de C  
  - **LeetCode** – Filtros de C  
  - **CodeWars** – Exercícios e desafios avançados  

### **6. Sistemas Operacionais e Computação de Baixo Nível**  
- Livro **Operating Systems: Three Easy Pieces** – Remzi H. Arpaci-Dusseau  
- **Curso Online**: *Build Your Own Operating System* – Udemy  
- Livro **Modern Operating Systems** – Andrew S. Tanenbaum (Fundamentos avançados sobre SOs)  

### **7. Desenvolvimento Prático e Projetos Avançados**  
- Livro **Computer Systems: A Programmer’s Perspective** – Randal E. Bryant, David R. O’Hallaron  
- Livro **Advanced Programming in the UNIX Environment** – W. Richard Stevens (Para programação em C e manipulação de sistemas)  
- Livro **The Linux Programming Interface** – Michael Kerrisk (Interação entre C e sistemas Linux)  
- Conteúdo áudivisual **GDB Debugging Guide** – Recursos para depuração avançada de código em C  
