#include <stdbool.h>
#include <stdio.h>
 
void Bubble(int* pArray, unsigned int uLen)
{
    int i, j, temp, k;
    bool swapped;
    for (i = 0; i < uLen - 1; i++) {
        swapped = false;
        for (j = 0; j < uLen - i - 1; j++) {
            if (pArray[j] > pArray[j + 1]) {
                int temp = pArray[j];
                pArray[j] = pArray[j+1];
                pArray[j+1] = temp;
                swapped = true;
            }
        }
 
        if (swapped == false) {
            printf("Sorted \n");
            break;
        }
    }
    
    for (k = 0; k < uLen; k++)
        printf("%d ", pArray[k]);
}
 
int main()
{
    int arr[] = {8, 15, 0, 22, 22, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    Bubble(arr, n);
    return 0;
}