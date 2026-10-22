#include<stdio.h>
int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int j=0;j<n/2;j++) {
        int temp=a[n-1-j];
        a[n-1]=a[j];
        a[j]=temp;
    }
    for (int k=0;k<n;k++) {
        printf("%d ",a[k]);
    }
    return 0;
}
