#include <stdio.h>

int main (){
    char age[30];
    printf("Please tell me how old you are: \n");
    scanf("%s", &age);
if (age >= 18){
    printf("You're old enough to vote!\n");
}else if (age >= 16){
    printf("You're old enough to drive!\n");
}else if (age >=15){
    printf("You're old enought to get a learner's permit!\n");
    }else if (age >=5){
        printf("You're old enough to go to school!\n");
}else{
    printf("You're too young to go to school. :'(\n");
}

return 0;
}