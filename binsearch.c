#include <stdio.h>

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue) {
    
    int l = 0;
    int r = uArraySize - 1;

    while(l <= r) {
        int m = l + (r - 1) / 2;

        if(pArray[m] == uValue){
            return m;
        }

        if(pArray[m] < uValue) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return 0xFFFF;
    
}

int main()
{
    unsigned int target = 21;
    unsigned int target2 = 3;
    unsigned int target3 = 12352;
    unsigned int arr[] = {1,3,5,8,13,21};
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    unsigned int result = BinSearch(arr, n, target);
    unsigned int result2 = BinSearch(arr, n, target2);
    unsigned int result3 = BinSearch(arr, n, target3);

    printf("Result is: %x \n", result);
    printf("Result is: %x \n", result2);
    printf("Result is: %x \n", result3);

    return 0;
}