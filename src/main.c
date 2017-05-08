#include "../include/includes.h"

int server_sockfd;
int usart_fd;

void all_init();

void all_init()
{
    server_sockfd = net_init();
    if(handshake(server_sockfd) == 0)
    {
        printf("Shake hands ERROR\n");
        exit(1);
    }
    usart_fd = usart_init();
}

int main()
{
    all_init();
    while(1)
    {
        net_get(server_sockfd);
        if(buffer[3] == buffer[1] ^ buffer[2])
            send2control(usart_fd);
    }
}


