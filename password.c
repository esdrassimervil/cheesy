#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]) {
   char s[100];
  do {
         printf("Type a Password: ");
	 scanf("%99s", s);
  }
	 while (strcmp("fourty-two", s) != 0);

 
  
return 0;  
}
