#include <stdio.h>
#include <system.h>
#include <altera_avalon_pio_regs.h>

int main()
{
  printf("Hello from Nios II!\n");
  int sw_value;
  while(1){
	  sw_value = IORD_ALTERA_AVALON_PIO_DATA(PUSHBUTON_BASE) & 0X07;
	  if(sw_value == 0){
		  IOWR_ALTERA_AVALON_PIO_DATA(LED_BASE,0);
	  }else if(sw_value == 1){
		  IOWR_ALTERA_AVALON_PIO_DATA(LED_BASE,1);
	  }else if(sw_value == 2){
		  IOWR_ALTERA_AVALON_PIO_DATA(LED_BASE,2);
	  }else if(sw_value == 3){
		  IOWR_ALTERA_AVALON_PIO_DATA(LED_BASE,3);
	  }
  }
  return 0;
}

#include "io.h"
#include "system.h"

void main(){
	unsigned int input1, input2, output;
	while(1){
		input1 = IORD(PUSHBUTON_BASE,0);
		input2 = IORD(PUSHBUTON_BASE,1);
		output = input1 + input2;
		IOWR(LED_BASE,0,output);
	}
}
