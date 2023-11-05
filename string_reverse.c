#include <stdio.h>

void Reverse(char* ptr) {
    int temp, len;
    for (int i = 0; ptr[i] != '\0'; i++) {
        len = i + 1;
    }

    for (int i = 0; i < len / 2; i++) {
        temp = ptr[i];
        ptr[i] = ptr[len - i - 1];
        ptr[len - i - 1] = temp;
    }
}

int main() {

    char test_str[20] = "This is a test\0";
    Reverse(test_str);
    printf("%s\n", test_str);

    return 0;
}