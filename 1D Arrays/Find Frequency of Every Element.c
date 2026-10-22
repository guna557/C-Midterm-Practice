
#include <stdio.h>
int main(void) {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[100];
    int visited[100] = {0};
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d time(s)\n", arr[i], count);
    }
    return 0;
}
