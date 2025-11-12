# **Enunciado do Exercício:**

Imagine que você está criando um **personagem para um jogo de RPG**. Para isso, você precisa definir atributos como **força, defesa, velocidade, magia e até mesmo sorte**. Alguns desses atributos exigem diferentes **tipos de dados** para serem representados corretamente.  

1. **Declare variáveis** representando esses atributos usando diferentes **tipos primitivos escalares** (`char`, `int`, `float`, `double`, etc.).
2. **Atribua valores coerentes e modificadores**, pensando nas características de um personagem.
3. **Use booleanos** (`stdbool.h`) para armazenar se o personagem está **vivo ou não**.
4. **Exiba os valores e tamanhos** das variáveis de forma estilizada, como uma ficha de personagem.

## Atributos propostos :

 - Nome : Utilize um char, no momento ele terá apenas uma letra como nome 
 - Nível : O nível deve ser um pouco mais limitado, na maioria dos rpgs não passa do nível 200 e é impossível ter nível negativo
 - Vida : A vida pode ser tanto negativa quanto positiva e pode ultrpassar 32.000
 - Mana : A Energia mágica nunca pode descer a baixo de 0 pontos logo só pode ser positiva e ultrpassa os 32 mil pontos
 - Força : A força pode ter valores altos mas nunca passa de 32 mil 
 - Defesa : Defesa nunca pode ser negativa e jamais passa de 65 mil
 - Magia : A magia deve ser extremamente precisa, e pode ter números quebrados
 - Ouro : O Ouro que o personagem pode carregar é muito muito muito alto
 - Velocidade : A velocidade pode ser definida em frações
 - Sorte : A sorte deve te ruma precisão extra, já que as vezes pode ser trabalhada em valores abaixo de "+0" porém maiores que "-0" 
 - Estado do personagem (vivo ou morto, de preferência para aprecer sim ou não dependendo se é true ou false)

---

### **📜 Exemplo de ficha - RPG Edition**

```plaintext

 =============================================
  🎮  FICHA DO PERSONAGEM - RPG EDITION 🎮 
 =============================================
 
 Nome do personagem: 
 Nível: 

 === Estado ===
 Está vivo?
 
 === Atributos ===
 Vida: (⚠️ Cuidado! Pode estar morto!)
 Mana: x 🔮
 Força: x 💪
 Defesa: x 🛡️
 Velocidade: x 🚀
 Magia: x ✨
 Sorte: x 🍀
 
 === Economia ===
 Ouro: x 🪙 
 

 === Tamanhos das Variáveis ===
 Tamanho de um char: y bytes
 Tamanho de um short: y bytes
 Tamanho de um int:  y bytes
 Tamanho de um unsigned int: y bytes
 Tamanho de um long long: y bytes
 Tamanho de um float: y bytes
 Tamanho de um double: y bytes
 Tamanho de um long double: y bytes

 =============================================
  📜 Ficha completa! Boa sorte na aventura! 🎲
 =============================================

```

**OBS:** x representa onde os valores devem se inseridos, e y deve ser os valores que o tipo de uma variavel pode chegar; 

## Dicas 

### Sufixos de atribuição 

Os sufixos (`f`, `L`, `UL`, etc.) servem para indicar explicitamente o tipo do valor atribuído. Eles são usados para evitar conversões indesejadas e garantir que o valor tenha o tipo correto desde o início. Vamos analisar cada um deles:

---

#### **Sufixos Numéricos em C**

