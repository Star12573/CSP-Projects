#include <stdio.h>
#include <string.h>
int main(void) {
    char name[30], sentence[30];
    printf("Please tell me your name: \n");
    scanf("%s", &name);
    strcat(sentence, name);
    printf("Hello <<<%s>>>\n", sentence);
    printf("Hello (((%s)))\n", sentence);
    printf("Hello ---%s---\n", sentence);
    printf("Hello :):)%s:):)\n", sentence, name);
    printf("Hello ###%s###\n", sentence, name);
    printf("Hello +++%s+++\n", sentence, name);
    printf("Hello ~~~%s~~~\n", sentence, name);
    printf("Hello ===%s===\n", sentence, name);
    return 0;
}