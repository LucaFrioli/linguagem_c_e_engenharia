# Tipos Primitivos Escalares na Linguagem C: Um Estudo Aprofundado

A linguagem C é conhecida por sua eficiência e controle direto sobre os recursos de hardware. Um dos aspectos fundamentais dessa linguagem é o seu conjunto de **tipos primitivos escalares**, que são utilizados para armazenar e manipular dados simples, como números e caracteres. Esses tipos são fundamentais para a construção de programas eficientes e bem estruturados.

Neste texto, exploraremos em profundidade os tipos primitivos escalares de C, analisando suas características, tamanhos, modificadores e considerações importantes para seu uso eficiente.

---

## 1. O que são Tipos Primitivos Escalares?

Os **tipos primitivos escalares** em C representam valores individuais, ao contrário dos tipos compostos (como arrays e structs), que armazenam múltiplos valores. Eles podem ser classificados em quatro categorias principais:

1. **Tipos Integrais** (inteiros, caracteres e modificadores)
2. **Tipos de Ponto Flutuante** (números reais)
3. **Tipos Void** (ausência de tipo)
4. **Tipos Booleanos** (valores lógicos, introduzidos no C99)

Vamos explorar cada um desses tipos com detalhes.

---

## 2. Tipos Integrais

Os tipos integrais são usados para armazenar valores inteiros, ou seja, números sem parte decimal. Em C, os principais tipos integrais são:

### **2.1. Tipo `int` (inteiro padrão)**

O tipo `int` é o mais comum para armazenar valores inteiros.

```c
int idade = 25;
```

- **Tamanho:** Geralmente, ocupa **4 bytes** (32 bits) na maioria dos sistemas modernos.
- **Faixa de valores:** Depende da arquitetura, mas geralmente varia de `-2,147,483,648` a `2,147,483,647` (em um sistema de 32 bits).
- **Uso comum:** Contagem, índices de loops e operações matemáticas básicas.

### **2.2. Tipo `char` (caractere)**

O tipo `char` é usado para armazenar caracteres individuais, mas tecnicamente é um tipo integral, pois armazena valores numéricos representando caracteres na tabela ASCII.

```c
char letra = 'A';
```

- **Tamanho:** **1 byte** (8 bits)
- **Faixa de valores:** `-128` a `127` (com `char` assinado) ou `0` a `255` (com `char` sem sinal)
- **Uso comum:** Armazenamento de caracteres individuais e manipulação de strings

### **2.3. Tipo `short` (inteiro curto)**

O tipo `short` é um inteiro menor que o `int`, ocupando menos espaço na memória.

```c
short int ano = 2024;
```

- **Tamanho:** **2 bytes** (16 bits)
- **Faixa de valores:** `-32,768` a `32,767`
- **Uso comum:** Quando há necessidade de economia de memória para valores pequenos

### **2.4. Tipo `long` (inteiro longo)**

O tipo `long` é usado para armazenar inteiros de tamanho maior que o `int`.

```c
long int populacao = 7800000000;
```

- **Tamanho:** Geralmente **4 ou 8 bytes**, dependendo do sistema
- **Faixa de valores:** Depende da arquitetura (em sistemas de 64 bits, pode armazenar números extremamente grandes)
- **Uso comum:** Contagem de grandes quantidades, como população mundial

### **2.5. Tipo `long long` (inteiro muito longo)**

Introduzido no padrão C99, `long long` permite armazenar números inteiros ainda maiores.

```c
long long int distancia_estrelas = 9223372036854775807;
```

- **Tamanho:** **8 bytes** (64 bits)
- **Faixa de valores:** `-9,223,372,036,854,775,808` a `9,223,372,036,854,775,807`
- **Uso comum:** Valores extremamente grandes, como distâncias astronômicas

---

## 3. Tipos de Ponto Flutuante

Os tipos de ponto flutuante armazenam números reais (com parte decimal). Existem três tipos principais:

### **3.1. Tipo `float`**

```c
float preco = 10.99;
```

- **Tamanho:** **4 bytes**
- **Precisão:** Aproximadamente **7 dígitos significativos**
- **Uso comum:** Cálculos científicos e gráficos

### **3.2. Tipo `double`**

```c
double pi = 3.141592653589793;
```

- **Tamanho:** **8 bytes**
- **Precisão:** Aproximadamente **15-16 dígitos significativos**
- **Uso comum:** Cálculos matemáticos avançados

### **3.3. Tipo `long double`**

```c
long double grande_numero = 1.2345678901234567890L;
```

