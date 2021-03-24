#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int entra;
void signalHandler(int sig){
	printf("recibi señal %d\n", sig);
    int pidHT=wait(NULL);
    printf("hijo que termino: %d\n", pidHT);
    entra=0;
}
int main(){
    entra=1;
    signal(17,signalHandler);
    int pid=fork();
    if(pid==0){
        printf("p hijo\n");
    }else{
        printf("padre de %d\n", pid);
        //pidHT=wait(NULL);
        while(1){
            printf("trabajando\n");
            sleep(1);
        }
    }
    printf("terminando \n", pid);
    return 0;
}