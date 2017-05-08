#ifndef NET_H
#define NET_H

extern unsigned char buffer[4];
extern unsigned char server_port[];
extern unsigned char server_addr[];

int net_init(void);//Network Config Init,return the socket fd.
void net_get(int sockfd);//Get the 4B date once from the server.
void net_close(int sockfd);//Close the sockfd.
int handshake(int sockfd);//Handshake with the server

#endif
