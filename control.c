#include "includes.h"

void send2control(int Device)
{
    switch(buffer[0])
    {
        case 0x01:
            send_dirction(Device,buffer[1],buffer[2]);
            break;
        case 0x02:
            send_engine(Device,buffer[1],buffer[2]);
            break;
        case 0x03:
            send_backEngine(Device,buffer[1],buffer[2]);
            break;
        case 0x04:
            if(buffer[1] == 0xCD)
                send_ramX(Device,buffer[2]);
            break;
        case 0x05:
            if(buffer[1] == 0xEF)
                send_ramY(Device,buffer[2]);
    }
}
