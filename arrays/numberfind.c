#include <conio.h>
#include <stdio.h>
#include <limits.h>
int findMinNo(int arr[], int size);
int findMaxNo(int arr[], int size);

int main()
{

    int arr[5];
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = findMinNo(arr, size);
    printf("min ans is:%d", min);
    printf("\n");
    int max = findMaxNo(arr, size);
    printf("max number is:%d", max);

    return 0;
}
int findMinNo(int arr[], int size)
{

    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int findMaxNo(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
