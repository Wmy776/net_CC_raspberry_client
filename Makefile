net_CC_rasoberry_client: ./build/main.o ./build/net.o ./build/usart.o ./build/control.o
	cc ./build/control.o ./build/net.o ./build/usart.o ./build/main.o -o net_CC_rasoberry_client -lwiringPi
./build/usart.o: ./src/usart.c ./include/includes.h
	cc -c ./src/usart.c -o ./build/usart.o
./build/net.o: ./src/net.c ./include/includes.h
	cc -c ./src/net.c -o ./build/net.o
./build/control.o: ./src/control.c ./include/includes.h
	cc -c ./src/control.c -o ./build/control.o
./build/main.o: ./src/main.c ./include/includes.h
	cc -c ./src/main.c -o ./build/main.o

clean:
	rm ./build/*.o net_CC_rasoberry_client