- **Tamanho:** Geralmente **10, 12 ou 16 bytes**, dependendo do sistema
- **Precisão:** Pode chegar a **19 dígitos significativos ou mais**
- **Uso comum:** Computação científica de alta precisão

---

## 4. Tipo `void` (Ausência de Tipo)

O tipo `void` representa **ausência de tipo** e é usado principalmente em três contextos:

1. **Funções que não retornam valores:**

   ```c
   void mensagem() {
       printf("Olá, mundo!\n");
   }
   ```

2. **Ponteiros genéricos (`void *`)**:

   ```c
   void *ptr;
   ```

3. **Parâmetro vazio em funções:**

   ```c
   int funcao(void); // Indica que a função não recebe argumentos
   ```

---

## 5. Tipo `_Bool` (Booleano)

No padrão **C99**, foi introduzido o tipo `_Bool` para armazenar valores lógicos (`0` ou `1`).

```c
#include <stdbool.h>
bool ativo = true;
```

- **Tamanho:** **1 byte**
- **Valores possíveis:** `true` (1) ou `false` (0)
- **Uso comum:** Controle de fluxo condicional

---

Os modificadores `signed` e `unsigned` em C são usados para definir se um número inteiro pode armazenar valores negativos ou apenas positivos. Eles afetam a forma como os valores são representados na memória e a faixa de valores possíveis para uma variável.

---

## 6. **`signed` vs. `unsigned`**

Por padrão, os tipos inteiros (`char`, `short`, `int`, `long`) podem ser **signed** (com sinal) ou **unsigned** (sem sinal).

- **`signed`** (com sinal): Permite armazenar valores **positivos e negativos**. O bit mais significativo (MSB) é usado como **bit de sinal** (`0` para positivo, `1` para negativo).
- **`unsigned`** (sem sinal): Armazena **apenas valores positivos**, usando todos os bits para representar a magnitude do número.

### 6.1 **Exemplos de Declaração**

```c
signed int a = -10;   // Pode armazenar valores negativos e positivos
unsigned int b = 10;  // Apenas valores positivos
```

Se `signed` não for especificado, o tipo padrão para `int` é `signed int`.

```c
int x = -5;    // Equivalente a signed int x = -5;
unsigned int y = 5;
```

---

### 6.2 **Faixa de Valores**

A faixa de valores varia conforme o número de bits disponíveis. Em um sistema de **32 bits**, por exemplo:

| Tipo                 | Tamanho (bits) | Faixa de Valores (`signed`)                                                                                 | Faixa de Valores (`unsigned`)                                          |
| -------------------- | -------------- | ----------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------- |
| `signed char`        | 8              | -128 a 127                                                                                                  | 0 a 255                                                                |
| `unsigned char`      | 8              | —                                                                                                           | 0 a 255                                                                |
| `signed short`       | 16             | -32.768 a 32.767                                                                                            | 0 a 65.535                                                             |
| `unsigned short`     | 16             | —                                                                                                           | 0 a 65.535                                                             |
| `signed int`         | 32             | -2.147.483.648 a 2.147.483.647                                                                              | 0 a 4.294.967.295                                                      |
| `unsigned int`       | 32             | —                                                                                                           | 0 a 4.294.967.295                                                      |
| `signed long`        | 32 ou 64\*     | -2.147.483.648 a 2.147.483.647 (32 bits) / -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 (64 bits) | 0 a 4.294.967.295 (32 bits) / 0 a 18.446.744.073.709.551.615 (64 bits) |
| `unsigned long`      | 32 ou 64\*     | —                                                                                                           | Igual ao `signed long`, mas começando de 0                             |
| `signed long long`   | 64             | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807                                                      | 0 a 18.446.744.073.709.551.615                                         |
| `unsigned long long` | 64             | —                                                                                                           | 0 a 18.446.744.073.709.551.615                                         |

**Notas:**

- O tamanho de `long` pode variar dependendo da arquitetura do sistema:
  - **32 bits** → `long` geralmente tem **32 bits**.
  - **64 bits** → `long` geralmente tem **64 bits** (em sistemas Unix/Linux modernos).
- O `long long` tem **64 bits garantidos** em todas as arquiteturas modernas.
- O caractere **"—"** é usado para indicar que o conceito de `signed` não se aplica ao tipo `unsigned`.

---

### 6.3 **Representação Binária**

A diferença entre `signed` e `unsigned` se dá pela forma como os números são armazenados na memória:

