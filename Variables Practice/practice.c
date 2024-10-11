#include <stdio.h>

int main(void) {
    char name[] = "Sierra Steck";
    char num[] = 4;
    char numTwo[] = 214;
    char cereal[] = "Captain Crunch";
    char color[] = "soft blue";
    char colorTwo[] = "baby blue";
    char colorThree[] = "blue";
    char school[] = "Utah County Academy of Sciences";
    char year[] = 2024;
    char age[] = 15;
    char subject[] = "Health";
    printf("Hello! My name is", name,"!\n");
    printf("My favorite numbers between 1 and 10 and 100 and 1,000 are:", num, "and", numTwo,".\n");
    printf("For breakfast, I had", cereal,".\n");
    printf("My favorite color is", color, "or", colorTwo, "or just any kind of", colorThree, "really, I go to school at", school,", and it is currently", year,".\n");
    printf("My eyes are", colorThree, ", I am", age,", and my favorite subject in school right now might very well be", subject,".\n");
    return 0;
}