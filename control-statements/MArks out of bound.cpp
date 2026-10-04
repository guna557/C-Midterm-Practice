#include<stdio.h>
int main() {
    int n;
    printf("Enter marks:\n");
    scanf("%d",&n);
    while (n<0||n>100) {
        printf("NOT VALID MARKS !!!\n");
        printf("Enter marks again:\n");
        scanf("%d",&n);
    }
        if (n>=0 && n<=40) {
            printf("FAIL:F GRADE !!!");
        }
        else if (n>=40 && n<=60) {
            printf("C GRADE!!!");
        }
        else if (n>=60 && n<=80) {
            printf("B GRADE!!!");
        }
        else if (n>=80 && n<=100) {
            printf("A GRADE!!!");
        }

    return 0;
}
