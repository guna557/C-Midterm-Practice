#include<stdio.h>
#include<math.h>
int main() {
    int n,i=1,c=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while (i<=sqrt(n)) {
        if (n%i == 0) {
            if (i==n/i) {
                c++;;
            }
            else {
                c=c+2;
            }
        }
        i++;
    }
    printf("%d No.of factors are %d\n",n,c);
    if (c==2) {
        printf("%d is prime number",n);
    }
    else {
        printf("%d is not a prime number",n);
    }
}