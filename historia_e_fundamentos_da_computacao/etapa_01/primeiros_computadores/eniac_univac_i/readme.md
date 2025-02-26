### **A Evolução da Computação: Do Colossus ao ENIAC e UNIVAC I**

A transição do **Colossus** para os primeiros computadores de propósito geral, como o **ENIAC (1945)** e o **UNIVAC I (1951)**, representou um salto revolucionário na história da computação. Enquanto o Colossus foi projetado para resolver um problema específico — a decifração de códigos nazistas —, o ENIAC e o UNIVAC I foram os primeiros computadores verdadeiramente programáveis e de uso geral, estabelecendo a base para a computação moderna.

---

## **Contexto Histórico: A Computação Pós-Guerra**

O **Colossus**, construído durante a Segunda Guerra Mundial, era um segredo de estado britânico e foi utilizado exclusivamente pelo governo para fins militares. No entanto, com o fim da guerra, os Estados Unidos emergiram como líderes no desenvolvimento da computação eletrônica, impulsionados por novas demandas científicas, militares e comerciais.

A corrida para desenvolver máquinas mais poderosas foi motivada por vários fatores:

1. **A Guerra Fria** – A necessidade de computação avançada para cálculos balísticos e criptografia tornou-se essencial para os militares.
2. **Ciência e Engenharia** – Projetos de armas nucleares, simulações de voo e estudos matemáticos exigiam um poder de processamento que apenas computadores eletrônicos poderiam fornecer.
3. **Demanda Comercial** – O crescimento da economia e a necessidade de processar grandes volumes de dados levaram empresas a explorar a automação computacional.

Foi nesse contexto que surgiram os dois primeiros grandes marcos da computação moderna: o **ENIAC (Electronic Numerical Integrator and Computer)** e o **UNIVAC I (Universal Automatic Computer I)**.

---

## **ENIAC (1945): O Primeiro Computador Digital de Propósito Geral**

### **Desenvolvimento e Criadores**

O ENIAC foi desenvolvido nos Estados Unidos por **John Presper Eckert e John Mauchly** na **Universidade da Pensilvânia**, com financiamento do **Exército dos EUA** para cálculos balísticos. Ele foi concluído em 1945 e entrou em operação em 1946.

### **Dimensões e Comparação com o Colossus**

O ENIAC era uma máquina colossal, ainda maior que o Colossus:

- **Colossus**: Aproximadamente **2,25 metros de altura e 5 metros de comprimento**, pesando **1 tonelada**.
- **ENIAC**: Cerca de **2,4 metros de altura, 30 metros de comprimento e 1 metro de largura**, pesando **30 toneladas**.

O ENIAC não apenas superava o Colossus em tamanho, mas também em poder de processamento, sendo cerca de **1.000 vezes mais rápido**.

### **Hardware e Arquitetura do ENIAC**

O **ENIAC** (Electronic Numerical Integrator and Computer) representou um salto significativo na computação eletrônica, consolidando conceitos fundamentais para arquiteturas posteriores. Sua construção utilizava os elementos mais avançados da época, embora ainda apresentasse desafios significativos em termos de escalabilidade, eficiência energética e manutenção.

#### **Válvulas Termiônicas e Relés Mecânicos**

O ENIAC foi projetado com **18.000 válvulas termiônicas**, dispositivos eletrônicos fundamentais que atuavam como **interruptores eletrônicos**, da ndo uma slato significativo em comparaçaõ das 2.500 do **Colossus**. A principal vantagem das válvulas termiônicas era a **rapidez na comutação de estados** (ligado/desligado), permitindo uma velocidade de processamento muito superior à dos relés mecânicos. No entanto, essas válvulas geravam calor excessivo e tinham uma taxa de falha relativamente alta, exigindo constante manutenção.

