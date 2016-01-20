#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *a = malloc(sizeof(char) *128);

    printf("value= ");

    scanf("%s", a);

    if(!strcmp(a, "love")) {
        printf("I love Aycan");
    } else {
        printf("%s", a);
    }

    free(a);

    return 0;
}
