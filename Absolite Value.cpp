#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a<0) {
        printf("Absolite value is: %d\n",a*-1);
    }
    else {
        printf("Absolite value is: %d\n",a);
    }
    return 0;
}
