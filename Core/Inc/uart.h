/**
 * @file uart.h
 * @author German Velardez (germanvelardez16@gmail.com)
 * @brief  Configuracion y manejo del periferico UART
 * @version 0.1
 * @date 2022-07-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "core.h"




void uart_init(uart_t uart);

void uart_write(uart_t uart,uint8_t* buffer,uint16_t len, uint16_t timeout);

void uart_read(uart_t uart,uint8_t* buffer,uint16_t len, uint16_t timeout);







