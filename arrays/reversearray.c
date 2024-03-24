#include <conio.h> // Include the conio.h header file, which provides functions for console input and output. Note: This header is not standard and may not be available on all compilers.
#include <stdio.h> // Include the standard input-output header file.

// Function prototypes
void reverseArray(int arr[], int size);
void extremePrint(int arr[], int size);

int main()
{
    int arr[5] = {20, 10, 30, 40, 50}; // Declare and initialize an integer array of size 5.

    int size = 5; // Initialize the variable size to 5, indicating the size of the array.

    // Call the extremePrint function to print elements from both extremes of the array.
    extremePrint(arr, size);

    return 0; // Return 0 to indicate successful program execution.
}

// Function to reverse the elements of an array
void reverseArray(int arr[], int size)
{
    // Iterate through the array from both ends, swapping elements until reaching the middle.
    for (int left = 0, right = size - 1; left <= right; right--, left++)
    {
        int temp = arr[left]; // Store the value of arr[left] in a temporary variable.
        arr[left] = arr[right]; // Assign the value of arr[right] to arr[left].
        arr[right] = temp; // Assign the value stored in the temporary variable to arr[right].
    }

    // Print the reversed array.
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]); // Print each element of the array.
    }
}

// Function to print elements from both extremes of an array
void extremePrint(int arr[], int size)
{
    int right = size - 1; // Initialize the variable right to the index of the last element.
    int left = 0; // Initialize the variable left to the index of the first element.

    // Iterate through the array from both ends until left and right meet.
    while (left <= right)
    {
        // If the current index is the same for both left and right, print the single element.
        if (right == left)
        {
            printf("%d", arr[left]); // Print the single element at index left.
        }
        else
        {
            printf("%d", arr[left]); // Print the element at index left.
            printf("%d", arr[right]); // Print the element at index right.
        }

        left++; // Increment left index.
        right--; // Decrement right index.
    }
}
