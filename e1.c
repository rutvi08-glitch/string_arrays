#include<stdio.h>
//The following program reads a series of words from the terminal using scanf function
int main(){

    char word_a[100], word_b[100], word_c[100];
    int i;
    printf("Enter 3 words, press enter key to terminate reading of a word:\n");
    
    scanf("%s", word_a);
    scanf("%s",word_b);
    scanf("%s",word_c);

    printf("\n\n");
    printf("%s\n", word_a);
    printf("%s\n", word_b);
    printf("%s\n", word_c);

    return 0;
}