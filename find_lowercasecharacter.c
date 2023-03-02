#include <stdio.h> 

int main() {
    char character;
    printf("Enter character from an alphabet \n");
    scanf("%c", &character);
    //check wheather the character is lowercase or not
    if(character >= 'a' && character <= 'z'){
        printf("The given character is lowercase \n");
    }
    else if(character >= 'A' && character <= 'Z'){
        printf("The given character is uppercase \n"); 
    }
    else{
        printf("The given character is not from alphabet \n");
    }
    return 0;
}