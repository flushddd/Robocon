#ifndef __IIC_H__
#define __IIC_H__



//typedef unsigned char unsigned char

void Delay_10us(unsigned int ten_us);
void iic_start(void);
void iic_stop(void);
void iic_ack(void);
void iic_nack(void);
unsigned char iic_wait_ack(void);
void iic_write_byte(unsigned chardat);
unsigned char iic_read_byte(unsigned char ack);


#endif