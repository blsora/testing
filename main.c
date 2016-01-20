#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a = malloc(sizeof(char) *128);
    printf("value= ");
    scanf("%s", a);
    while(strcmp(a, "love")) {

        printf("%s", a);
        printf("\n new value= ");
        scanf("%s", a);
    }
    printf("I love Aycan");
    free(a);
    return 0;
}
