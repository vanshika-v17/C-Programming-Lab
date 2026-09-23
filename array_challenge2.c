#include<stdio.h>
int main() {

    int n;
    printf("enter size:");
    scanf("%d", &n);

    int arr[n];
    int i,j,temp;
    printf("enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        for( j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Second largest element = %d\n", arr[n-2]);


    return 0;
}