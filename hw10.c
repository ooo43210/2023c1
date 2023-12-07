#include <stdio.h>


struct City {
    char name[50];
    char num1[50];
    int num2;
};

int main() {
    
    struct City cities[3];

    
    for (int i = 0; i < 3; ++i) {
        printf("Name> ");
        scanf("%s", cities[i].name);

        printf("Country> ");
        scanf("%s", cities[i].num1);

        printf("Population> ");
        scanf("%d", &cities[i].num2);
    }

    
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d. %s in %s with a population of %d people\n", i + 1, cities[i].name, cities[i].num1, cities[i].num2);
    }

    return 0;
}

