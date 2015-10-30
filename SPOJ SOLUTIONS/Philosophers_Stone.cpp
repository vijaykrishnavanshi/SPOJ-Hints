#include <bits/stdc++.h>
using namespace std;
int max3(int a,int b,int c)
{
	int d=max(a,b);
	return max(d,c);
}

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	int N,M;
	cin>>N>>M;
	int A[N][M];
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			cin>>A[i][j];
		}
	}
	for(int i=1;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(j==0)
			{
				A[i][0]+=max(A[i-1][0],A[i-1][1]);
			}
			else if(j==M-1)
			{
				A[i][M-1]+=max(A[i-1][M-1],A[i-1][M-2]);
			}
			else
			{
				A[i][j]+=max3(A[i-1][j-1],A[i-1][j],A[i-1][j+1]);
			}
		}
	}
	int path=0;
	for(int j=0;j<M;j++)
		{
			//if((path==0)||(path>A[N-1][j]))
				{
					path=max(path,A[N-1][j]);
				}
		}
	cout<<path<<endl;
	}
	// your code goes here
	return 0;
}

