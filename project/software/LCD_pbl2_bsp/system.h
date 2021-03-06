/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'Nios' in SOPC Builder design 'Nios'
 * SOPC Builder design path: C:/Users/Gabriel/Documents/GitHub/PBL-SD-2018.2-1/project/Nios.sopcinfo
 *
 * Generated: Fri Sep 28 13:53:08 BRT 2018
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00008820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00004020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x10
#define ALT_CPU_NAME "Nios"
#define ALT_CPU_RESET_ADDR 0x00004000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00008820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00004020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x10
#define NIOS2_RESET_ADDR 0x00004000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_LCD_16207
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_NIOS2_QSYS


/*
 * Jtag configuration
 *
 */

#define ALT_MODULE_CLASS_Jtag altera_avalon_jtag_uart
#define JTAG_BASE 0x9050
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/Jtag"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/Jtag"
#define ALT_STDERR_BASE 0x9050
#define ALT_STDERR_DEV Jtag
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/Jtag"
#define ALT_STDIN_BASE 0x9050
#define ALT_STDIN_DEV Jtag
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/Jtag"
#define ALT_STDOUT_BASE 0x9050
#define ALT_STDOUT_DEV Jtag
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "Nios"


/*
 * dip configuration
 *
 */

#define ALT_MODULE_CLASS_dip altera_avalon_pio
#define DIP_BASE 0x9010
#define DIP_BIT_CLEARING_EDGE_REGISTER 0
#define DIP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define DIP_CAPTURE 0
#define DIP_DATA_WIDTH 1
#define DIP_DO_TEST_BENCH_WIRING 0
#define DIP_DRIVEN_SIM_VALUE 0
#define DIP_EDGE_TYPE "NONE"
#define DIP_FREQ 50000000
#define DIP_HAS_IN 1
#define DIP_HAS_OUT 0
#define DIP_HAS_TRI 0
#define DIP_IRQ -1
#define DIP_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DIP_IRQ_TYPE "NONE"
#define DIP_NAME "/dev/dip"
#define DIP_RESET_VALUE 0
#define DIP_SPAN 16
#define DIP_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * lcd_16207_0 configuration
 *
 */

#define ALT_MODULE_CLASS_lcd_16207_0 altera_avalon_lcd_16207
#define LCD_16207_0_BASE 0x9020
#define LCD_16207_0_IRQ -1
#define LCD_16207_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_16207_0_NAME "/dev/lcd_16207_0"
#define LCD_16207_0_SPAN 16
#define LCD_16207_0_TYPE "altera_avalon_lcd_16207"


/*
 * led configuration
 *
 */

#define ALT_MODULE_CLASS_led altera_avalon_pio
#define LED_BASE 0x9040
#define LED_BIT_CLEARING_EDGE_REGISTER 0
#define LED_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_CAPTURE 0
#define LED_DATA_WIDTH 5
#define LED_DO_TEST_BENCH_WIRING 0
#define LED_DRIVEN_SIM_VALUE 0
#define LED_EDGE_TYPE "NONE"
#define LED_FREQ 50000000
#define LED_HAS_IN 0
#define LED_HAS_OUT 1
#define LED_HAS_TRI 0
#define LED_IRQ -1
#define LED_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_IRQ_TYPE "NONE"
#define LED_NAME "/dev/led"
#define LED_RESET_VALUE 0
#define LED_SPAN 16
#define LED_TYPE "altera_avalon_pio"


/*
 * memory configuration
 *
 */

#define ALT_MODULE_CLASS_memory altera_avalon_onchip_memory2
#define MEMORY_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define MEMORY_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define MEMORY_BASE 0x4000
#define MEMORY_CONTENTS_INFO ""
#define MEMORY_DUAL_PORT 0
#define MEMORY_GUI_RAM_BLOCK_TYPE "AUTO"
#define MEMORY_INIT_CONTENTS_FILE "Nios_memory"
#define MEMORY_INIT_MEM_CONTENT 1
#define MEMORY_INSTANCE_ID "NONE"
#define MEMORY_IRQ -1
#define MEMORY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define MEMORY_NAME "/dev/memory"
#define MEMORY_NON_DEFAULT_INIT_FILE_ENABLED 0
#define MEMORY_RAM_BLOCK_TYPE "AUTO"
#define MEMORY_READ_DURING_WRITE_MODE "DONT_CARE"
#define MEMORY_SINGLE_CLOCK_OP 0
#define MEMORY_SIZE_MULTIPLE 1
#define MEMORY_SIZE_VALUE 16384
#define MEMORY_SPAN 16384
#define MEMORY_TYPE "altera_avalon_onchip_memory2"
#define MEMORY_WRITABLE 1


/*
 * pushbuton1 configuration
 *
 */

#define ALT_MODULE_CLASS_pushbuton1 altera_avalon_pio
#define PUSHBUTON1_BASE 0x9030
#define PUSHBUTON1_BIT_CLEARING_EDGE_REGISTER 0
#define PUSHBUTON1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PUSHBUTON1_CAPTURE 0
#define PUSHBUTON1_DATA_WIDTH 1
#define PUSHBUTON1_DO_TEST_BENCH_WIRING 0
#define PUSHBUTON1_DRIVEN_SIM_VALUE 0
#define PUSHBUTON1_EDGE_TYPE "NONE"
#define PUSHBUTON1_FREQ 50000000
#define PUSHBUTON1_HAS_IN 1
#define PUSHBUTON1_HAS_OUT 0
#define PUSHBUTON1_HAS_TRI 0
#define PUSHBUTON1_IRQ -1
#define PUSHBUTON1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PUSHBUTON1_IRQ_TYPE "NONE"
#define PUSHBUTON1_NAME "/dev/pushbuton1"
#define PUSHBUTON1_RESET_VALUE 0
#define PUSHBUTON1_SPAN 16
#define PUSHBUTON1_TYPE "altera_avalon_pio"


/*
 * pushbuton2 configuration
 *
 */

#define ALT_MODULE_CLASS_pushbuton2 altera_avalon_pio
#define PUSHBUTON2_BASE 0x9000
#define PUSHBUTON2_BIT_CLEARING_EDGE_REGISTER 0
#define PUSHBUTON2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PUSHBUTON2_CAPTURE 0
#define PUSHBUTON2_DATA_WIDTH 1
#define PUSHBUTON2_DO_TEST_BENCH_WIRING 0
#define PUSHBUTON2_DRIVEN_SIM_VALUE 0
#define PUSHBUTON2_EDGE_TYPE "NONE"
#define PUSHBUTON2_FREQ 50000000
#define PUSHBUTON2_HAS_IN 1
#define PUSHBUTON2_HAS_OUT 0
#define PUSHBUTON2_HAS_TRI 0
#define PUSHBUTON2_IRQ -1
#define PUSHBUTON2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PUSHBUTON2_IRQ_TYPE "NONE"
#define PUSHBUTON2_NAME "/dev/pushbuton2"
#define PUSHBUTON2_RESET_VALUE 0
#define PUSHBUTON2_SPAN 16
#define PUSHBUTON2_TYPE "altera_avalon_pio"

#endif /* __SYSTEM_H_ */
