#include <stdio.h>

int main() {
	int i,j,T,M,temp,x,flag=0;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		flag=0;
		int A[2002]={0};
		scanf("%d",&M);
		for(j=0;j<M;j++)
		{
			scanf("%d",&x);
			A[x+1000]++;
		}
		for(j=0;j<2001;j++)
		{
			if(A[j]>M/2)
			{
				temp=j-1000;
				flag=1;
				break;
			}
		}
		if(flag)
		{
			printf("YES %d\n",temp);
		}
		else
		printf("NO\n");
	}
	return 0;
}


