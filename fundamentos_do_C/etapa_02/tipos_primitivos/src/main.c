#include <stdio.h>
#include <stdbool.h>

int main (){

    char name = 'A';
    unsigned short level = 99U;
    signed int life = 10591;
    unsigned int mana = 52760U;
    short strength = 32000;
    unsigned short protection = 62540;
    double magic = 545.678;
    long long gold = 919183298230928LL;
    float quickness = 10.56F;
    long double fortune = 0.98567426341935291667542L;
    
    bool is_alive = true;


    printf("=============================================\n");
    printf("  🎮  FICHA DO PERSONAGEM - RPG EDITION 🎮   \n");
    printf("=============================================\n\n");

    printf("Nome do personagem: %c\n", name);
    printf("Nível: %hu\n\n", level);

    printf("=== Estado ===\n");
    printf("Está vivo?  %s\n\n", is_alive? "Sim" : "Não");

    printf("=== Atributos ===\n");
    printf("Vida: %i ⚠️\n", life);
    printf("Mana: %u 🔮\n", mana);
    printf("Força: %hd 💪\n", strength);
    printf("Defesa: %hu 🛡️\n", protection);
    printf("Velocidade: %.2f 🚀\n", quickness);
    printf("Magia: %.3lf ✨\n", magic);
    printf("Sorte: %Lf 🍀\n\n", fortune);

    printf("=== Economia ===\n");
    printf("Ouro: %lld 🪙\n\n", gold);

    printf("=============================================\n");
    printf("📜 Ficha completa! Boa sorte na aventura! 🎲\n");
    printf(" Vejamos a seguir os tamanhos das variáveis\n");
    printf("=============================================\n\n");

    
    printf("=== Tamanho das variáveis ===\n");
    printf("Tamanho de um char: %lu byte\n", sizeof(char));
    printf("Tamanho de um short: %lu bytes\n", sizeof(short));
    printf("Tamanho de um int: %lu bytes\n", sizeof(int));
    printf("Tamanho de um unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("Tamanho de um long: %lu bytes\n", sizeof(long));
    printf("Tamanho de um long long: %lu bytes\n", sizeof(long long));
    printf("Tamanho de um float: %lu bytes\n", sizeof(float));
    printf("Tamanho de um double: %lu bytes\n", sizeof(double));
    printf("Tamanho de um long double: %lu bytes", sizeof(long double));

    // este printf está aqui para facilitar organização de saída do terminal
    printf("\n\n");
    return 0;
}
