#include<bits/stdc++.h>
using namespace std;
int main(){
int T;
scanf("%d",&T);
while(T--){
int M;
scanf("%d",&M);
int temp=M;
long A[M];
while(M--){
scanf("%ld",&A[M]);
}
sort(A,A+temp);
int N;
scanf("%d",&N);
int temp1=N;
long B[N];
while(N--){
scanf("%ld",&B[N]);
}
sort(B,B+temp1);
long int mina=1000000;
//cout<<minabs<<endl;
for(int i=0;i<temp;i++){
for(int j=0;j<temp1;j++){
mina=min(mina,abs(A[i]-B[j]));
//cout<<minabs<<endl;
}
}
printf("%ld\n",mina);
}
return 0;
}
