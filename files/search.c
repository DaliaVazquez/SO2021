#include "student.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char *filename = argv[1];
  char *atrubuto = argv[2];
  char *palabra = argv[3];
  int cuantos= atoi(argv[2]);
  int result;

  FILE *forigen;
  forigen = fopen(filename,"rb");
  STUDENT newstudent;
  
  while(fread(&newstudent,sizeof(newstudent),1,forigen)){
      /*if(strcmp(atrubuto,"lastname")==0){
          //strcmp(palabra,newstudent.lastname);
      }
     if(strcmp(atrubuto,"name")==0){
          result=strcmp(palabra,newstudent.name);
      }
       
      if(strstr(atrubuto,"id")==NULL){
          strstr(palabra,"id");
      }
      if(strstr(atrubuto,"semestre")==NULL){
          strstr(palabra,"semestre");
      }
      */
      //printf("strstr(palabra, newstudent.lastname) == NULL");
      if(strstr(palabra, newstudent.lastname) != NULL){
          printf("%s %s %d %d \n",newstudent.name,newstudent.lastname,newstudent.id,newstudent.semestre);
      }
    //printf("strcmp(str1, str3) = %d\n", result);

  }
    fclose(forigen);
}