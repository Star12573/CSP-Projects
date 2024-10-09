#include <stdio.h>
char siblings[4][10] = {"Sierra", "Cosette", "Kael", "Marek"};
int i;
int main (){
    while (i < 4){
        printf("%s Steck\n", siblings[i]);
        i+=1;
    }
    return 0;
}