/*
 * File      : uart.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2015, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 */

#ifndef __UART_H__
#define __UART_H__



#define RX_PIN_NUMBER          8
#define TX_PIN_NUMBER          6
#define CTS_PIN_NUMBER         7
#define RTS_PIN_NUMBER         5
#define HWFC                   false


void rt_hw_uart_init(void);

#endif
