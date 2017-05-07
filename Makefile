net_CC_rasoberry_client: net.o usart.o control.o main.o 
	$(CC) $(LDFLAGS) net.o usart.o control.o main.o -o net_CC_rasoberry_client -lwiringPi
net.o: net.c
	$(CC) $(CFLAGS) -c net.c
usart.o: usart.c
	$(CC) $(CFLAGS) -c usart.c
control.o: control.c
	$(CC) $(CFLAGS) -c control.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm *.o net_CC_rasoberry_client

	

