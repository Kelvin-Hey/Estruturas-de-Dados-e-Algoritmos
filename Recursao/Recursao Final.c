/* Recursão Final */

#include <stdio.h>

void fun(int n) {
	if(n>0){
		printf("%d ",n);
		fun(n-1);	// chamada recursiva é a última da função
	}
}

int main() {

	int x=3;
	fun(x);
	return 0;
}

