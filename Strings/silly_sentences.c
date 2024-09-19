#include <stdio.h>
#include <string.h>

int main(void){
char name[20], place[20], verb[20], noun[20], sentence[500];
printf("Type a name: \n");
scanf(name, sizeof(name), stdin);
scanf("%s", name);
printf("Type a place: \n");
scanf(place, sizeof(place), stdin);
scanf("%s", place);
printf("Type a verb: \n");
scanf(verb, sizeof(verb), stdin);
scanf("%s", verb);
printf("Type a noun: \n");
scanf(noun, sizeof(noun), stdin);
scanf("%s", noun);
strcat(sentence, name);
strcat(sentence, " went to the ");
strcat(sentence, place);
strcat(sentence, " where they ");
strcat(sentence, verb);
strcat(sentence, " and bought a ");
strcat(sentence, noun);
strcat(sentence, ".");
printf("%s", sentence);
//printf("%s went to the %s where he %s, and bought a %s.", name, place, verb, noun);

return 0;
}