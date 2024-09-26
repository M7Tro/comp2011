#include <stdio.h>

int main() {
    char name[] = "Caleb";
    printf("\nHi my name is Slim %s \n", name);

}

/*
    C stings are actually character arrays. 

    When you define stuff like this: char name [] = "Something" it automatically adds a null character \n at 
    the end. 

    If you use strlen to count the number of characters, it will stop at the \0 character. 

    For "hkust", the representation is 'h', 'k', 'u', 's', 't', '\0'. The length would be 5. 

    You can use 0 instead of \0 because null character is literally 0 in ASCII code. 
*/ 