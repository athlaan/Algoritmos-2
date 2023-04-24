#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	
	int a[2] = {10,5};
	int b[2] = {3,4};
	int c[2];
	
	for(int i = 0; i < 2; i++){
		c[i] = a[i] - b[i];
	}
	
	for(int i = 0; i < 2; i++){
		printf("%d ", c[i]);
	}
	
	return 0;
}

