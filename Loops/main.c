#include <stdio.h>
char siblings[4][10] = {"Sierra", "Cosette", "Kael", "Marek"};
int i;
int main (){
    for(i=1; i <= 10; i+=6){
        printf("%d\n", i);
    }
    return 0;
}