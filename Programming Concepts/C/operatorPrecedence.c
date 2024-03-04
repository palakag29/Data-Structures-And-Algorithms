#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

char nonTerminals[MAX];
char terminals[MAX];
char productions[MAX][MAX];
int numProductions;

int isEpsilon(char symbol){
    return symbol =='@';
}

int isNonTerminal (char symbol) {
    return isupper(symbol);
}

int hasAdjacentNonTerminals(char production[])
{
    for (int i = 0; i < strlen(production) - 1; i++)
    {
        if (isNonTerminal(production[i]) && isNonTerminal(production[i + 1]))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int i, numNonTerminals, numTerminals;

    printf("Enter the number of non-terminals: ");
    scanf("%d", &numNonTerminals);
    printf("Enter the non-terminals: ");
    for (i = 0; i < numNonTerminals; i++)
    {
        scanf(" %c", &nonTerminals[i]);
    }

    printf("Enter the number of terminals: ");
    scanf("%d", &numTerminals);
    printf("Enter the terminals: ");
    for (i = 0; i < numTerminals; i++)
    {
        scanf(" %c", &terminals[i]);
    }

    printf("Enter the number of productions: ");
    scanf("%d", &numProductions); // Initialize numProductions

    printf("Enter the productions (separated by space): ");
    for (i = 0; i < numProductions; i++)
    {
        scanf("%s", productions[i]);
    }

    // Check for ε on RHS
    int hasEpsilon = 0;
    for (i = 0; i < numProductions; i++)
    {
        if (isEpsilon(productions[i][strlen(productions[i]) - 1]))
        {
            hasEpsilon = 1;
            break;
        }
    }

    // Check for adjacent non-terminals on RHS
    int hasAdjacent = 0;
    for (i = 0; i < numProductions; i++)
    {
        if (hasAdjacentNonTerminals(productions[i]))
        {
            hasAdjacent = 1;
            break;
        }
    }

    // Output the result
    if (hasEpsilon || hasAdjacent)
    {
        printf("The grammar is not an Operator Precedence Grammar.\n");
    }
    else
    {
        printf("The grammar is an Operator Precedence Grammar.\n");
    }

    return 0;
}