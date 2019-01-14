#include<stdio.h>

int main(int argc, char *argv[]){
 
  int i;
  for(i=0; i < 26; i++){
  printf("%c %d\n",'a'+i, 'a'+i);   
  }    for(i=0; i < 26; i++){
  printf("%c %d\n",'A'+i, 'A'+i);
    }
  return 0;
}
