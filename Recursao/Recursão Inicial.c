/* Recursão Inicial */

#include <stdio.h>

void fun(int n) {
	
	if(n>0) {
		fun(n-1);	// a chamada recursiva é a primeira da função
		printf("%d ",n);
	}	
}

int main() {
	
	int x=3;
	fun(x);
	return 0;
}

