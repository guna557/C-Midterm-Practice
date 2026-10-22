#include<stdio.h>
#include<limits.h>
int main() {
    int arr[5]={10, 5, 20, 20, 18};
    int large=arr[0];
    int s_large=INT_MIN;
    for (int i=0;i<5;i++) {
        if (arr[i]>large) {
            s_large=large;
            large=arr[i];
        }
        else if (arr[i]>s_large && arr[i]!=large) {
            s_large=arr[i];
        }
    }
    printf("%d",s_large);
}