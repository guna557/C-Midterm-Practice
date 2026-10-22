#include<stdio.h>
int main() {
    int n,a;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d", &a);
    for (int i=0; i<n; i++) {
        if (arr[i] == a) {
            printf("Element found at index %d\n", i);
            break;
        }
    }
    return 0;
}
