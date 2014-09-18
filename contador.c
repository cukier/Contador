#include <18f452.h>

#FUSES H4

#USE delay(crystal=10MHz, clock=40MHz)
#USE rs232(baud=9600, xmit=PIN_C6)

int main(void) {
	setup_timer_1(T1_EXTERNAL | T1_DIV_BY_8);
	while (TRUE) {
		delay_ms(1000);
		printf("%Lu\r\n", get_timer1());
	}
	return 0;
}
