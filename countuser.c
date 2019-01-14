#include<stdio.h>
#include<stdlib.h>

int main(int argc, char * argv[]){
 
  int ch;
  int count =0;
  while((ch = fgetc(stdin)) != EOF) {
       if(ch == 'x') 
  count++;
} 
printf("%d", count);
printf("\n");
  return 0;
}
