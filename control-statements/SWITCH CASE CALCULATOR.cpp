#include <stdio.h>

int main() {
    long long a, b;
    int n;

    printf("1.Multiplication\n");
    printf("2.Addition\n");
    printf("3.Subtraction\n");
    printf("4.Division\n");
    printf("5.Modulus\n");
    printf("Enter an option\n");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Enter two numbers\n");
            scanf("%lld %lld", &a, &b);
            printf("%lld\n", a * b);
            break;
        case 2:
            printf("Enter two numbers\n");
            scanf("%lld %lld", &a, &b);
            printf("%lld\n", a + b);
            break;
        case 3:
            printf("Enter two numbers\n");
            scanf("%lld %lld", &a, &b);
            printf("%lld\n", a - b);
            break;
        case 4:
            printf("Enter two numbers\n");
            scanf("%lld %lld", &a, &b);
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%f\n", (double)a / b);
            break;
        case 5:
            printf("Enter two numbers\n");
            scanf("%lld %lld", &a, &b);
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("%lld\n", a % b);
            break;
        default:
            printf("Enter a valid option\n");
    }
    return 0;
}