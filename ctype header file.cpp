#include <stdio.h>
#include<ctype.h>//tolower,toupper,isalpha,isdigit
int main() {
    char c,a,b;
    printf("Enter a character:\n");
    scanf("%c",&c);
    if (isalpha(c)) {
        printf("%c is a character\n",c);
    }
    if (isdigit(c)) {
        printf("%c is interger\n",c);
    }
    {
        if (isspace(c)) {
            printf("Entered character is a space\n");
        }
        else {
            a=tolower(c);
            printf("%c in lower case\n",a);
            b=toupper(c);
            printf("%c in upper case\n",b);
        }
    }
    return 0;
}