Além das válvulas, o ENIAC ainda utilizava **1.500 relés mecânicos**, que eram empregados em partes da máquina onde a velocidade não era um fator crítico. Os relés, por serem componentes eletromecânicos, eram mais lentos que as válvulas, mas tinham uma durabilidade maior.

#### **Unidades de Cálculo e Processamento**

O ENIAC era composto por **20 acumuladores**, unidades que podiam armazenar valores intermediários e realizar operações aritméticas básicas, como adição e subtração. Para cálculos mais complexos, como multiplicações e divisões, o ENIAC possuía unidades específicas para essas operações:

- A **unidade de multiplicação** utilizava um esquema baseado em sucessivas adições para calcular produtos. Era capaz de realizar **357 multiplicações por segundo**.
- A **unidade de divisão e raiz quadrada** usava um método de sucessivas subtrações e aproximações para calcular resultados.

Essas operações eram organizadas através de uma rede de **conexões paralelas**, permitindo que diferentes unidades executassem tarefas simultaneamente. Esse modelo rudimentar de **processamento paralelo** já antecipava conceitos utilizados em supercomputadores modernos.

#### **Falta de Memória Armazenada e Impossibilidade de Autoprogramação**

Diferente de arquiteturas posteriores, o ENIAC não possuía **memória armazenada no sentido moderno**. Suas instruções e dados não eram mantidos em um local de acesso rápido, como em máquinas de arquitetura de von Neumann. Em vez disso, cada operação precisava ser configurada manualmente por meio de um **conjunto de switches e cabos físicos** que determinavam o fluxo da computação.

Isso significava que o ENIAC não conseguia armazenar programas internamente para serem executados posteriormente. Sempre que uma nova tarefa precisava ser realizada, os operadores tinham que **reconfigurar fisicamente a máquina**, tornando o processo extremamente lento e pouco flexível.

---

### **Programação e Uso do ENIAC**

A programação do ENIAC era um dos aspectos mais desafiadores da máquina. Não existia uma linguagem de programação propriamente dita — os programas eram implementados através de **circuitos físicos**, onde os operadores manualmente interligavam componentes internos para definir a sequência de operações.

#### **Método de Programação: Circuitos e Conexões Físicas**

O ENIAC operava com um sistema baseado em **conexões de cabos e interruptores rotativos**, onde cada cálculo ou operação era um reflexo direto das conexões estabelecidas entre os diferentes módulos da máquina. Isso exigia um planejamento detalhado antes de qualquer execução, pois **cada instrução dependia da configuração elétrica estabelecida pelos cabos físicos**.

- Para somar dois números, era necessário conectar o **acumulador correspondente** à unidade de entrada de dados.
- Para multiplicações, os operadores tinham que conectar o número a um **multiplicador dedicado**, que então enviava o resultado para um acumulador específico.
- As instruções eram sincronizadas por **pulsos de clock**, o que garantia a execução das operações em sequência ordenada.

A complexidade da programação do ENIAC fez com que os primeiros **programadores** fossem, na maioria das vezes, **matemáticos e engenheiros altamente treinados**, como **Jean Jennings Bartik e Grace Hopper**, que desenvolveram algumas das primeiras técnicas de programação da história.

#### **Tempo para Modificação de Programas**

Uma das maiores desvantagens do ENIAC era a extrema **rigidez na mudança de programas**. Como cada conjunto de operações exigia uma configuração física, modificar um cálculo envolvia:

1. **Desconectar os cabos da configuração anterior.**
2. **Rearranjar novas conexões conforme o problema a ser resolvido.**
3. **Testar manualmente a nova configuração.**

Esse processo poderia levar **semanas** antes que o novo programa estivesse pronto para ser executado. Isso tornava o ENIAC inviável para tarefas que exigissem mudanças frequentes, diferentemente de arquiteturas posteriores que implementariam **memória armazenada** e **linguagens de programação estruturadas**.

#### **Aplicações do ENIAC**

