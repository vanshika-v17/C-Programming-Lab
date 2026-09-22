#include<stdio.h>
int main() {

    int n;
    printf("enter size:");
    scanf("%d", &n);

    int arr[n];
    int i;
    printf("enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest;
    int secondlargest;

    //set largest and second largest element
    if(arr[0] > arr[1])
    {
        largest = arr[0];
        secondlargest = arr[1];
    }
    else 
    {
        largest = arr[1];
        secondlargest = arr[0];
    }


    for(i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }
    printf("Second largest element = %d\n", secondlargest);

    return 0;
}