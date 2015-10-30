#include<bits/stdc++.h>
using namespace std;
int C[2001][2001];
int main(){
	int N,v;
	int A[2001];
	cin>>N;
	for(int i=0;i<N;++i){
		cin>>A[i];
		C[i][i]=N*A[i];
	}
	for(int i=N-2;i>=0;--i){
		for(int j=i+1;j<N;++j){
			v=N-j+i;
			C[i][j]=max(C[i+1][j]+(v)*A[i] , C[i][j-1]+(v)*A[j]);
		}
	}
	cout << C[0][N-1] << "\n";
return 0;
}
