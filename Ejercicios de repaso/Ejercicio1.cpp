// Hallar tres números consecutivos cuya suma sea 87.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  
	 int num = 0;
	 int num2 = num + 1;
	 int num3 = num + 2;
	 
	 do{
	 	num++;
	 	num2++;
	 	num3++;
	 	
	 }while(num + num2 + num3 != 87);
	 
	 printf("%d + %d + %d = 87", num, num2, num3);
  return 0;
}
