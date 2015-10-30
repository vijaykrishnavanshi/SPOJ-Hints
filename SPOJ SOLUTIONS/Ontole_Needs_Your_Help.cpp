#include <stdio.h>
int main() {
	long int A,num=0,N,i=0;
	scanf("%ld",&N);
	for(i=0;i<N;i++)
	{
		scanf("%ld",&A);
		num^=A;
		
	}
	printf("%ld",num);
	// your code goes here
	return 0;
}

