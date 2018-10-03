/*
 * main.c
 *
 *  Created on: 19/09/2018
 *      Author: Gabriel and Leandro
 */

/*
 * "Small Hello World" example.
 *
 * This example prints 'Hello from Nios II' to the STDOUT stream. It runs on
 * the Nios II 'standard', 'full_featured', 'fast', and 'low_cost' example
 * designs. It requires a STDOUT  device in your system's hardware.
 *
 * The purpose of this example is to demonstrate the smallest possible Hello
 * World application, using the Nios II HAL library.  The memory footprint
 * of this hosted application is ~332 bytes by default using the standard
 * reference design.  For a more fully featured Hello World application
 * example, see the example titled "Hello World".
 *
 * The memory footprint of this example has been reduced by making the
 * following changes to the normal "Hello World" example.
 * Check in the Nios II Software Developers Manual for a more complete
 * description.
 *
 * In the SW Application project (small_hello_world):
 *
 *  - In the C/C++ Build page
 *
 *    - Set the Optimization Level to -Os
 *
 * In System Library project (small_hello_world_syslib):
 *  - In the C/C++ Build page
 *
 *    - Set the Optimization Level to -Os
 *
 *    - Define the preprocessor option ALT_NO_INSTRUCTION_EMULATION
 *      This removes software exception handling, which means that you cannot
 *      run code compiled for Nios II cpu with a hardware multiplier on a core
 *      without a the multiply unit. Check the Nios II Software Developers
 *      Manual for more details.
 *
 *  - In the System Library page:
 *    - Set Periodic system timer and Timestamp timer to none
 *      This prevents the automatic inclusion of the timer driver.
 *
 *    - Set Max file descriptors to 4
 *      This reduces the size of the file handle pool.
 *
 *    - Check Main function does not exit
 *    - Uncheck Clean exit (flush buffers)
 *      This removes the unneeded call to exit when main returns, since it
 *      won't.
 *
 *    - Check Don't use C++
 *      This builds without the C++ support code.
 *
 *    - Check Small C library
 *      This uses a reduced functionality C library, which lacks
 *      support for buffering, file IO, floating point and getch(), etc.
 *      Check the Nios II Software Developers Manual for a complete list.
 *
 *    - Check Reduced device drivers
 *      This uses reduced functionality drivers if they're available. For the
 *      standard design this means you get polled UART and JTAG UART drivers,
 *      no support for the LCD driver and you lose the ability to program
 *      CFI compliant flash devices.
 *
 *    - Check Access device drivers directly
 *      This bypasses the device file system to access device drivers directly.
 *      This eliminates the space required for the device file system services.
 *      It also provides a HAL version of libc services that access the drivers
 *      directly, further reducing space. Only a limited number of libc
 *      functions are available in this configuration.
 *
 *    - Use ALT versions of stdio routines:
 *
 *           Function                  Description
 *        ===============  =====================================
 *        alt_printf       Only supports %s, %x, and %c ( < 1 Kbyte)
 *        alt_putstr       Smaller overhead than puts with direct drivers
 *                         Note this function doesn't add a newline.
 *        alt_putchar      Smaller overhead than putchar with direct drivers
 *        alt_getchar      Smaller overhead than getchar with direct drivers
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "stdlib.h"
#include "system.h"
#include "alt_types.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_lcd_16207_regs.h"
#define LCD_WR_COMMAND_REG 0
#define LCD_RD_STATUS_REG 1
#define LCD_WR_DATA_REG 2
#define LCD_RD_DATA_REG 3

char button_value = 3;
#define UP_BUTTON 1
#define DOWN_BUTTON 2

int main()
{


	lcd_init();
	char options[5][15] = {"1 opcao","2 opcao","3 opcao","4 opcao","5 opcao"};

	alt_putstr("Hello from Nios II!\n");

	char palavra[] = "outra coisa";
	printalcd(palavra);
	unsigned int input1, input2, output;

	int pos =0;
	printalcd(options,pos);
	unsigned int button;
	int i = 0, dip;

	while (1){

		input1 = IORD(PUSHBUTON1_BASE,0);
		input2 = IORD(PUSHBUTON2_BASE,0);

		dip = IORD(DIP_BASE, 0);



		if(!dip){
			if(input1 && !input2){
				i = 1;
			}
			if(!input1 && input2){
				i = 2;
			}
		}else{
			if(input1 && !input2){
				i = 3;
			}
			if(!input1 && input2){
				i = 4;
			}
		}




		//printf(" value: %i ", i);
		espera(5);
		if(input1 == 0){
			printf("APERTOU 1 ");
			if(pos < 4){
				pos++;
			}else{
				pos = 0;
			}
			printalcd(options,pos);
			espera(10);
		}

		if(input2 == 0){
			printf("APERTOU 2 ");
			IOWR(LED_BASE,1,pos);
			IOWR(LED_BASE,0,pos);
		}


	}

	return 0;
}

/*
 * Metodo para escrever palavras no LCD
 */
void printalcd(char word[][15], int lugar){
	int i;
	/* Set the Cursor to the home position */
	 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x02);
	 usleep(2000);

	 /* Display clear */
	 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x01);
	 usleep(2000);

	//printf("%i",strlen(word));
	for(i=0;i<strlen(word);i++){
		IOWR(LCD_16207_0_BASE, 2, word[lugar][i]);
		usleep(100);
	}
}

void espera(int a){
	volatile int i = 0;
	while(i<a*50000){
		i++;
	}
}


void lcd_init( void) {

 usleep(15000); /* Wait for more than 15 ms before init */
 /* Set function code four times -- 8-bit, 2 line, 5x7 mode */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x38);
 usleep(4100); /* Wait for more than 4.1 ms */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x38);
 usleep(100); /* Wait for more than 100 us */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x38);
 usleep(5000); /* Wait for more than 100 us */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x38);
 usleep(100); /* Wait for more than 100 us */

 /* Set Display to OFF*/
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x08);
 usleep(100);

 /* Set Display to ON */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x0C);
 usleep(100);

 /* Set Entry Mode -- Cursor increment, display doesn't shift */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x06);
 usleep(100);

 /* Set the Cursor to the home position */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x02);
 usleep(2000);

 /* Display clear */
 IOWR(LCD_16207_0_BASE, LCD_WR_COMMAND_REG, 0x01);
 usleep(2000);
}
