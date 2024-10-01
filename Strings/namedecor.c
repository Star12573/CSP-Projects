#include <stdio.h>

int main(void) {
    char name[30];
    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello <<<%s>>> \n", name);

    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello (((%s))) \n", name);

    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello ---%s--- \n", name);

    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello :):)%s:):) \n", name);

    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello ###%s### \n", name);

    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello +++%s+++ \n", name);

    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello ~~~%s~~~ \n", name);
    
    printf("Please tell me your name: \n");
    fgets(name,sizeof(name), stdin );
    printf("Hello ===%s=== \n", name);
    return 0;
}