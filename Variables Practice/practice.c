#include <stdio.h>

int main(void) {
    int num, numTwo, cereal, color, colorTwo, colorThree, school, year, age, subject;
    char name[] = "Sierra Steck";
    int num = 4;
    int numTwo = 214;
    int cereal = "Captain Crunch";
    int color = "soft blue";
    int colorTwo = "baby blue";
    int colorThree = "blue";
    int school = "UCAS; Utah County Academy of Sciences";
    int year = 2024;
    int age = 15;
    int subject = "Health";
    printf("Hello! My name is", name,"!\n");
    printf("My favorite numbers between 1 and 10 and 100 and 1,000 are:", num, "and", numTwo,".\n");
    printf("For breakfast, I had", cereal,".\n");
    printf("My favorite color is", color, "or", colorTwo, "or just any kind of", colorThree, "really, I go to school at", school,", and it is currently", year,".\n");
    printf("My eyes are", colorThree, ", I am", age,", and my favorite subject in school right now might very well be", subject,".\n");
    

    return 0;
}