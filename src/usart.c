#include "../include/includes.h"

int usart_init(void)
{
	int fd;
	if((fd = serialOpen("/dev/ttyUSB0",115200)) < 0)
	{
		printf("USB serial open failed!\n");
		exit(1);
	}
	printf("The Serial has opened\n");
	return fd;
}

void usart_sendData(unsigned char DATA,int Device)
{
	serialPutchar(Device,DATA);
}

unsigned char usart_receiveData(int Device)
{
	unsigned char BUFF;
	BUFF = serialGetchar(Device);
	return BUFF;
}

void usart_close(int Device)
{
	serialClose(Device);
}

void send_dirction(int USART_DEVICE,u8 LOW,u8 HIGH)
{
    usart_sendData(0x01,USART_DEVICE);
    usart_sendData(LOW,USART_DEVICE);
    usart_sendData(HIGH,USART_DEVICE);
}

void send_engine(int USART_DEVICE,u8 LOW,u8 HIGH)
{
    usart_sendData(0x02,USART_DEVICE);
    usart_sendData(LOW,USART_DEVICE);
    usart_sendData(HIGH,USART_DEVICE);
}

void send_backEngine(int USART_DEVICE,u8 LOW,u8 HIGH)
{
    usart_sendData(0x03,USART_DEVICE);
    usart_sendData(LOW,USART_DEVICE);
    usart_sendData(HIGH,USART_DEVICE);
}

void send_ramX(int USART_DEVICE,u8 Data)//send ramX values
{
	usart_sendData(0x04,USART_DEVICE);
	usart_sendData(0x00,USART_DEVICE);
	usart_sendData(Data,USART_DEVICE);
}

void send_ramY(int USART_DEVICE,u8 Data)//send ramX values
{
	usart_sendData(0x05,USART_DEVICE);
	usart_sendData(0x00,USART_DEVICE);
	usart_sendData(Data,USART_DEVICE);
}

