#include <stdio.h>
#include <cstdint>
#include <string>

char BCDtoASCII(int8_t bcd_char);
int8_t ASCIItoBCD(char ascii_char);


int main() {
	int8_t g = 0;
	char h = 0x32;
	
	printf("Input symbols: %x %x\n", g, h);
	printf("Output symbols: %x %x\n", BCDtoASCII(g), ASCIItoBCD(h));
}


char BCDtoASCII(int8_t bcd_int) {
	return bcd_int ^ 0x30;
}

int8_t ASCIItoBCD(char ascii_char) {
	return ascii_char && 0x30;
}