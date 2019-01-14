#include<stdio.h>

int main(int argc, char * argv[]){
  
  int i, k; 
  long total = 2;
  
  scanf("%i", &i);
  for(k=0; k<i; k++) {
    printf("%li\n", total);
     total *=2;
  }
       
  
 return 0; 
}