- **Unsigned**: Todos os bits representam o número normalmente.
- **Signed**: O bit mais significativo (MSB) representa o **sinal**:
  - `0` para positivo.
  - `1` para negativo (usando complemento de dois).

Exemplo para um `char` (8 bits):

| Tipo       | Binário          | Decimal |
| ---------- | ---------------- | ------- |
| `unsigned` | `00001111` (15)  | 15      |
| `unsigned` | `11110000` (240) | 240     |
| `signed`   | `00001111` (15)  | 15      |
| `signed`   | `11110000` (-16) | -16     |

**Complemento de Dois:** No caso de números negativos, a representação de complemento de dois permite operações matemáticas sem precisar de regras especiais.

---

### 6.4 **Comportamento e Cuidados**

#### **Conversão de `signed` para `unsigned`**

Se atribuímos um valor negativo a uma variável `unsigned`, o comportamento pode ser inesperado:

```c
#include <stdio.h>

int main() {
    unsigned int x = -10;  // Representação incorreta

    printf("%u\n", x);  // Saída inesperada: 4294967286 (se `int` for de 32 bits)
    return 0;
}
```

Isso ocorre porque `-10` em complemento de dois equivale a **4294967286** em um inteiro `unsigned`.

#### **Looping Infinito com `unsigned` (veremos mais a fundo posteriormente)**

Um erro comum ocorre ao usar `unsigned` em loops que contam para trás:

```c
#include <stdio.h>

int main() {
    unsigned int i;
    for (i = 5; i >= 0; i--) {  //  LOOP INFINITO!
        printf("%u\n", i);
    }
    return 0;
}
```

⚠️ **O problema:** Como `i` é `unsigned`, quando `i = 0` e subtrai 1, ele **não se torna -1**, mas sim **4294967295** (em um sistema de 32 bits), resultando em um loop infinito.

Para evitar isso, use `signed int` ou modifique a condição:

```c
for (i = 5; i-- > 0;) {  //  Correto
    printf("%u\n", i);
}
```

---

### 6.5 **Resumo**

| Modificador | Permite Valores Negativos? | Usa Bit de Sinal? | Exemplo                |
| ----------- | -------------------------- | ----------------- | ---------------------- |
| `signed`    | Sim                        | Sim               | `signed int x = -5;`   |
| `unsigned`  | Não                        | Não               | `unsigned int y = 10;` |

- **`signed`** permite números negativos e positivos.
- **`unsigned`** apenas números positivos e dobra o limite superior.
- Se converter um número negativo para `unsigned`, o resultado pode ser inesperado.
- Em loops decrescentes, `unsigned` pode causar erros lógicos.

Esses conceitos são fundamentais para evitar bugs em C, especialmente ao lidar com operações de bits, estruturas de dados e hardware.

## 7. Dando display via `printf` dos valores de variaveis

A simbologia utilizada para inserir variáveis dentro de `printf` em C é chamada de **especificadores de formato** (_format specifiers_). Esses especificadores indicam ao `printf` como os valores devem ser formatados e exibidos.

Eles começam com o caractere `%` e são seguidos por uma letra que representa o tipo de dado que será impresso.

### 7.1 **Principais Especificadores de Formato do `printf`**

| Especificador | Tipo de Dado                                              | Exemplo                                    |
| ------------- | --------------------------------------------------------- | ------------------------------------------ |
| `%d` ou `%i`  | Inteiro decimal (`int`) ou booleanos                      | `printf("%d", 42);` `printf("%d", 1);`     |
| `%u`          | Inteiro sem sinal (`unsigned int`)                        | `printf("%u", 42);`                        |
| `%hd`         | Inteiro curto (`short int`)                               | `printf("%hd", (short)32000);`             |
| `%hu`         | Inteiro curto sem sinal (`unsigned short`)                | `printf("%hu", (unsigned short)65000);`    |
| `%ld`         | Inteiro longo (`long int`)                                | `printf("%ld", 2147483647L);`              |
| `%lu`         | Inteiro longo sem sinal (`unsigned long`)                 | `printf("%lu", 4294967295UL);`             |
| `%lld`        | Inteiro muito longo (`long long int`)                     | `printf("%lld", 9223372036854775807LL);`   |
| `%llu`        | Inteiro muito longo sem sinal (`unsigned long long`)      | `printf("%llu", 18446744073709551615ULL);` |
| `%f`          | Ponto flutuante (`float`)                                 | `printf("%f", 3.14);`                      |
| `%lf`         | Ponto flutuante de precisão dupla (`double`)              | `printf("%lf", 3.14159);`                  |
| `%Lf`         | Ponto flutuante de precisão extra (`long double`)         | `printf("%Lf", 3.141592653589793L);`       |
| `%e` ou `%E`  | Notação científica (`float` ou `double`)                  | `printf("%e", 3.14159);` → `3.141590e+00`  |
| `%g` ou `%G`  | Notação científica (escolhe `%f` ou `%e` automaticamente) | `printf("%g", 123456.0);` → `1.23456e+05`  |
| `%c`          | Caractere (`char`)                                        | `printf("%c", 'A');`                       |
| `%s`          | String (`char[]`) ou booleanos                            | `printf("%s", "Hello");`                   |
| `%p`          | Ponteiro (endereços de memória)                           | `printf("%p", (void*)ptr);`                |
| `%x`          | Inteiro em hexadecimal (letras minúsculas)                | `printf("%x", 255);` → `ff`                |
| `%X`          | Inteiro em hexadecimal (letras maiúsculas)                | `printf("%X", 255);` → `FF`                |
| `%o`          | Inteiro em octal                                          | `printf("%o", 255);` → `377`               |
| `%%`          | Símbolo de porcentagem literal `%`                        | `printf("%%");` → `%`                      |

