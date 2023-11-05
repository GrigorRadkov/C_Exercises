#include <stdio.h>

void VMirror(unsigned char *pImage) {
    for (int i = 0; i < 8; i++) {
        unsigned char result = 0;
        for (int j = 0; j < 8; j++) {
            result <<= 1;
            result |= (pImage[i] & 1);
            pImage[i] >>= 1;
        }
        pImage[i] = result;
    }
}

int main() {
    unsigned char image[] = {0x7F, 0x40, 0x40, 0x40, 0x7F, 0x00, 0x00, 0x00};

    printf("Initial content of buffer: ");
    for (int i = 0; i < 8; i++) {
        printf("0x%02X, ", image[i]);
    }
    printf("\n");

    VMirror(image);

    printf("After VMirror execution: ");
    for (int i = 0; i < 8; i++) {
        printf("0x%02X, ", image[i]);
    }
    printf("\n");

    return 0;
}