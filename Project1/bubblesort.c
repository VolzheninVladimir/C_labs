#include <stdio.h>


int bubble_sort(int* array, int N) 
{
    int broker;
    for (int i = 1; i < N; i++) 
    {
        for (int j = 1; j < N; j++) 
        {
            if (array[j] < array[j - 1]) 
            {
                broker = array[j];
                array[j] = array[j - 1];
                array[j - 1] = broker;
            }
        }
    }
    return 0;
}


int print_array(int* array, int N) 
{
    printf("Array at the moment: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}


int main() 
{
    int N = 10;
    int array[10] = { 6, 5, 1, 3, 8, 7, 2, 4, 3, 10};
    print_array(array, N);
    bubble_sort(array, N);
    print_array(array, N);
	return 0;
}
