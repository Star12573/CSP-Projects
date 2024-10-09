#include <stdio.h>
#include <string.h>
int main(void) {
    char name[30], sentence[30];
    printf("Please tell me your name: \n");
    scanf("%s", &name);
    strcat(sentence, name);
    printf("Hello <<<%s>>>\n", name, sentence);
    printf("Hello (((%s)))\n",name, sentence);
    printf("Hello ---%s---\n", name, sentence);
    printf("Hello :):)%s:):)\n", name, sentence);
    printf("Hello ###%s###\n", name, sentence);
    printf("Hello +++%s+++\n", name, sentence);
    printf("Hello ~~~%s~~~\n", name, sentence);
    printf("Hello ===%s===\n", name, sentence);
    return 0;
}