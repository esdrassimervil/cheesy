#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
   if(argc < 3) {
	  printf("Usage: ./a.out num1 num2\n");
	  exit(0);
}

   for(int i = atoi(argv[2]); i<=atoi(argv[3]); i++){
    printf("%d\n", i);
      }
/*	
for(int i =1; i<=10; i++){
printf("%i\n", i);
}
*/
return 0;
}
