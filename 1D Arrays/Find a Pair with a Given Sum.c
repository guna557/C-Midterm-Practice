#include<stdio.h>
int main() {
    int n,m;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum to find: ");
    scanf("%d",&m);
    for (int j=0;j<n;j++) {
        for (int k=j+1;k<n;k++) {
            if (arr[j]+arr[k]==m) {
                printf("The pair is: %d and %d\n",arr[j],arr[k]);
                break;
            }
        }
    }
    return 0;
}