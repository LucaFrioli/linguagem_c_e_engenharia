# **Operadores Aritméticos na Linguagem C**

Os operadores aritméticos em C são fundamentais para realizar cálculos matemáticos. Eles permitem a manipulação de variáveis numéricas e são amplamente utilizados em operações básicas e complexas dentro dos programas. A compreensão detalhada de cada operador é essencial para escrever código eficiente e evitar erros inesperados.

## Sumário

- [Conjunto Operadore Aritiméticos](#1-o-conjunto-de-operadores-aritméticos-em-c)
- [Detalhamento de Operadores](#2-detalhamento-de-cada-operador)
  - [Operador de adição](#21-operador-de-adição-)
  - [Operador de subtração](#22-operador-de-subtração--)
  - [Operador de multiplicação](#23-operador-de-multiplicação-)
  - [Operador de divisão](#24-operador-de-divisão-)
  - [operador de módulo](#25-operador-de-módulo-)
- [Operadores Aritiméticos Compostos, incremetos e decrementos](#3-operadores-compostos-aritméticos-em-c)
  - [Operadores Compostos](#31-o-que-são-operadores-compostos-aritméticos)
  - [Incrementos e Decrementos](#33-operadores-de-incremento--e-decremento---)
- [Ordem de precedência e associatividade](#4-ordem-de-precedência-e-associatividade)

---

## **1. O Conjunto de Operadores Aritméticos em C**

A linguagem C possui os seguintes operadores aritméticos:

| Operador | Nome           | Exemplo (`a = 10, b = 3`) | Resultado                      |
| -------- | -------------- | ------------------------- | ------------------------------ |
| `+`      | Adição         | `a + b`                   | `10 + 3 = 13`                  |
| `-`      | Subtração      | `a - b`                   | `10 - 3 = 7`                   |
| `*`      | Multiplicação  | `a * b`                   | `10 * 3 = 30`                  |
| `/`      | Divisão        | `a / b`                   | `10 / 3 = 3` (divisão inteira) |
| `%`      | Módulo (resto) | `a % b`                   | `10 % 3 = 1`                   |

---

## **2. Detalhamento de Cada Operador**

### **2.1 Operador de Adição (`+`)**

O operador de adição (`+`) é usado para somar dois valores numéricos e produzir um resultado correspondente ao tipo dos operandos envolvidos.

---

#### **2.1.1 Funcionamento Básico**

A adição (`+`) funciona somando dois operandos e retornando um valor que pode ser armazenado em uma variável ou usado diretamente em expressões. Esse operador pode ser aplicado a diversos tipos numéricos, como:

- `int` → Números inteiros (positivos ou negativos).
- `unsigned int` → Números inteiros sem sinal.
- `float` → Números de ponto flutuante de precisão simples.
- `double` → Números de ponto flutuante de precisão dupla.
- `long` → Inteiros de maior alcance que `int`.
- `long long` → Inteiros de ainda maior alcance que `long`.

**Exemplo Simples:**

```c
#include <stdio.h>

int main() {
    int x = 7;
    int y = 5;
    int resultado = x + y;  // Soma de dois inteiros
    printf("Resultado: %d\n", resultado);  // 12
    return 0;
}
```

---

#### **2.1.2 Adição Entre Diferentes Tipos de Dados (Conversão de Tipo)**

Quando dois valores de diferentes tipos são somados, a linguagem C aplica **promoção de tipo** (também chamada de **conversão implícita**).

##### **Regras de Promoção de Tipo**

1. Se um dos operandos for **`double`**, o outro será convertido para `double` antes da soma.
2. Se não houver `double`, mas um dos operandos for `float`, o outro será convertido para `float`.
3. Se ambos forem inteiros, o resultado será do maior tipo entre eles (`int`, `long`, `long long`).

**Exemplo com Inteiro e Float:**

```c
#include <stdio.h>

int main() {
    int a = 10;
    float b = 4.5;

    float resultado = a + b; // 'a' será convertido para float antes da soma
    printf("Soma de int e float: %f\n", resultado);  // 14.5
    return 0;
}
```

**Explicação:**

- O número inteiro `10` é automaticamente convertido para `10.0` (`float`) antes da soma, pois o segundo operando (`4.5`) já é um `float`.
- O resultado da operação, portanto, será armazenado como `float` e impresso corretamente.

---

#### **2.1.3 Exemplo Expandido: Diferentes Combinações de Tipos**

Para entender melhor a conversão de tipo, vejamos alguns exemplos com diferentes tipos de variáveis:

```c
#include <stdio.h>

int main() {
    int a = 5;
    long b = 10;
    float c = 3.2;
    double d = 7.8;

    printf("Soma de int + long: %ld\n", a + b);  // 'int' promovido para 'long'
    printf("Soma de int + float: %f\n", a + c);  // 'int' promovido para 'float'
    printf("Soma de long + double: %lf\n", b + d); // 'long' promovido para 'double'
    printf("Soma de float + double: %lf\n", c + d); // 'float' promovido para 'double'

    return 0;
}
```

**Observações:**

- `int + long` → `int` é promovido para `long`, e o resultado é `long`.
- `int + float` → `int` é promovido para `float`, e o resultado é `float`.
- `long + double` → `long` é promovido para `double`, e o resultado é `double`.
- `float + double` → `float` é promovido para `double`, e o resultado é `double`.

---

#### **2.1.4 Diferenças Entre Adição de Inteiros e Ponto Flutuante**

Embora o operador `+` funcione da mesma forma para números inteiros e números de ponto flutuante, existem algumas diferenças importantes:

| Característica            | Inteiros (`int`, `long`, etc.)                                   | Ponto Flutuante (`float`, `double`)                                                     |
| ------------------------- | ---------------------------------------------------------------- | --------------------------------------------------------------------------------------- |
| **Precisão**              | Exata, pois trabalha com números inteiros.                       | Pode sofrer pequenas perdas de precisão devido à forma como os números são armazenados. |
| **Comportamento na soma** | Soma exata e direta.                                             | Pode resultar em arredondamentos inesperados devido à imprecisão de ponto flutuante.    |
| **Limites de valor**      | Pode gerar overflow quando o número ultrapassa o limite do tipo. | Pode gerar erros de precisão, mas dificilmente overflow.                                |

**Exemplo de Perda de Precisão em `float`:**

```c
#include <stdio.h>

int main() {
    float a = 0.1;
    float b = 0.2;
    float c = a + b;

    printf("0.1 + 0.2 = %.10f\n", c); // Resultado esperado: 0.3, mas pode imprimir algo como 0.3000000119
    return 0;
}
```

⚠️ **Perigo!** Como os números de ponto flutuante são representados em binário, operações como `0.1 + 0.2` podem não resultar exatamente em `0.3`, gerando pequenas diferenças de precisão.

---

#### 2.1.5** Considerações Finais Sobre a Adição (`+`) em C**

- A adição é um operador essencial para manipulação de valores numéricos.
- C promove automaticamente tipos menores para tipos maiores antes da operação.
- A soma entre números inteiros é exata, enquanto operações com `float` e `double` podem sofrer imprecisões.
- Para evitar problemas de conversão indesejada, use **casting explícito** quando necessário, por exemplo:
  ```c
  float resultado = (float)10 + 4.5; // Converte 10 para float antes da soma
  ```

---

### **2.2 Operador de Subtração (`-`)**

O operador de subtração (`-`) é utilizado para reduzir um valor a partir de outro e segue as mesmas regras de **promoção de tipo** que a adição (`+`).

---

#### **2.2.1 Funcionamento Básico**

A subtração entre dois operandos resulta na diferença entre eles. Esse operador pode ser aplicado a diversos tipos numéricos, tais como:

- `int` → Números inteiros.
- `unsigned int` → Números inteiros sem sinal.
- `float` → Números de ponto flutuante (precisão simples).
- `double` → Números de ponto flutuante (precisão dupla).
- `long` → Inteiros de maior alcance que `int`.
- `long long` → Inteiros ainda maiores que `long`.

**Exemplo Simples:**

```c
#include <stdio.h>

int main() {
    int x = 15;
    int y = 5;
    int resultado = x - y;  // Subtração de inteiros
    printf("Resultado da subtração: %d\n", resultado);  // 10
    return 0;
}
```

---

#### **2.2.2 Subtração Entre Diferentes Tipos de Dados (Conversão de Tipo)**

Assim como na adição, quando operandos de diferentes tipos são usados na subtração, a linguagem C aplica **promoção de tipo** para garantir precisão no resultado.

##### **Regras de Promoção de Tipo na Subtração**

1. Se um dos operandos for **`double`**, o outro será convertido para `double` antes da operação.
2. Se um dos operandos for **`float`**, o outro será convertido para `float`.
3. Se ambos forem inteiros, o resultado será do maior tipo entre eles (`int`, `long`, `long long`).

**Exemplo com Inteiro e Float:**

```c
#include <stdio.h>

int main() {
    int a = 10;
    float b = 2.5;

    float resultado = a - b;  // 'a' será convertido para float antes da subtração
    printf("Subtração de int e float: %f\n", resultado);  // 7.5
    return 0;
}
```

**Explicação:**

- O número inteiro `10` é convertido para `10.0` (`float`) antes da subtração.
- O resultado é armazenado como `float` e impresso corretamente.

---

#### **2.2.3 Exemplo Expandido: Diferentes Combinações de Tipos**

Para ilustrar como a subtração se comporta entre diferentes tipos de dados, vejamos um exemplo mais completo:

```c
#include <stdio.h>

int main() {
    int a = 20;
    long b = 5;
    float c = 3.5;
    double d = 10.2;

    printf("Subtração de int - long: %ld\n", a - b);  // 'int' promovido para 'long'
    printf("Subtração de int - float: %f\n", a - c);  // 'int' promovido para 'float'
    printf("Subtração de long - double: %lf\n", b - d); // 'long' promovido para 'double'
    printf("Subtração de float - double: %lf\n", c - d); // 'float' promovido para 'double'

    return 0;
}
```

**Observações:**

- `int - long` → `int` é promovido para `long`, e o resultado será `long`.
- `int - float` → `int` é promovido para `float`, e o resultado será `float`.
- `long - double` → `long` é promovido para `double`, e o resultado será `double`.
- `float - double` → `float` é promovido para `double`, e o resultado será `double`.

---

#### **2.2.4 Diferenças Entre Subtração de Inteiros e Ponto Flutuante**

A subtração de valores inteiros e de ponto flutuante pode apresentar algumas diferenças importantes:

| Característica                | Inteiros (`int`, `long`, etc.)                           | Ponto Flutuante (`float`, `double`)                                                     |
| ----------------------------- | -------------------------------------------------------- | --------------------------------------------------------------------------------------- |
| **Precisão**                  | Exata, pois trabalha com valores inteiros.               | Pode sofrer pequenas perdas de precisão devido à forma como os números são armazenados. |
| **Comportamento na operação** | Simples subtração direta.                                | Pode ter pequenos erros de arredondamento.                                              |
| **Limites de valor**          | Pode gerar **overflow** se ultrapassar o limite do tipo. | Pode gerar erros de precisão, mas overflow é improvável.                                |

**Exemplo de Perda de Precisão em `float`:**

```c
#include <stdio.h>

int main() {
    float a = 0.3;
    float b = 0.2;
    float c = a - b;

    printf("0.3 - 0.2 = %.10f\n", c); // Esperado: 0.1, mas pode imprimir algo como 0.0999999940
    return 0;
}
```

⚠️ **Atenção!** Números de ponto flutuante são armazenados em formato binário, e certas operações podem resultar em pequenas imprecisões.

---

#### **2.2.5 Considerações Finais Sobre a Subtração (`-`) em C**

- A subtração é um operador essencial para manipulação de valores numéricos.
- A linguagem C **promove automaticamente** operandos de tipos menores para tipos maiores.
- A subtração de inteiros é exata, enquanto operações com `float` e `double` podem sofrer **imprecisões**.
- Para evitar problemas de conversão, **use casting explícito** quando necessário:
  ```c
  float resultado = (float)10 - 2.5; // Converte 10 para float antes da subtração
  ```

---

### **2.3 Operador de Multiplicação (`*`)**

O operador de multiplicação (`*`) é utilizado para calcular o produto entre dois valores numéricos e segue regras específicas de promoção de tipo, garantindo que o resultado seja do tipo mais abrangente entre os operandos.

---

#### **2.3.1 Funcionamento Básico**

O operador `*` multiplica dois valores numéricos e retorna o produto da operação. Ele pode ser aplicado a diferentes tipos de dados, incluindo:

- **`int`** → Números inteiros.
- **`unsigned int`** → Números inteiros sem sinal.
- **`float`** → Números de ponto flutuante com precisão simples.
- **`double`** → Números de ponto flutuante com precisão dupla.
- **`long`** → Inteiros de maior alcance do que `int`.
- **`long long`** → Inteiros ainda maiores do que `long`.

**Exemplo Básico de Multiplicação de Inteiros:**

```c
#include <stdio.h>

int main() {
    int x = 7;
    int y = 5;
    int resultado = x * y;  // Multiplicação de inteiros
    printf("Resultado da multiplicação: %d\n", resultado);  // 35
    return 0;
}
```

**Explicação:**

- `7 * 5 = 35`
- O resultado da multiplicação entre dois inteiros (`int`) também será um `int`.

---

#### **2.3.2 Regras de Promoção de Tipo na Multiplicação**

Assim como nos operadores de adição (`+`) e subtração (`-`), a multiplicação em C pode envolver **promoção de tipo**. Isso ocorre quando operandos de tipos diferentes são utilizados na operação.

##### **Conversões de Tipo**

1. Se ambos os operandos forem **inteiros (`int`, `long`, `long long`)**, o resultado será do tipo do maior operando.
2. Se pelo menos um dos operandos for **`float`**, o outro será convertido para `float` antes da multiplicação.
3. Se pelo menos um dos operandos for **`double`**, o outro será convertido para `double` antes da multiplicação.

**Exemplo com Conversão de Tipo (Multiplicação Entre `int` e `float`):**

```c
#include <stdio.h>

int main() {
    int a = 6;
    float b = 2.5;

    float resultado = a * b;  // 'a' será convertido para float antes da multiplicação
    printf("Multiplicação de int e float: %f\n", resultado);  // 15.0
    return 0;
}
```

**Explicação:**

- O número inteiro `6` é automaticamente **convertido para `6.0` (float)** antes da multiplicação.
- O resultado é armazenado como `float` e impresso corretamente.

**Exemplo com `double`:**

```c
#include <stdio.h>

int main() {
    int a = 5;
    double b = 4.2;

    double resultado = a * b;  // 'a' será convertido para double antes da multiplicação
    printf("Multiplicação de int e double: %lf\n", resultado);  // 21.0
    return 0;
}
```

**Explicação:**

- O `int` (`5`) é convertido implicitamente para `double` (`5.0`).
- A multiplicação ocorre entre dois `double`, garantindo maior precisão.

---

#### **2.3.3 Exemplo Expandido: Diferentes Tipos de Multiplicação**

Vamos analisar um código que combina diferentes tipos de dados:

```c
#include <stdio.h>

int main() {
    int a = 10;
    long b = 3;
    float c = 2.5;
    double d = 1.1;

    printf("Multiplicação de int * long: %ld\n", a * b);  // 'int' promovido para 'long'
    printf("Multiplicação de int * float: %f\n", a * c);  // 'int' promovido para 'float'
    printf("Multiplicação de long * double: %lf\n", b * d); // 'long' promovido para 'double'
    printf("Multiplicação de float * double: %lf\n", c * d); // 'float' promovido para 'double'

    return 0;
}
```

🔎 **Observações:**

- `int * long` → `int` é promovido para `long`, e o resultado será `long`.
- `int * float` → `int` é promovido para `float`, e o resultado será `float`.
- `long * double` → `long` é promovido para `double`, e o resultado será `double`.
- `float * double` → `float` é promovido para `double`, e o resultado será `double`.

---

#### **2.3.4 Overflow e Underflow na Multiplicação**

##### **Overflow em Inteiros**

Em operações de multiplicação, pode ocorrer **overflow** quando o resultado ultrapassa o limite máximo do tipo de dado.

**Exemplo de Overflow com `int`:**

```c
#include <stdio.h>
#include <limits.h> // Para obter os limites do tipo int

int main() {
    int a = INT_MAX;  // Valor máximo de um inteiro
    int b = 2;

    int resultado = a * b;  // Overflow pode ocorrer
    printf("Resultado da multiplicação: %d\n", resultado);  // Resultado pode ser inesperado
    return 0;
}
```

⚠️ **Atenção!** Em caso de **overflow**, o resultado pode ser incorreto ou inesperado.

##### **Precisão com `float` e `double`**

Ao multiplicar valores de ponto flutuante, pode haver **perda de precisão**, especialmente ao trabalhar com números muito pequenos ou muito grandes.

📌 **Exemplo de Perda de Precisão:**

```c
#include <stdio.h>

int main() {
    double a = 1.0000000001;
    double b = 10000000000.0;

    double resultado = a * b;
    printf("Resultado: %.10lf\n", resultado);  // Pode apresentar pequenos erros de precisão
    return 0;
}
```

⚠️ **Conclusão:** Em cálculos científicos ou financeiros, evite `float` e prefira `double` para maior precisão.

---

#### **2.3.5 Considerações Finais Sobre a Multiplicação (`*`) em C**

- O operador `*` realiza multiplicação entre valores numéricos.
- Se os operandos forem de tipos diferentes, **o menor será promovido para o maior** antes da operação.
- **Overflow pode ocorrer** quando multiplicamos valores inteiros muito grandes.
- **Ponto flutuante pode sofrer imprecisões** devido à representação binária.

**Dica:** Sempre utilize **`double`** para cálculos financeiros e científicos, pois oferece maior precisão do que `float`.

Com essa explicação detalhada, você agora domina completamente o operador de multiplicação em C!

---

### **2.4. Operador de Divisão (`/`)**

O operador de divisão (`/`) é utilizado para dividir um valor pelo outro e possui regras específicas dependendo do tipo dos operandos envolvidos.

---

#### **2.4.1 Funcionamento do Operador `/`**

A operação de divisão segue estas regras:

- Se **ambos os operandos forem inteiros**, o resultado será um número inteiro, pois a parte decimal será truncada (não arredondada).
- Se pelo menos **um dos operandos for de ponto flutuante (`float` ou `double`)**, o resultado será um número de ponto flutuante.
- Divisão por **zero** em números inteiros causa comportamento indefinido.

---

#### **2.4.2 Exemplos Fundamentais**

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    float c = 10.0;

    printf("Divisão inteira: %d\n", a / b); // 3 (parte decimal é truncada)
    printf("Divisão com float: %f\n", c / b); // 3.333333 (mantém casas decimais)

    return 0;
}
```

**Explicação:**

- `a / b` → Como `a` e `b` são inteiros, a divisão resulta em um **inteiro** (`3`), descartando a parte decimal.
- `c / b` → `c` é um `float`, então a divisão ocorre no domínio dos números de ponto flutuante, retornando `3.333333`.

---

#### **2.4.3 Divisão Inteira e Truncamento**

Em C, quando ambos os operandos da divisão são inteiros, a parte decimal do resultado é **descartada (truncada), e não arredondada**.

```c
#include <stdio.h>

int main() {
    int x = 7, y = 2;
    printf("Divisão inteira: %d\n", x / y); // Resultado: 3, pois 7/2 = 3.5, mas a parte decimal é descartada.

    return 0;
}
```

⚠️ **Importante!** O resultado **não é arredondado**, apenas a parte inteira é mantida.

| Expressão | Resultado em C |
| --------- | -------------- |
| `7 / 2`   | `3`            |
| `9 / 4`   | `2`            |
| `11 / 3`  | `3`            |

---

#### **2.4.4 Como Obter um Resultado Decimal?**

Para que o resultado da divisão **não perca a parte decimal**, pelo menos um dos operandos deve ser `float` ou `double`.

```c
#include <stdio.h>

int main() {
    int a = 7, b = 2;

    float resultado1 = a / (float)b; // Convertendo explicitamente um dos operandos
    double resultado2 = (double)a / b; // Convertendo o outro operando

    printf("Divisão com conversão para float: %f\n", resultado1); // 3.500000
    printf("Divisão com conversão para double: %lf\n", resultado2); // 3.500000

    return 0;
}
```

**Explicação:**

- `(float)b` → Converte `b` para `float`, então a divisão acontece no domínio dos números de ponto flutuante.
- `(double)a` → Converte `a` para `double`, garantindo um resultado com maior precisão.

**Dica:** Se um dos valores for `float` ou `double` diretamente (ex.: `10.0`), a conversão ocorre automaticamente.

---

#### **2.4.5 Divisão por Zero (`b = 0`)**

Se o divisor for **zero**, a divisão pode causar **comportamento indefinido**.

##### **Divisão Inteira por Zero (`int / 0`)**

```c
#include <stdio.h>

int main() {
    int a = 10, b = 0;
    printf("%d\n", a / b); // ERRO! Comportamento indefinido.

    return 0;
}
```

⚠️ **Atenção!** Em operações com números inteiros, dividir por zero pode:

- Causar um erro fatal na execução.
- Resultar em comportamento imprevisível.

Para evitar isso, sempre verifique se o divisor é **diferente de zero** antes da divisão (iremos entender mais a fundo posteriormente):

```c
if (b != 0) {
    printf("%d\n", a / b);
} else {
    printf("Erro: divisão por zero não permitida!\n");
}
```

##### **Divisão de Ponto Flutuante por Zero (`float / 0.0`)**

Em operações com `float` ou `double`, dividir por zero **não causa erro imediato**, mas retorna um valor especial:

```c
#include <stdio.h>

int main() {
    float x = 10.0, y = 0.0;
    printf("%f\n", x / y); // Retorna "inf" (infinito)

    return 0;
}
```

**Comportamento:**

- A divisão de `float / 0.0` resulta em **"inf"** (infinito).
- Se for `-10.0 / 0.0`, o resultado será **"-inf"** (infinito negativo).
- Se for `0.0 / 0.0`, o resultado será **"nan"** (Not a Number – valor indefinido).

---

#### **2.4.6 Resumo das Regras da Divisão em C**

| **Caso**                         | **Resultado**                        |
| -------------------------------- | ------------------------------------ |
| `10 / 3` (ambos inteiros)        | `3` (a parte decimal é descartada).  |
| `10.0 / 3` (`float` ou `double`) | `3.333333` (mantém a parte decimal). |
| `10 / (float)3`                  | `3.333333` (conversão explícita).    |
| `10 / 0` (`int / 0`)             | **Erro!** Comportamento indefinido.  |
| `10.0 / 0.0` (`float / 0.0`)     | **"inf"** (infinito positivo).       |
| `-10.0 / 0.0` (`float / 0.0`)    | **"-inf"** (infinito negativo).      |
| `0.0 / 0.0` (`float / 0.0`)      | **"nan"** (valor indefinido).        |

---

#### **2.4.7 Considerações Finais**

- O operador `/` realiza a **divisão numérica** em C.
- Se ambos os operandos forem **inteiros**, a parte decimal será descartada.
- Para obter um **resultado decimal**, um dos operandos deve ser `float` ou `double`.
- **Divisão por zero** deve ser evitada em inteiros, pois gera erro fatal.
- Em números de ponto flutuante, `float / 0.0` retorna **infinito** (`inf`) ou **NaN** (`nan`).

---

### **2.5 Operador de Módulo (`%`)**

O operador **módulo (`%`)** é utilizado para calcular o **resto da divisão inteira** entre dois números inteiros. Diferente da divisão convencional (`/`), que retorna o quociente, o operador `%` retorna apenas o valor restante após a divisão.

---

#### **2.5.1 Como o Operador `%` Funciona?**

O operador de módulo funciona dividindo o primeiro número (`dividendo`) pelo segundo número (`divisor`) e retornando apenas o **resto** dessa divisão.

##### **Exemplo de Cálculo Manual:**

Se tivermos a seguinte operação:

\[
10 \div 3 = 3 \text{ (quociente)}, \quad \text{resto } = 1
\]

O operador de módulo (`%`) retorna **apenas o resto** dessa divisão.

```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    printf("Resto da divisão: %d\n", a % b); // Saída: 1
    return 0;
}
```

**Explicação:**

- `10 ÷ 3` dá um quociente de `3` e um **resto de `1`**.
- O operador `%` retorna apenas esse **resto (`1`)**.

---

#### **2.5.2 Regras Importantes do Operador de Módulo (`%`)**

##### **Apenas Funciona com Tipos Inteiros**

O operador `%` **somente pode ser usado com números inteiros (`int`, `long`, `long long`)**. Ele **não suporta valores de ponto flutuante (`float`, `double`)**.

**Exemplo de erro ao tentar usar `%` com `float` ou `double`:**

```c
#include <stdio.h>

int main() {
    float x = 5.5, y = 2.2;
    printf("%f\n", x % y); // ERRO! Operador % não suporta float/double
    return 0;
}
```

**Motivo do erro:**

- `float` e `double` representam números decimais, e o operador `%` funciona apenas com **divisão inteira**.
- Em cálculos envolvendo `float` e `double`, deve-se usar a função `fmod()` da biblioteca `math.h`(biblioteca que iremos nos aprofundar mais adiante), que retorna o resto da divisão entre números de ponto flutuante.

**Solução com `fmod()`:**

```c
#include <stdio.h>
#include <math.h> // Necessário para fmod()

int main() {
    double x = 5.5, y = 2.2;
    printf("Resto da divisão: %f\n", fmod(x, y)); // Saída correta: 1.1
    return 0;
}
```

---

##### **Comportamento com Números Negativos**

Quando um dos operandos é negativo, o resultado do operador `%` pode **variar entre diferentes compiladores** dependendo da forma como eles tratam a divisão negativa.

**Regra Geral:**  
O sinal do resultado segue o sinal do **dividendo** (o primeiro número).

```c
#include <stdio.h>

int main() {
    printf("%d\n", 10 % 3);   // Saída: 1   (positivo)
    printf("%d\n", -10 % 3);  // Saída: -1  (segue o sinal do -10)
    printf("%d\n", 10 % -3);  // Saída: 1   (segue o sinal do 10)
    printf("%d\n", -10 % -3); // Saída: -1  (segue o sinal do -10)
    return 0;
}
```

**Explicação:**

- `10 % 3` → `10 ÷ 3 = 3`, resto `1`.
- `-10 % 3` → `-10 ÷ 3 = -3`, resto `-1` (segue o sinal do -10).
- `10 % -3` → `10 ÷ -3 = -3`, resto `1` (segue o sinal do 10).
- `-10 % -3` → `-10 ÷ -3 = 3`, resto `-1` (segue o sinal do -10).

⚠️ **Atenção:** Em algumas linguagens de programação, o sinal do resto pode seguir o divisor em vez do dividendo, mas em C segue **sempre o dividendo**.

---

#### **2.5.3 Aplicações Práticas do Operador `%`**

O operador `%` é muito útil em diversas situações de programação, como **verificar divisibilidade**, **identificar números pares e ímpares**, **criar ciclos repetitivos** e **trabalhar com formatação de valores**.

##### **Verificar Se Um Número é Par ou Ímpar**

Se um número for **divisível por 2**, ele é **par**; caso contrário, é **ímpar**.

```c
#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d é um número par.\n", num);
    else
        printf("%d é um número ímpar.\n", num);

    return 0;
}
```

Se `num % 2 == 0`, significa que o número é divisível por `2` e, portanto, é **par**.  
Se `num % 2 != 0`, significa que há um resto na divisão e o número é **ímpar**.

---

##### **Criando um Ciclo Repetitivo com `%`**

O operador `%` pode ser usado para repetir padrões, como alternar entre diferentes valores em um loop.

```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        printf("Índice %d - Grupo %d\n", i, i % 3);
    }
    return 0;
}
```

**Explicação:**

- O operador `%` mantém o valor sempre dentro do intervalo `0` a `2`, criando um ciclo repetitivo (`0, 1, 2, 0, 1, 2,...`).

---

##### **Utilização em Cálculos de Datas**

Podemos usar `%` para encontrar o **dia da semana** baseado em um número de dias corridos.

```c
#include <stdio.h>

int main() {
    int dias_totais = 45;
    int dia_da_semana = dias_totais % 7; // Supondo que 0 = domingo, 1 = segunda, etc.

    printf("Dia da semana correspondente: %d\n", dia_da_semana);
    return 0;
}
```

**Explicação:**

- Como há `7` dias na semana, o operador `%` ajuda a determinar qual dia corresponde após um determinado número de dias.

---

O operador **módulo (`%`)** é uma ferramenta poderosa para trabalhar com restos de divisão em C. Ele é usado **exclusivamente** para **números inteiros** e tem aplicações práticas em **verificação de números pares/ímpares**, **cálculos de ciclos**, **datas**, e muito mais.

- **Resumo das Regras:**
- **Funciona apenas com inteiros (`int`, `long`, `long long`).**
- **Não pode ser usado com `float` ou `double`.**
- **O sinal do resultado segue o dividendo.**
- **Muito útil para padrões repetitivos e verificações matemáticas.**

---

## **3. Operadores Compostos Aritméticos em C**

Na linguagem C, os **operadores compostos aritméticos** são atalhos que combinam **uma operação aritmética com uma atribuição**. Eles tornam o código mais conciso e legível, evitando a necessidade de escrever expressões redundantes.

Além disso, os operadores **incremento (`++`) e decremento (`--`)** são operadores especiais usados para aumentar ou diminuir o valor de uma variável de forma eficiente.

---

### **3.1 O que são Operadores Compostos Aritméticos?**

Os operadores compostos combinam uma **operação matemática** com uma **atribuição**. Em vez de escrever:

```c
x = x + 5; // Forma tradicional
```

Podemos simplificar para:

```c
x += 5; // Forma usando operador composto
```

Isso significa: **"Adicione 5 ao valor atual de x e armazene o resultado em x"**.

Esses operadores existem para **todas as operações aritméticas básicas**. Veja a tabela:

| Operador | Equivalente a | Descrição                  |
| -------- | ------------- | -------------------------- |
| `+=`     | `x = x + y`   | Soma e atribui             |
| `-=`     | `x = x - y`   | Subtrai e atribui          |
| `*=`     | `x = x * y`   | Multiplica e atribui       |
| `/=`     | `x = x / y`   | Divide e atribui           |
| `%=`     | `x = x % y`   | Calcula o módulo e atribui |

**Vantagens de usar operadores compostos:**

- Menos código e mais legibilidade.
- Melhor desempenho em algumas otimizações de compilador.
- Evita repetições desnecessárias.

---

### **3.2 Exemplos Práticos de Operadores Compostos**

Vamos explorar alguns exemplos para entender melhor como esses operadores funcionam na prática.

```c
#include <stdio.h>

int main() {
    int x = 10, y = 5;

    x += y; // Equivale a x = x + y;
    printf("x após x += y: %d\n", x); // Saída: 15

    x -= 3; // Equivale a x = x - 3;
    printf("x após x -= 3: %d\n", x); // Saída: 12

    x *= 2; // Equivale a x = x * 2;
    printf("x após x *= 2: %d\n", x); // Saída: 24

    x /= 4; // Equivale a x = x / 4;
    printf("x após x /= 4: %d\n", x); // Saída: 6

    x %= 5; // Equivale a x = x % 5;
    printf("x após x %%= 5: %d\n", x); // Saída: 1

    return 0;
}
```

**Observações:**

- `+=` soma e armazena o resultado.
- `-=` subtrai um valor da variável.
- `*=` multiplica e armazena o novo valor.
- `/=` divide, considerando apenas a parte inteira da divisão.
- `%=` calcula o **resto** da divisão inteira.

**Cuidado com o uso de `/=` e `%=`**:

- O divisor **não pode ser zero**, pois isso resultaria em erro de execução (**divisão por zero**).
- A divisão entre inteiros **descarta** a parte decimal.

---

### **3.3 Operadores de Incremento (`++`) e Decremento (`--`)**

Além dos operadores compostos aritméticos, o C também oferece os operadores de **incremento (`++`) e decremento (`--`)**, que servem para aumentar ou diminuir o valor de uma variável em `1`.

| Operador | Equivalente a | Descrição       |
| -------- | ------------- | --------------- |
| `++`     | `x = x + 1`   | Incrementa em 1 |
| `--`     | `x = x - 1`   | Decrementa em 1 |

Esses operadores possuem **duas formas de uso:**

**1. Pré-incremento (`++x`) / Pré-decremento (`--x`)**

- **A variável é alterada antes de ser usada na expressão.**

**2. Pós-incremento (`x++`) / Pós-decremento (`x--`)**

- **A variável é usada primeiro e só depois é alterada.**

---

#### **3.3.1 Exemplo de Pré-Incremento e Pós-Incremento**

```c
#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Pré-incremento: %d\n", ++a); // A variável é incrementada antes: 6
    printf("Pós-incremento: %d\n", b++); // A variável é usada primeiro: 5
    printf("Valor de b depois do pós-incremento: %d\n", b); // Agora b = 6

    return 0;
}
```

**Explicação:**

- Em `++a`, `a` **é incrementado antes** de ser impresso (`6`).
- Em `b++`, `b` **é impresso primeiro** (`5`) e só depois é incrementado (`6`).

O mesmo conceito se aplica ao decremento (`--`):

```c
#include <stdio.h>

int main() {
    int x = 10, y = 10;

    printf("Pré-decremento: %d\n", --x); // x é decrementado antes: 9
    printf("Pós-decremento: %d\n", y--); // y é usado primeiro: 10
    printf("Valor de y depois do pós-decremento: %d\n", y); // Agora y = 9

    return 0;
}
```

**Quando usar cada um?**

- **Pré-incremento (`++x`)** → Quando você precisa do valor atualizado imediatamente.
- **Pós-incremento (`x++`)** → Quando você precisa do valor antigo antes da alteração.

---

### **3.4 Cuidados ao Usar Esses Operadores**

Embora os operadores compostos, `++` e `--` sejam muito úteis, seu uso descuidado pode levar a **comportamentos inesperados**, especialmente em expressões mais complexas.

#### **3.4.1 Exemplo de Comportamento Indefinido**

```c
int x = 5;
printf("%d\n", x++ + x++); // Comportamento indefinido!
```

O que acontece aqui?

- O compilador pode avaliar os `x++` em **ordens diferentes**, gerando **resultados imprevisíveis**.
- **Evite usar a mesma variável várias vezes em uma mesma expressão com `++` ou `--`!**

**Melhor abordagem:**

```c
int x = 5;
int temp1 = x++;
int temp2 = x++;
printf("%d\n", temp1 + temp2); // Agora o comportamento é previsível!
```

---

Os **operadores compostos aritméticos** (`+=`, `-=`, `*=`, `/=`, `%=`) são atalhos que tornam o código mais compacto e eficiente.

Os operadores **incremento (`++`) e decremento (`--`)** permitem aumentar ou diminuir valores de forma prática, mas é essencial compreender a diferença entre **pré-incremento e pós-incremento** para evitar bugs sutis.

**Dicas finais:**

- Prefira operadores compostos para simplificar atribuições matemáticas.
- Use `++x` e `x++` com atenção, evitando expressões complexas e ambíguas.
- Sempre teste seu código para evitar **comportamentos indefinidos**.

---

## **4. Ordem de Precedência e Associatividade**

Na linguagem C, as operações matemáticas dentro de uma expressão não são avaliadas simplesmente da esquerda para a direita. A ordem em que os operadores são executados é determinada por dois conceitos fundamentais:

1. **Precedência dos operadores** – Define quais operadores têm maior prioridade em uma expressão.
2. **Associatividade dos operadores** – Determina a direção em que operadores de mesma prioridade são avaliados (esquerda para direita ou direita para esquerda).

Entender essas regras é essencial para evitar resultados inesperados em expressões matemáticas e para escrever código mais previsível e legível.

---

### **4.1 Precedência dos Operadores Aritméticos**

A tabela abaixo apresenta a hierarquia de precedência dos operadores aritméticos em C, ordenada do mais alto para o mais baixo.

| Prioridade    | Operador      | Descrição                                                                          |
| ------------- | ------------- | ---------------------------------------------------------------------------------- |
| **1 (Maior)** | `()`          | Parênteses – Força a prioridade na execução da expressão dentro deles.             |
| **2**         | `*`, `/`, `%` | Multiplicação, Divisão e Módulo – Têm precedência maior do que adição e subtração. |
| **3 (Menor)** | `+`, `-`      | Adição e Subtração – Avaliados por último entre os operadores aritméticos.         |

**Regras importantes:**

- **Parênteses** têm a maior precedência e podem ser usados para forçar uma ordem específica.
- **Multiplicação (`*`), Divisão (`/`) e Módulo (`%`)** têm precedência maior que **Adição (`+`) e Subtração (`-`)**.
- Operadores com a **mesma precedência** são resolvidos com base na **associatividade** (discutida na próxima seção).

---

#### **Exemplo Prático:**

```c
#include <stdio.h>

int main() {
    int resultado = 10 + 3 * 2;
    printf("%d\n", resultado); // Saída: 16
    return 0;
}
```

**Explicação:**

- A multiplicação (`*`) tem precedência maior que a adição (`+`).
- A expressão `3 * 2` é avaliada primeiro, resultando em `6`.
- Depois, `10 + 6` resulta em **`16`**.

---

#### **Alterando a Ordem de Avaliação com Parênteses**

Para mudar a ordem de execução, basta usar **parênteses**, pois eles têm a **maior precedência**.

```c
#include <stdio.h>

int main() {
    int resultado = (10 + 3) * 2;
    printf("%d\n", resultado); // Saída: 26
    return 0;
}
```

**Explicação:**

- Como a soma (`+`) agora está dentro dos parênteses, ela é avaliada primeiro.
- `10 + 3` resulta em `13`, e depois `13 * 2` resulta em **`26`**.

**Dica:** Sempre que houver dúvida sobre a ordem de execução de operadores, use parênteses para tornar a intenção do código mais clara e evitar ambiguidades.

---

### **4.2 Associatividade dos Operadores**

A **associatividade** define a direção na qual operadores de **mesma precedência** são avaliados em uma expressão.

| Tipo de Associatividade   | Direção                                                    |
| ------------------------- | ---------------------------------------------------------- |
| **Esquerda para Direita** | `+`, `-`, `*`, `/`, `%`                                    |
| **Direita para Esquerda** | `=` (Atribuição), `+=`, `-=`, `*=`, `/=`, `%=`, `++`, `--` |

#### **Associatividade da Esquerda para a Direita**

A maioria dos operadores aritméticos seguem **associatividade da esquerda para a direita**. Isso significa que, em expressões com operadores de mesma precedência, a avaliação ocorre **da esquerda para a direita**.

##### **Exemplo:**

```c
#include <stdio.h>

int main() {
    int resultado = 20 / 4 * 2;
    printf("%d\n", resultado); // Saída: 10
    return 0;
}
```

**Explicação:**

- Tanto a divisão (`/`) quanto a multiplicação (`*`) possuem **mesma precedência**.
- Como esses operadores são **associativos da esquerda para a direita**, a avaliação segue esta ordem:
  1. `20 / 4 = 5`
  2. `5 * 2 = 10`

Se tivéssemos escrito a expressão de outra forma, usando parênteses para alterar a avaliação:

```c
int resultado = 20 / (4 * 2); // 20 / 8 = 2
```

Agora a multiplicação ocorre antes, mudando o resultado final para **`2`**.

---

#### **Associatividade da Direita para a Esquerda**

A atribuição (`=`) e os operadores compostos de atribuição (`+=`, `-=`, `*=`, `/=`, `%=`) seguem **associatividade da direita para a esquerda**. Isso significa que a avaliação ocorre **da direita para a esquerda**.

##### **Exemplo com atribuição em cadeia:**

```c
int a, b, c;
a = b = c = 5;
```

**Explicação:**

- Primeiro `c = 5` é avaliado.
- Depois `b = c` (ou seja, `b = 5`).
- Finalmente `a = b` (ou seja, `a = 5`).

O valor `5` é propagado da **direita para a esquerda**.

Se a avaliação seguisse da **esquerda para a direita**, `a` seria atribuído primeiro, antes de `b` e `c` terem valor definido, o que não faz sentido.

---

### **4.3 Cuidados ao Usar Precedência e Associatividade**

Mesmo sabendo a precedência dos operadores, é sempre uma **boa prática utilizar parênteses para tornar o código mais legível e evitar ambiguidades**.

#### **Erros Comuns e Como Evitá-los**

##### **Exemplo de erro:**

```c
int resultado = 10 + 5 / 2 * 3;
```

Como `/` e `*` têm precedência maior que `+`, a ordem de execução será:

1. `5 / 2 = 2` (divisão inteira, descartando a parte decimal).
2. `2 * 3 = 6`.
3. `10 + 6 = 16`.

**Código corrigido para obter um resultado diferente usando parênteses:**

```c
int resultado = (10 + 5) / 2 * 3; // (15 / 2) * 3 = 7 * 3 = 21
```

---

### **4.4 Resumo das Regras**

| Regra                                                                                                | Descrição                                                                                             |
| ---------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------- |
| **1. Parênteses têm maior prioridade**                                                               | Expressões dentro de `()` são sempre avaliadas primeiro.                                              |
| **2. Multiplicação (`*`), Divisão (`/`) e Módulo (`%`) vêm antes de Adição (`+`) e Subtração (`-`)** | Se estiverem na mesma expressão, são executados primeiro.                                             |
| **3. Associatividade da esquerda para a direita**                                                    | A maioria dos operadores são avaliados da esquerda para a direita.                                    |
| **4. Associatividade da direita para a esquerda**                                                    | Atribuições (`=`) e operadores compostos (`+=`, `-=`, etc.) são avaliados da direita para a esquerda. |
| **5. Use parênteses para evitar ambiguidades**                                                       | Mesmo que a precedência esteja clara, parênteses deixam o código mais legível.                        |

---

Compreender a **precedência e associatividade** dos operadores em C é essencial para evitar erros e escrever código mais eficiente e claro. Sempre que houver dúvidas, **use parênteses para explicitar a ordem desejada**. Assim, você evita surpresas nos cálculos e melhora a legibilidade do código!

---

## **5. Considerações**

Ao longo deste guia, exploramos em profundidade os **operadores aritméticos** na linguagem C, desde suas operações fundamentais até conceitos mais avançados como **ordem de precedência**, **associatividade** e **promoção de tipo**. Aprendemos como os operadores compostos e os incrementos/decrementos podem otimizar código e tornar expressões matemáticas mais concisas.

Compreender bem os operadores aritméticos é essencial, pois eles são a base para qualquer manipulação numérica dentro de um programa. No entanto, calcular valores não é suficiente para construir lógicas de programação robustas. Muitas vezes, precisamos **comparar** números e tomar decisões baseadas nessas comparações.

Aqui entram os **operadores relacionais**. Eles nos permitem verificar condições como **igualdade**, **diferença**, **maior ou menor que**, e assim direcionar o fluxo de execução do programa.

**Por exemplo:**

- "O saldo da conta bancária é maior do que R$100?"
- "A temperatura atual está abaixo de 0°C?"
- "O usuário digitou a senha correta?"

Antes de continuarmos fica o convite para a realização de um exercício para fixação do conteúdo aprendido neste guia, para isso [clique aqui!](./exercise.md)

Agora que dominamos os operadores aritméticos, vamos explorar os **operadores relacionais** e entender como eles são fundamentais para a construção de estruturas relacionais, tomadas de decisão e controle de fluxo nos programas em C. Para isso [clique aqui!](../operadores_relacionais/readme.md)