Apesar de suas limitações, o ENIAC revolucionou a computação ao demonstrar a viabilidade dos cálculos eletrônicos em alta velocidade. Entre as aplicações para as quais foi utilizado, destacam-se:

- **Cálculos balísticos para o Exército dos EUA** – O ENIAC foi projetado originalmente para calcular tabelas de tiro para artilharia, reduzindo o tempo de cálculos manuais de semanas para poucos segundos.
- **Simulações nucleares** – O ENIAC foi usado para cálculos envolvidos no projeto da bomba de hidrogênio, ajudando no desenvolvimento de armamentos nucleares.
- **Meteorologia e predições climáticas** – Suas capacidades matemáticas foram utilizadas para testar modelos atmosféricos iniciais.
- **Análises estatísticas e econômicas** – Empresas começaram a explorar seu potencial para cálculos financeiros e modelagem econômica.

O impacto do ENIAC foi tão grande que levou diretamente ao desenvolvimento de arquiteturas mais eficientes e flexíveis, como o **EDVAC (Electronic Discrete Variable Automatic Computer)**, que introduziu o conceito de **programa armazenado** e influenciou todas as gerações futuras de computadores.

---

### **O Caminho para Computadores Mais Flexíveis**

O ENIAC demonstrou o imenso potencial da computação eletrônica, mas sua **falta de memória armazenada** e o **processo de programação manual** limitavam sua flexibilidade. Essas dificuldades impulsionaram a busca por arquiteturas mais eficientes, culminando no desenvolvimento do **UNIVAC I**, o primeiro computador comercial com armazenamento interno de programas.

---

## **UNIVAC I (1951): O Primeiro Computador Comercial**

### **Desenvolvimento e Criadores**

Após o sucesso do ENIAC, Eckert e Mauchly fundaram sua própria empresa, a **Eckert-Mauchly Computer Corporation**, onde desenvolveram o **UNIVAC I**, lançado em 1951. Diferente do ENIAC, que era um projeto militar, o UNIVAC I foi criado para aplicações **comerciais e governamentais**.

### **Dimensões e Comparação com o ENIAC**

O UNIVAC I foi significativamente mais compacto e eficiente que o ENIAC:

- **ENIAC**: 30 metros de comprimento, 30 toneladas, 18.000 válvulas termiônicas.
- **UNIVAC I**: **5 metros de comprimento, 7 toneladas, 5.200 válvulas termiônicas**.

Isso representou um grande avanço na miniaturização da computação.

### **Hardware e Arquitetura do UNIVAC I**

O **UNIVAC I** (Universal Automatic Computer I) foi um marco na computação eletrônica ao introduzir avanços significativos na arquitetura de hardware e na forma como programas eram armazenados e executados. Ele representou uma transição crucial da computação experimental e militar para um uso mais amplo no setor comercial e governamental.

#### **Armazenamento de Dados: Fitas Magnéticas e Memória Interna**

Um dos aspectos mais inovadores do UNIVAC I foi a introdução das **fitas magnéticas** como meio principal de armazenamento de dados. Ao contrário das máquinas anteriores que utilizavam **cartões perfurados** como principal meio de entrada e armazenamento temporário, as fitas magnéticas permitiam:

- **Acesso sequencial mais eficiente** – Embora não fossem aleatórias como os discos rígidos modernos, as fitas magnéticas permitiam acesso a grandes volumes de dados sem a necessidade de reprocessamento manual.
- **Capacidade de armazenamento significativamente maior** – Cada fita do UNIVAC I podia armazenar cerca de **1 milhão de caracteres**, uma quantidade muito superior às perfurações em cartões utilizados pelo ENIAC e outras máquinas da época.
- **Maior confiabilidade** – As fitas tinham uma durabilidade superior aos cartões perfurados, além de permitirem reescrita e reutilização.

