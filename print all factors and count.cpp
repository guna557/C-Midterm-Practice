#include<stdio.h>
int main() {
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            printf("%d \n",i);
            count++;
        }
    }
    if (count==2) {
        printf("%d is a prime numerical number",n);
    }
    else {
        printf("No.of Factors: %d",count);
    }
    return 0;
}
