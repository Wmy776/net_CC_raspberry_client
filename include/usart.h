#ifndef USART_H
#define USART_H

#define u32 unsigned int
#define s16 signed short
#define u8  unsigned char

int usart_init(void);
void usart_sendData(unsigned char DATA,int Device);
unsigned char usart_receiveData(int Device);
void usart_close(int Device);
void send_dirction(int USART_DEVICE,u8 LOW,u8 HIGH);//sned direction values 
void send_engine(int USART_DEVICE,u8 LOW,u8 HIGH);//send engine values
void send_backEngine(int USART_DEVICE,u8 LOW,u8 HIGH);//send back engine values
void send_ramX(int USART_DEVICE,u8 Data);//send ramX values
void send_ramY(int USART_DEVICE,u8 Data);//send ramX values


#endif
