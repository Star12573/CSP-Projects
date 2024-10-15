#include <stdio.h>

int main(void) {
    char names[50];
    printf("Please tell me your names: \n");
    fgets(names,sizeof(names), stdin );
    printf("Hello %s", names,"!");
    return 0;
}