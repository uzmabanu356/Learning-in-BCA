#include<stdio.h>
#include<conio.h>

void bubble_sort(int arr[], int n)
 
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
 
{ 
   clrscr();
    int arr[10], i;

    printf("Enter 10 elements:\n ");
    for (i = 0; i < 10; i++) {
	scanf("%d", &arr[i]);
    }

    bubble_sort(arr, 10);

    printf("Sorted array: ");
    for (i = 0; i < 10; i++) {
	printf("%d ", arr[i]);
    }
     getch();
    return 0;
}

