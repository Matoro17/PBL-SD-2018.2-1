/*
 * main.c
 *
 *  Created on: 01/10/2018
 *      Author: Gabriel
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "stdlib.h"
#include "system.h"
#include "alt_types.h"
#include "altera_avalon_pio_regs.h"
#define LCD_WR_COMMAND_REG 0x0
#define LCD_WR_DATA_REG 0x1

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
	int input1, input2, output;

	int pos =0;
	printalcd(options,pos);
	unsigned int button;
	int i = 0, dip;

	while (1){

		input1 = IORD(PUSHBUTTON_1_BASE,0);

		__builtin_stwio(LED_1_BASE,1);
		__builtin_stwio(LED_2_BASE,0);
		__builtin_stwio(LED_3_BASE,1);
		__builtin_stwio(LED_4_BASE,0);
		__builtin_stwio(LED_5_BASE,1);



		if(input1 == 0){
			printf("APERTOU 1 ");
			if(pos < 4){
				pos++;
			}else{
				pos = 0;
			}
			printalcd(options,pos);
			espera(2);
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
	 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x02);
	 usleep(2000);

	 /* Display clear */
	 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x01);
	 usleep(2000);

	//printf("%i",strlen(word));
	for(i=0;i<strlen(word);i++){
		ALT_CI_LCD_0(LCD_WR_DATA_REG, word[lugar][i]);
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
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x38);
 usleep(4100); /* Wait for more than 4.1 ms */
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x38);
 usleep(100); /* Wait for more than 100 us */
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x38);
 usleep(5000); /* Wait for more than 100 us */
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x38);
 usleep(100); /* Wait for more than 100 us */

 /* Set Display to OFF*/
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x08);
 usleep(100);

 /* Set Display to ON */
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x0C);
 usleep(100);

 /* Set Entry Mode -- Cursor increment, display doesn't shift */
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x06);
 usleep(100);

 /* Set the Cursor to the home position */
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x02);
 usleep(2000);

 /* Display clear */
 ALT_CI_LCD_0(LCD_WR_COMMAND_REG, 0x01);
 usleep(2000);
}