### 7.2 **Modificadores de Largura e Precisão ligados ao `printf`**

Além dos especificadores básicos, podemos modificar a largura e a precisão da exibição dos valores. Exemplos:

- `%10d` → Exibe um número inteiro ocupando **pelo menos 10 caracteres**, preenchendo com espaços à esquerda.
- `%.2f` → Exibe um número flutuante com **duas casas decimais**.
- `%8.3f` → Exibe um número flutuante ocupando **8 espaços** e com **3 casas decimais**.

Exemplo:

```c
#include <stdio.h>

int main() {
    int num = 42;
    float pi = 3.14159;

    printf("Inteiro: %5d\n", num);  // Largura mínima de 5 caracteres
    printf("Float: %.2f\n", pi);   // Exibe apenas 2 casas decimais
    return 0;
}
```

Saída:

```
Inteiro:    42
Float: 3.14
```

### 7.3 **Exemplo de booleanos**

Na linguagem C, **não existe um especificador de formato nativo** para valores booleanos em `printf`, pois a linguagem C original (padrão C90) **não possuía um tipo booleano**. No entanto, desde o **padrão C99**, a biblioteca `<stdbool.h>` introduziu o tipo `_Bool`, que pode ser usado para representar valores `true` (1) e `false` (0).

Como `_Bool` é, na verdade, um tipo de dado que internamente é representado como um `int` (`0` para `false` e `1` para `true`), podemos simplesmente usar `%d` para imprimi-lo:

```c
#include <stdio.h>
#include <stdbool.h>  // Inclui suporte para booleanos

int main() {
    bool valor = true;  // Também pode ser _Bool valor = 1;

    printf("Valor: %d\n", valor);  // Exibe 1 para true, 0 para false
    return 0;
}
```

Saída:

```
Valor: 1
```

#### 7.3.1 **Formatando a saída para "true" e "false"**

Se quisermos exibir `true` e `false` como strings legíveis, podemos fazer algo como:

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool condicao = false;

    printf("Condição: %s\n", condicao ? "true" : "false");
    return 0;
}
```

Saída:

```
Condição: false
```

- O **tipo `_Bool`** representa valores booleanos (`0` ou `1`).
- Para imprimir booleanos diretamente, **use `%d`** (`0` para `false`, `1` para `true`).
- Para exibir `"true"` e `"false"`, utilize um operador ternário ou `if-else`(_iremos nos aprofundar na próxima etapa_).
  Isso resolve a limitação da falta de um especificador `%b` nativo no `printf` em C.

Esses especificadores de formato são fundamentais para controlar como os valores são exibidos na saída padrão (`stdout`) ao usar `printf` e funções similares.

## Conclusão

Os **tipos primitivos escalares** em C são a base para manipulação de dados na linguagem. Compreender suas diferenças, tamanhos e faixas de valores é essencial para escrever programas eficientes e otimizar o uso de memória. Além disso, conhecer os modificadores (`signed`, `unsigned`, `short`, `long`) permite um controle mais refinado sobre como os dados são armazenados e manipulados na linguagem C.

Dominar esses conceitos é um passo fundamental para programadores que desejam escrever código robusto e eficiente em C. Então visando isso é proposto um exercício, para visualizar o enunciado [clique aqui!](./src/exercise.md)
