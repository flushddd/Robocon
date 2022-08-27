
#include <REGX52.H>
#include "IIC.h"

#define Address 0x0A


unsigned char  WAddress =1;
unsigned char *sendstring="HelloRobocon!";

void SendByte(unsigned char WAddress, unsigned char Data)
{
	iic_start();
	iic_write_byte(Address);
	iic_wait_ack();
	iic_write_byte(WAddress);//存放数据的地址
	iic_wait_ack();
	iic_write_byte(Data);
    iic_wait_ack();
	iic_stop();
}

void send()
{
	
	while(*sendstring)
{


SendByte(WAddress,*sendstring);
WAddress++;
sendstring++;
}	
	
}