Além disso, o UNIVAC I possuía uma arquitetura de **memória armazenada**, um conceito fundamental que havia sido teorizado pelo matemático **John von Neumann**. Esse modelo permitia que tanto os dados quanto as instruções do programa fossem armazenados na mesma memória, permitindo a execução automática de programas sem a necessidade de alterações físicas na fiação do hardware. Isso contrastava fortemente com o **ENIAC**, que precisava de mudanças manuais para executar novos cálculos.

A memória interna do UNIVAC I era baseada em **linhas de atraso de mercúrio**, uma tecnologia de armazenamento transitório que utilizava ondas sonoras propagadas através de um meio líquido (mercúrio) para armazenar bits de informação. Essa abordagem permitia que a máquina armazenasse até **1.000 palavras de 12 bits** de forma temporária, um avanço significativo para a época, embora ainda limitada quando comparada às memórias magnéticas que surgiriam posteriormente.

#### **Capacidade de Processamento e Eficiência em Cálculos**

O UNIVAC I possuía uma unidade aritmética altamente otimizada para cálculos gerais, tornando-o **muito mais eficiente que o ENIAC** para diversas aplicações comerciais. Suas capacidades de processamento incluíam:

- **455 multiplicações por segundo**, um número superior às 357 multiplicações por segundo do ENIAC.
- **8333 adições ou subtrações por segundo**, o que tornava cálculos financeiros e estatísticos muito mais rápidos.
- **Processamento de instruções baseado em palavras de 12 bits**, permitindo cálculos de precisão razoável para aplicações comerciais e científicas da época.

Outro avanço importante foi a implementação de **operações lógicas** aprimoradas, o que possibilitou que o UNIVAC I realizasse uma gama maior de cálculos e manipulações de dados com maior flexibilidade.

---

### **Programação e Usabilidade do UNIVAC I**

Ao contrário do **ENIAC**, que exigia a **reconfiguração manual de cabos e switches** para cada nova execução de programa, o UNIVAC I já adotava um modelo mais próximo do que consideramos programação moderna.

#### **Código de Máquina e Linguagens de Programação Iniciais**

O UNIVAC I utilizava um sistema baseado em **código de máquina**, permitindo que as instruções fossem armazenadas diretamente na memória e processadas sequencialmente. Isso eliminava a necessidade de intervenção manual constante para modificar a execução dos cálculos.

Embora o UNIVAC I ainda não possuísse uma linguagem de programação de alto nível, sua estrutura já permitia a criação de rotinas que podiam ser reutilizadas, reduzindo a complexidade da programação. Mais tarde, linguagens como **FLOW-MATIC**, criada por **Grace Hopper**, seriam inspiradas nesse modelo, tornando a programação ainda mais acessível para empresas e governos.

#### **Facilidade de Uso e Aplicações Comerciais**

A arquitetura do UNIVAC I, aliada à sua programação mais flexível, tornou possível a adoção do computador para aplicações não apenas científicas e militares, mas também **comerciais e administrativas**. Algumas das principais áreas onde foi utilizado incluem:

- **Análises estatísticas do governo dos EUA**, incluindo o **Censo de 1950**, no qual o UNIVAC I foi utilizado para processar dados de população com muito mais rapidez do que os métodos tradicionais.
- **Previsões eleitorais** – O UNIVAC I ganhou notoriedade ao prever corretamente o resultado da eleição presidencial de 1952 nos EUA, demonstrando o potencial da computação para análise de grandes volumes de dados.
- **Gerenciamento de estoques e finanças em grandes corporações**, antecipando o uso moderno de computadores em logística e planejamento estratégico.

A facilidade de programação do UNIVAC I, combinada com seu poder de processamento, pavimentou o caminho para a adoção em larga escala dos computadores em setores administrativos e empresariais, dando início à **computação comercial moderna**.

---

### **Comparação entre ENIAC e UNIVAC I**

