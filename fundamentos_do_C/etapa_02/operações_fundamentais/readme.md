### **Introdução aos Operadores em Linguagens de Programação**

Em qualquer linguagem de programação, os operadores são elementos fundamentais que permitem a manipulação de valores e variáveis. Eles atuam como símbolos especiais que executam operações matemáticas, comparações lógicas, atribuições e diversas outras funcionalidades essenciais para o funcionamento dos programas. Os operadores são utilizados para realizar desde simples cálculos aritméticos até tomadas de decisão complexas baseadas em condições lógicas.

Cada linguagem de programação pode ter sua própria sintaxe e conjunto de operadores, mas a maioria delas compartilha um núcleo comum de operadores aritméticos, relacionais e lógicos. No caso da linguagem C, esses operadores são a base para a construção de algoritmos eficientes e bem estruturados.

---

### **Os Operadores na Linguagem C**

A linguagem C possui um conjunto robusto de operadores que permitem a manipulação direta de variáveis e constantes. Entre os principais grupos de operadores estão:

- **Operadores Aritméticos**: Responsáveis por realizar operações matemáticas como soma, subtração, multiplicação e divisão.
- **Operadores Relacionais**: Permitem comparar valores e determinar relações como maior, menor ou igual.
- **Operadores Lógicos**: Usados para avaliar expressões booleanas e controlar fluxos de execução com base em condições verdadeiras ou falsas.

A seguir, veremos um resumo de cada tipo de operador e sua importância dentro da linguagem C.

---

### **1. Operadores Aritméticos**

Os operadores aritméticos são utilizados para realizar cálculos matemáticos em variáveis numéricas. Eles incluem:

| Operador | Descrição                 | Exemplo (`a = 10`, `b = 3`)              |
| -------- | ------------------------- | ---------------------------------------- |
| `+`      | Adição                    | `a + b` → `10 + 3 = 13`                  |
| `-`      | Subtração                 | `a - b` → `10 - 3 = 7`                   |
| `*`      | Multiplicação             | `a * b` → `10 * 3 = 30`                  |
| `/`      | Divisão                   | `a / b` → `10 / 3 = 3` (divisão inteira) |
| `%`      | Módulo (resto da divisão) | `a % b` → `10 % 3 = 1`                   |

**Observação:**

- Quando usamos `/` em números inteiros, a divisão é truncada (não há arredondamento). Para obter um valor decimal, pelo menos um dos operandos deve ser `float` ou `double`.
- O operador `%` é utilizado apenas para números inteiros e retorna o resto da divisão.

---

### **2. Operadores Relacionais**

Os operadores relacionais são utilizados para comparar valores, retornando `true` (1) ou `false` (0) como resultado. Eles são fundamentais para expressões condicionais em `if`, `while` e outras estruturas de controle.

| Operador | Descrição      | Exemplo (`a = 10`, `b = 3`) |
| -------- | -------------- | --------------------------- |
| `==`     | Igualdade      | `a == b` → `false (0)`      |
| `!=`     | Diferente      | `a != b` → `true (1)`       |
| `>`      | Maior que      | `a > b` → `true (1)`        |
| `<`      | Menor que      | `a < b` → `false (0)`       |
| `>=`     | Maior ou igual | `a >= b` → `true (1)`       |
| `<=`     | Menor ou igual | `a <= b` → `false (0)`      |

**Observação:**

- O operador `==` verifica igualdade entre valores, enquanto `=` é usado para atribuição.
- A ordem dos operadores relacionais deve ser respeitada para evitar erros de lógica.

---

### **3. Operadores Lógicos**

Os operadores lógicos permitem combinar expressões booleanas e tomar decisões mais complexas. Eles retornam `true` (1) ou `false` (0) com base nas condições avaliadas.

| Operador | Descrição  | Exemplo (`a = 10`, `b = 3`)   |
| -------- | ---------- | ----------------------------- |
| `&&`     | E lógico   | `(a > 5 && b < 5)` → `true`   |
| `\|\|`   | OU lógico  | `(a < 5 \|\| b < 5)` → `true` |
| `!`      | NÃO lógico | `!(a > b)` → `false`          |

**Observação:**

- O operador `&&` (E lógico) retorna verdadeiro apenas se **ambas** as expressões forem verdadeiras.
- O operador `||` (OU lógico) retorna verdadeiro se **pelo menos uma** das expressões for verdadeira.
- O operador `!` (NÃO lógico) inverte o valor lógico da expressão.

---

Os operadores são ferramentas essenciais em C e em qualquer linguagem de programação. Eles permitem a manipulação de dados, a comparação de valores e a tomada de decisões dentro dos programas. A compreensão correta dos operadores aritméticos, relacionais e lógicos possibilita a construção de algoritmos eficientes e bem estruturados.

Ao dominar esses operadores, há controle mais preciso sobre as variáveis e as condições do código, abrindo caminho para o desenvolvimento de programas mais avançados e eficientes!

A seguir iremos nos aprofundar mais nos [**operaodres Aritiméticos** para isso clique aqui!](./operadores_aritimeticos/readme.md)
