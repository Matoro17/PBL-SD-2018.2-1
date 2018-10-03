/*
 * main.c
 *
 *  Created on: 28/09/2018
 *      Author: Gabriel
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

		input1 = IORD(PUSHBUTON1_BASE,1);
		input2 = IORD(PUSHBUTON2_BASE,0);

		dip = IORD(DIP_BASE, 0);

		printf("input 1: %i ",input1);

		printf("input 2: %i ",input2);
		espera(5);
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
		/*espera(5);
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
		}*/


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



