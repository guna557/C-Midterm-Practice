#include<stdio.h>
#include<math.h>

int main() {
    int a,b,c;
    float real,img,r1,r2,d;
    printf("Enter a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    d = b*b - 4*a*c;
    if (d > 0) {
        printf("Roots are Real\n");
        r1 = (-b + sqrt(d)) / (2.0*a);
        r2 = (-b - sqrt(d)) / (2.0*a);
        printf("Roots are %.2f %.2f", r1, r2);
    }
    else if (d == 0) {
        printf("Roots are real and equal\n");
        r2 = (-b) / (2.0*a);
        r1 = r2;
        printf("Root is %.2f", r2);
    }
    else {
        printf("Roots are imaginary\n");
        real = (-b) / (2.0*a);
        img = sqrt(-d) / (2.0*a);
        printf("Root 1 = %.2f + i%.2f\n", real, img);
        printf("Root 2 = %.2f - i%.2f", real, img);
    }
    return 0;
}