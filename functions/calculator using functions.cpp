#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int main() {
    int a,b,n;
    printf("Enter Two Numbers\n");
    scanf("%d %d",&a,&b);
    printf("sum=%d\n",sum(a,b));
    printf("difference=%d\n",sub(a,b));
    printf("product=%d\n",mul(a,b));
}
int sum(int a,int b) {
    return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;
}