#include <stdio.h>
#include <string.h>
#define MAX 100

void eliminateLeftRecursion(char nonTerminal, char alpha[MAX], char beta[MAX]) {
    char newNonTerminal = nonTerminal + 1; 
    printf("%c -> %s%c\'\n", nonTerminal, beta, newNonTerminal);
    printf("%c\' -> %s%c\' | \n", newNonTerminal, alpha, newNonTerminal);
}

int main() {
    char nonTerminal;
    char alpha[MAX], beta[MAX];

    printf("Enter the production rule in the form A -> Aα | β:\n");
    printf("Enter the non-terminal A: ");
    scanf(" %c", &nonTerminal);
    printf("Enter alpha (Aα part): \n");
    scanf("%s", alpha);
    printf("Enter beta (β part): ");
    scanf("%s", beta);

    eliminateLeftRecursion(nonTerminal, alpha, beta);

    return 0;
}
