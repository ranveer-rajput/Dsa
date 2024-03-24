#include <stdio.h>


void linearSearch(int arr[], int size, int target);

int main()
{
    int arr[5];
    int size = 5;
    int target;

    printf("Enter the target value: ");
    scanf("%d", &target);

   
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    linearSearch(arr, size, target);

    return 0;
}

void linearSearch(int arr[], int size, int target)
{
    int found = 0;
    int index=-1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            index=i;
            break;
        }
    }
    if (found == 1)
    {
        printf("Target found at index %d.\n",index);
    }
    else
    {
        printf("Target not found.\n");
    }
}
