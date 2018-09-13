/*
 * "Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It runs with or without the MicroC/OS-II RTOS and requires a STDOUT
 * device in your system's hardware.
 * The memory footprint of this hosted application is ~69 kbytes by default
 * using the standard reference design.
 *
 * For a reduced footprint version of this template, and an explanation of how
 * to reduce the memory footprint for a given application, see the
 * "small_hello_world" template.
 *
 */

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