| Característica                  | ENIAC                                                             | UNIVAC I                                          |
| ------------------------------- | ----------------------------------------------------------------- | ------------------------------------------------- |
| **Memória**                     | Não possuía memória armazenada                                    | Utilizava memória baseada em mercúrio             |
| **Armazenamento**               | Não tinha armazenamento persistente                               | Fitas magnéticas de alta capacidade               |
| **Forma de Programação**        | Manual, por cabos e interruptores                                 | Código de máquina armazenado na memória           |
| **Velocidade de Multiplicação** | 357 operações por segundo                                         | 455 operações por segundo                         |
| **Aplicação**                   | Principalmente militar e acadêmica                                | Comercial, governamental e estatística            |
| **Flexibilidade**               | Extremamente rígido, precisava ser reconfigurado para cada tarefa | Programável via software, com maior versatilidade |

O UNIVAC I representou um avanço gigantesco em termos de **programação, armazenamento e aplicação comercial**, solidificando a computação como uma ferramenta indispensável para governos e empresas.

---

### **O Caminho para a Computação Corporativa e Comercial**

A transição do **ENIAC para o UNIVAC I** simboliza a evolução da computação de uma ferramenta militar rígida para um **instrumento comercial e administrativo poderoso**. O conceito de **memória armazenada**, somado ao uso de **fitas magnéticas e processamento automatizado**, abriu as portas para sistemas computacionais cada vez mais sofisticados.

---

## **Comparação entre Colossus, ENIAC e UNIVAC I**

| Característica  | **Colossus (1944)**         | **ENIAC (1945)**    | **UNIVAC I (1951)**                   |
| --------------- | --------------------------- | ------------------- | ------------------------------------- |
| **Finalidade**  | Criptografia                | Cálculo balístico   | Uso comercial e governamental         |
| **Criadores**   | Tommy Flowers               | Eckert & Mauchly    | Eckert & Mauchly                      |
| **Dimensões**   | 2,25m x 5m (1 ton)          | 30m x 2,4m (30 ton) | 5m x 2m (7 ton)                       |
| **Válvulas**    | 2.500                       | 18.000              | 5.200                                 |
| **Velocidade**  | Processava bits sequenciais | 5.000 operações/s   | 455 multiplicações/s                  |
| **Memória**     | Fita perfurada              | Nenhuma             | Memória armazenada com fita magnética |
| **Programação** | Fixa para criptografia      | Manual (cabos)      | Código de máquina                     |
| **Impacto**     | Guerra (decifração)         | Ciência militar     | Expansão comercial                    |

---

## **Impacto Histórico e Antropológico**

A transição do Colossus para o ENIAC e UNIVAC I trouxe profundas mudanças:

1. **Computação Comercial:** O UNIVAC I marcou o início da adoção de computadores por empresas e governos, permitindo a automação de processos burocráticos.
2. **Evolução Científica:** O ENIAC ajudou em pesquisas de armas nucleares, meteorologia e ciências matemáticas.
3. **Mudança Cultural:** Computadores começaram a ser vistos como ferramentas essenciais para a sociedade moderna, abrindo caminho para a revolução digital.
4. **Influência na Computação Moderna:** O conceito de memória armazenada do UNIVAC I influenciou os padrões seguidos por computadores posteriores.

---

## **Conclusão: O Caminho para a Computação Moderna**

O sucesso do UNIVAC I despertou o interesse de grandes corporações, como a **IBM**, que até então era especializada em máquinas de tabulação. Em resposta à crescente demanda por computação, a **IBM lançou o IBM 701 (1952)**, seu primeiro computador científico, e posteriormente o **IBM System/360 (1964)**, que se tornaria um marco na padronização da indústria de computadores.

A próxima grande revolução da computação não estaria apenas na evolução do hardware, mas na criação de sistemas compatíveis e acessíveis. Vamos explorar como a **IBM redefiniu a computação comercial e científica**, estabelecendo a base para os computadores modernos. [Para continuar clique aqui!](../ibm_701_e_System-360/readme.md)
