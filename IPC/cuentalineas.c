#include <signal.h>
#include <ctype.h>
int main(){
    char minC;
    int num=1;
    while(read(0,&minC,1)){
        if(minC=='\n'){
            num ++;
        }
        
    }
    
    printf("num de lineas: %d\n", num);
    return 0;
}