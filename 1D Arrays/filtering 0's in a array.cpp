#include<stdio.h>
int main() {
    int n;
    printf("Enter no. of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int j=0;j<n;j++) {
        if (arr[j]==0) {
            arr[j]=arr[n-1];
            arr[n-1]=0;
        }
    }
    for (int k=0;k<n;k++) {
        printf("%d",arr[k]);
    }
}
