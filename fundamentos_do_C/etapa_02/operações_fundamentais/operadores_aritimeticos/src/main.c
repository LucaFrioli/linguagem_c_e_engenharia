#include <stdio.h>

// Apesar de ter métodos mais performáticos e organizados de fazer este programa, mantive deste modo para que o foco fossem os calculos, e a contrução de narrativa.

int main(void){
    unsigned int level = 1;
    signed int mana = 100;
    unsigned int knowledge = 50;
    unsigned int mana_crystals = 15;
    unsigned int spells = 0;
    
    printf("\n=========================================================\n");
    printf("\n Conheça nosso herói, ele é um iniciante da\n escola de magia no reino de Nexus!");
    printf("\n\n Ele apesar de ser pequeno ainda assim possuía\n estatísticas intrigantes já que era assim:");
    printf("\n\n Nível: %i\n Mana: %i\n Conhecimento: %i\n Cristais de Mana: %i\n Feitiços conhecidos: %i\n\n",level, mana, knowledge, mana_crystals, spells);
    printf(" Apesar de ter nível baixo, por algum motivo ele\n tinha muito conhecimento. Os archimagos da escola\n de magia em Nexus. Principalmente do esquadrão C\n pediram para ele treinar!\n");
    printf("\n=========================================================\n");

    // Ciclo de estudos
    unsigned int spell_tomes = 5;
    unsigned int knowledge_bonus_for_tome = 20;
    unsigned int mana_crystal_cost_for_learnig = 5;

    // Primeiro ciclo de estudos
    knowledge += knowledge_bonus_for_tome;
    mana_crystals -= mana_crystal_cost_for_learnig;
    --spell_tomes;
    ++spells;
    
    // Segundo ciclo de estudos 
    knowledge += knowledge_bonus_for_tome;
    mana_crystals -= mana_crystal_cost_for_learnig;
    --spell_tomes;
    ++spells;

    printf("\n\n=========================================================\n");
    printf("\n A primeira missão de nosso herói foi aumentar\n seu conhecimento, que apesar de ser alto para\n alguém com sua idade, ainda não era\n o bastante para o mundo de Nexus!");
    printf("\n\n Após a primeira rodada de estudos suas\n estatísticas ficaram as seguintes:");
    printf("\n\n Nível: %i\n Mana: %i\n Conhecimento: %i\n Cristais de Mana: %i\n Feitiços conhecidos: %i\n\n",level, mana, knowledge, mana_crystals, spells);
    printf(" Agora que nosso perssonagem já conhece alguns\n feitiços está na hora de coloca-los a prova. Gastando um pouco de mana.");
    printf("\n=========================================================\n");
    

    //Ciclo de subir de nível
    unsigned int spell_cost = 10;
    // Lançar 5 feitiços observe que esta é uma solução plausível neste caso, mas nada prática em um programa onde o usuário poderá decidir gastar mais mana que tem, este modo não bloqueia este caso, mas esta aqui descrito apenas para facilidade de escrita desta etapa. Veremos uma maneira mais segura de realizar isto mais adiante.
    mana -= (spell_cost * 5);
    // Feitiço bônus por subida de nível
    ++spells;
    ++level;
    printf("\n=========================================================\n");
    printf("\n Agora que temos um pouco de conhecimento está\n na hora de treinar um pouco as magias, gastar um pouco de mana!");
    printf("\n\n Durante o treinamento chegamos ao momento de estafa\n Perceba que cansamos muito e precisamos guardar energia caso haja um ataque,\n mas isso aparentemente liberou uma nova habilidade mágica.\n Veja susas estatísticas:");
    printf("\n\n Nível: %i\n Mana: %i\n Conhecimento: %i\n Cristais de Mana: %i\n Feitiços conhecidos: %i\n\n",level, mana, knowledge, mana_crystals, spells);
    printf("\n\n Após um descanso curto que recuperou metade de sua mana total,\n você resolveu testar a nova habilidade e reparou que\n ela recuperou metade dos seus cristais de mana.");
    // Descanso longo +  Uso de magia de recuperação de cristais
    mana*=2; // perceba que está não é a maneira mais estruturada e melhor de fazer, conforme esta etapa avança iremos juntar a ficha com esta rotina e aprimorar 
    mana_crystals+= (int)(mana_crystals/2);
    printf("\n\n Veja Como ficaram suas estatísticas após o descanso longo!");
    printf("\n\n Nível: %i\n Mana: %i\n Conhecimento: %i\n Cristais de Mana: %i\n Feitiços conhecidos: %i\n",level, mana, knowledge, mana_crystals, spells);
    printf("\n=========================================================\n");
    
    printf("\nEnd of program!\n");
    return 0;
}