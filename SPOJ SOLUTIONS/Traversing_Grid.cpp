#include <bits/stdc++.h>
using namespace std;
int main()
{
	char answer;
	int T,x,N,M;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&M);
		x=min(N,M)-1;
		if(x%2!=0)
			x--;
		N=N-x;
		M=M-x;
		if(N==1 && M==1)
			answer='R';
		else if(N==2 && M==2)
			answer='L';
		else if(N==1)
			answer='R';
	    else if(M==1)
			answer='D';
		else if(N==2)
			answer='L';
		else if(M==2)
			answer='U';
		printf("%c\n",answer);
	}
	return 0;
}
