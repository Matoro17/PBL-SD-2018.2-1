/*
 * main.c
 *
 *  Created on: 01/10/2018
 *      Author: Gabriel & Leandro
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

int main(){
		printf("Hello from Nioss II!\n");
		int opcao = 1;
		int entrouOpcao = 0;

		lcd_init();
		char options[5][15] = {"1 opcao","2 opcao","3 opcao","4 opcao","5 opcao"};

		alt_putstr("Bem vindo as opcoes maravilhosas!\n");

		char palavra[] = "Bem vindo";

		printalcd(palavra);
		espera(5);
		int pos =0;
		printalcd(options,pos);
		int dip;
		int buton1, buton2;

		while (1) {
			dip = IORD_ALTERA_AVALON_PIO_DATA(DIP_0_BASE);
			buton1 = IORD_ALTERA_AVALON_PIO_DATA(PUSHBUTTON_1_BASE);
			buton2 = IORD_ALTERA_AVALON_PIO_DATA(PUSHBUTTON_2_BASE);

			if(dip){
				if(!buton1 && entrouOpcao == 0 ){
					if(opcao < 4){
						opcao++;
					}else{
						opcao = 0;
					}
					printalcd(options,opcao);

				}else if(!buton2 && entrouOpcao == 0){
					if(opcao > 0){
						opcao--;
					}else{
						opcao = 0;
					}
					printalcd(options,opcao);

				}
			}else{
				if(!buton1){
					acenderLeds(opcao, 1);
					entrouOpcao = 1;
				}else if(!buton2){
					acenderLeds(opcao, 0);
					entrouOpcao = 0;
				}
			}
			espera(1);

			printf("OPCAO: %i \n", opcao);

		}
		return 0;
}

/*
 * Metodo para acender os leds
 */
void acenderLeds(int opcao, int nivelLogico) {
	if (opcao == 0) {
		IOWR_ALTERA_AVALON_PIO_DATA(LED_1_BASE, nivelLogico);
	} else if (opcao == 1) {
		IOWR_ALTERA_AVALON_PIO_DATA(LED_2_BASE, nivelLogico);
	} else if (opcao == 2) {
		IOWR_ALTERA_AVALON_PIO_DATA(LED_3_BASE, nivelLogico);
	} else if (opcao == 3) {
		IOWR_ALTERA_AVALON_PIO_DATA(LED_4_BASE, nivelLogico);
	} else if (opcao == 4) {
		IOWR_ALTERA_AVALON_PIO_DATA(LED_5_BASE, nivelLogico);
	}
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
/*
 * Metodo para delay
 */
void espera(int a){
	volatile int i = 0;
	while(i<a*50000){
		i++;
	}
}
/*
 * Metodo para inicialização do LCD
 */
void lcd_init() {

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





