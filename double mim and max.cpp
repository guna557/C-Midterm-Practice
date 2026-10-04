
#include <stdio.h>
#include <float.h>
int main()
{
    printf("Smallest Positive Normalized Double (DBL_MIN) : %e\n", DBL_MIN);//2.225074e-308
    printf("Largest Positive Double (DBL_MAX) : %e\n", DBL_MAX);
    printf("Most Negative Double (-DBL_MAX) : %e\n", -DBL_MAX);
    return 0;
}
