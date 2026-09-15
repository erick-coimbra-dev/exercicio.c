#include <stdio.h>
#include <stdbool.h>

int main() {
    // 1. TIPOS DE DADOS BÁSICOS (Tema 3)
    int main = 22;
    float media_faculdade = 8.5;
    char inicial_nome = 'D'; // D de Dev
    bool tem_frequencia = true; // Booleano para a lógica
    
    printf("===================================\n");
    printf("  PROCESSANDO DADOS E GERANDO INFORMAÇÃO  \n");
    printf("===================================\n");

    printf("Inicial do aluno: %c\n", inicial_nome);
    printf("Idade Informada: %d anos\n", main);
    printf("Media na Wyden: %.1f\n", media_faculdade);

    // 2. EXPRESSÕES, OPERADORES E TABELA VERDADE (Tema 3)
    // Aqui, usamos o operador realcional (>=) e o operador lógico AND (&&)
    // A condição só será VERDADEIRA se a média for maior/igual a 7 E a frequência for verdadeira

    if (media_faculadade >= 7.0 && tem_frequencia == true) {
        printf("Resultado: ALUNO APROVADO!\n (Verdadeiro && Verdadeiro)\n");
    } else {
        printf("Resultado: ANALISE NECESSARIA! (Condição Logica Falsa)\n");
    }

    printf("===================================\n");
}