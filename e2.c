#include<stdio.h>
#include<string.h>
//The following program reads a series of words from the terminal using scanf function
int main(){

    char string[100];
    //Using scanf function
    printf("Enter a string press enter key to terminate reading:\n");
    
    scanf("%[^\n]", string); //scanset

    printf("%s", string);
    

    //using gets (unsafe)
    printf("Enter a string, press enter to terminate input");
    gets(string);
    printf("%s", string);

    //Using fgets (safe)
    printf("Enter a string, press enter to terminate input: \n");
    fgets(string, sizeof(string), stdin);
    //But fgets will include \n as one of the inputs, therefore:
    string[strcspn(string ,"\n")] = '\0';
    //The above used function will replace the \n with \0 null terminator
    printf("%s", string);
    

    return 0;
}