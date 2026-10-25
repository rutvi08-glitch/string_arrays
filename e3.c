#include<stdio.h>
//This program copies one string into another and counts the number of characters copied
int main(){
    int i, counter = 0;
    char string_1[51], string_2[51];

    printf("Enter a string: \n");
    scanf("%[^\n]", string_1);

    for(i=0; string_1[i] != '\0'; i++){
        string_2[i] = string_1[i];

    }
    string_2[i] = '\0';

    printf("%s\n", string_2);
    printf("%d", i);
    return 0;
}
