#include <stdio.h>
int main() {
    int n, count,k=0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n],r[100];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            r[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", r[i]);
    }
    return 0;
}
