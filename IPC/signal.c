#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int entra;
void signalHandler(int sig){
	printf("recibi señal %d\n", sig);
	entra=0;
}

int main(){
	entra=1;
	signal(2,signalHandler);
	signal(15,signalHandler);
	
	while(entra){
		printf("trabajando \n");
		sleep(1);
	}
	printf("voy a terminar \n");
	return 0;
}