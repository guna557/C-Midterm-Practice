#include<stdio.h>
int main() {
    int n,c=0,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (i<=n/2) {
        if (n%i==0) {
            c++;
        }
        i++;
    }
    c++;
    if (c==2) {
        printf("%d is an prime number",n);
    }
    else {
        printf("%d is not an prime number",n);
    }
}
