#include "student.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char **argv) {
  char *filename = argv[1];
  char *atrubuto = argv[2];
  char *palabra = argv[3];
  char *palabra2 = argv[4];
  int cuantos= atoi(argv[2]);
  int result;

  FILE *forigen;
  forigen = fopen(filename,"r+b");
  STUDENT newstudent;
  
  while(fread(&newstudent,sizeof(newstudent),1,forigen)){
       
        if(strstr(palabra, newstudent.lastname) != NULL){
            //printf("e\n");
            strcpy(newstudent.lastname, palabra2);
            fseek(forigen,-1 * sizeof(newstudent),SEEK_CUR);
            printf("%s %s %d %d \n",newstudent.name,newstudent.lastname,newstudent.id,newstudent.semestre);
            fwrite(&newstudent,sizeof(newstudent),1,forigen);
            fread(&newstudent,sizeof(newstudent),1,forigen);
        }
    //printf("strcmp(str1, str3) = %d\n", result);

  }
    fclose(forigen);
}