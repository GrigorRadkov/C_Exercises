#include <stdio.h>

unsigned char CheckBit(unsigned int uValue) {

	int ct = 0;
	for(int i = 0; i < 16; i++) {
		if (uValue & 1 << (i)) {
			ct++; 
		}
	}

	if (ct == 1) {
		return '1';
	}
	else  {
		return '0';
	}

}
int main()
{
	unsigned char answer;
	unsigned int enter;
	answer = CheckBit(0x0000);
	printf("Output:%c", answer);
}