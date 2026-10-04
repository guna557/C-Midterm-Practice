#include<stdio.h>
int main() {
    int a,b,i,lcm,max;
    printf("Enter Two Numbers\n");
    scanf("%d %d",&a,&b);
    i=a>b?a:b;
    max=a*b;
    while (i<=max) {
        if (i%a==0 && i%b==0) {
            lcm=i;
            break;
        }
        i++;
    }
    printf("lcm=%d\n",lcm);
}