| Sufixo  | Tipo Indicado              | Exemplo                                      | Explicação |
|---------|----------------------------|----------------------------------------------|------------|
| **`f`**  | `float`                    | `float v = 8.75f;`                           | O sufixo `f` força o número a ser tratado como um `float`. Sem ele, 8.75 seria considerado `double`. |
| **`F`**  | `float`                    | `float v = 8.75F;`                           | Mesmo efeito que `f`, apenas uma variação de maiúscula e minúscula. |
| **`L`**  | `long double`               | `long double s = 0.987654321234567L;`        | O `L` indica que o número deve ser tratado como um `long double`, que tem mais precisão do que `double`. |
| **`l`**  | `long double`               | `long double s = 0.987654321234567l;`        | Mesmo efeito que `L`, mas minúsculo (não recomendado devido à similaridade com `1`). |
| **`U`**  | `unsigned`                  | `unsigned int x = 250U;`                     | O `U` indica que o valor é `unsigned`, prevenindo interpretações erradas. |
| **`u`**  | `unsigned`                  | `unsigned int x = 250u;`                     | Mesmo efeito que `U`, apenas variação minúscula. |
| **`L`**  | `long`                      | `long tempo = 999999L;`                      | O `L` força o número a ser `long`, garantindo armazenamento adequado para valores maiores que `int`. |
| **`l`**  | `long`                      | `long tempo = 999999l;`                      | Mesmo efeito que `L`, mas minúsculo (não recomendado por confusão com `1`). |
| **`UL`** | `unsigned long`              | `unsigned long y = 99999999999UL;`           | `UL` garante que o número seja tratado como `unsigned long`, evitando estouro de tipo. |
| **`ul`** | `unsigned long`              | `unsigned long y = 99999999999ul;`           | Mesma função que `UL`, apenas variação de maiúscula e minúscula. |
| **`LL`** | `long long`                  | `long long z = 99999999999LL;`               | O `LL` força o número a ser `long long`, que suporta valores maiores do que `long`. |
| **`ll`** | `long long`                  | `long long z = 99999999999ll;`               | Mesmo efeito que `LL`, apenas variação minúscula. |
| **`ULL`** | `unsigned long long`        | `unsigned long long w = 99999999999ULL;`     | `ULL` garante que o valor seja `unsigned long long`, útil para valores muito grandes. |
| **`ull`** | `unsigned long long`        | `unsigned long long w = 99999999999ull;`     | Mesmo efeito que `ULL`, apenas variação minúscula. |

---

**Observações Importantes**

- O uso das letras **maiúsculas** (`F`, `L`, `U`, `LL`, `ULL`) é mais comum e recomendado para evitar confusões visuais, especialmente `l` com `1`.

- Os sufixos **`LL`** e **`ULL`** são úteis para garantir que valores grandes sejam tratados corretamente sem risco de overflow em tipos menores.

- O `f` é importante para evitar conversões automáticas para `double`, otimizando memória e desempenho.

**ESta tabela é util para, declarar os números com precisão e evitar surpresas na hora da compilação!**


---

#### **Por que usar esses sufixos?**
1. **Evitar conversões desnecessárias:**  
   - `float velocidade = 8.75;` (Sem `f`, o compilador considera `double` e faz conversão para `float`, o que pode desperdiçar memória).
   - `float velocidade = 8.75f;` (Com `f`, o compilador já trata como `float`).

2. **Evitar estouro de tipos:**  
   - `unsigned long ouro = 99999999999;` (Sem `UL`, o número pode ser tratado como `int` e resultar em erro ou comportamento inesperado).
   - `unsigned long ouro = 99999999999UL;` (Com `UL`, garantimos que ele seja `unsigned long`).

3. **Melhorar precisão:**  
   - `long double pi = 3.141592653589793;` (Sem `L`, o valor pode ser tratado como `double`).
   - `long double pi = 3.141592653589793L;` (Com `L`, o compilador sabe que é `long double`, mantendo mais casas decimais).

---

Os sufixos ajudam a evitar problemas de tipo e otimizar o uso de memória. Sempre que possível, é uma boa prática usá-los para deixar o código mais claro e evitar conversões automáticas que podem levar a erros sutis! 


# Instruções de correção e Conclusão

Para realizar a correção basta [clicar aqui para redirecionamento](./main.c), podendo ver o código realizado !

Agora que o exercício foi realizado, e corrigido iremos continuar com a matéria para que possamos adicionar mais funcionalidades a este código, já que não se torna sustentavel, intuitívo ou mesmo realmente funcional, realizar operações lógicas desta maneira. Para isso [clique aqui!](../../operações_fundamentais/readme.md)   
