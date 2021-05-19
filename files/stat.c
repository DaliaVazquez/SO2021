#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>

int main(int argvnum, char **argv){
    char *path = argv[1];
    struct stat sb;
    if(stat(path, &sb) == -1){
        printf("Error el archivo no existe \n");
        return -1;
    }
    if(S_ISDIR(sb.st_mode)){
        printf("Es un directorio \n");
        //int unlink(const char *pathname);
        //int link(const char *oldpath, const char *newpath);
    } 
    if(S_ISREG(sb.st_mode)){
        printf("Es un archivo normal \n");
    }  
    return 1;
}
