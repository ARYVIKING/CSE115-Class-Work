/*A program to check if an entered character is a vowel or a consonant*/

#include <stdio.h>

//Function Declaration
char LetterDetecter(char Letter);
int main (void)
{

    //Declaring Variable
    char  letter, character;

    //Taking Input
    printf("Enter your Alphabet: ");
    scanf("%c", &letter);

    //Function Call
    character =  LetterDetecter(letter);


    return 0 ;
}


//Function Definition
char LetterDetecter(char letter)
{

    if (letter == 'a' || letter == 'i' || letter == 'o'|| letter == 'e'|| letter == 'u'
        ||letter == 'A' || letter == 'I' || letter == 'O'|| letter == 'E'|| letter == 'U')
    {
        printf("\nYour entered a Vowel\n");
    }
    else
    {
        printf("\nYou Entered a Consonant\n");

    }
    return letter ;

}
