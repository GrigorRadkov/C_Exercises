#include <stdio.h>

void Conv(int sValue, char *pBuffer) {
    if (sValue < 0) {
        sprintf(pBuffer, "-%d", -sValue);
    } else {
        sprintf(pBuffer, " %d", sValue);
    }
}

int main() {
    int number1 = -26;
    int number2 = 16025;
    
    char buffer1[8];
    char buffer2[8];
    
    Conv(number1, buffer1);
    Conv(number2, buffer2);

    printf("Number 1: %s\n", buffer1);
    printf("Number 2: %s\n", buffer2);
    
    return 0;
}