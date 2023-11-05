#include <stdio.h>
#include <string.h>

void Add(const char* p1, const char* p2, char* result) {
    int i, p1Len = strlen(p1), p2Len = strlen(p2), width, sum, carry = 0;
    char p1Rev[256], p2Rev[256];

    width = p1Len > p2Len ? p1Len : p2Len; 
    printf("%d \n", width);
    strrev(strcpy(p1Rev, p1));    
    strrev(strcpy(p2Rev, p2));

    for(int i = 0; i < width; i++) {
        char p1Char;
        char p2Char;

        p1Char = (i < strlen(p1Rev)) ? p1Rev[i] - 48 : 0;
        p2Char = (i < strlen(p2Rev)) ? p2Rev[i] - 48 : 0;
        printf("p1 char: %d, p2 char: %d \n", p1Char, p2Char);

        sum = p1Char + p2Char + carry;
        carry = 0;
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        }
        result[i] = sum + 48;
    }
    strrev(result);
}


int main() {
    char result[256] = "";
    Add( "12345", "678", result);
    printf("%s \n", result);
    return 0;
}
