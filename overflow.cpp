#include<stdio.h>
#include<math.h>
#include<float.h>
#include<limits.h>
int main() {
    int a=-pow(2,32);
    printf("%d",a-1);
    printf("\n=====================================================\n");
    printf(" DECIMAL PRECISION\n");
    printf("=====================================================\n");
    // Number of significant decimal digits that can be represented accurately
    printf("Float Precision (FLT_DIG) : %d digits\n",FLT_DIG);
    printf("Double Precision (DBL_DIG) : %d digits\n",DBL_DIG);
    printf("Long Double Precision (LDBL_DIG) : %d digits\n",LDBL_DIG);
}
