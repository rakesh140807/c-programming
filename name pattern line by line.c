#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int i, j;

    printf("Enter your name: ");
    scanf("%s", name);

    for (i = 0; i < strlen(name); i++) {
        for (j = 0; j <= i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    return 0;
}
