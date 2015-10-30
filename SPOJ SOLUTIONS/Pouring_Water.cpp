#include<bits/stdc++.h>
using namespace std;
int pour(int x,int y,int z){
int moves=1,a=x,b=0,temp;
while(a!=z && b!=z){
           temp=min(a,y-b);
           b+=temp;
           a-=temp;
           moves++;
           if(a==z || b==z)
                   break;
           if(a==0){
                    a=x;
                    moves++;
           }
           if(b==y){
                b=0;
                moves++;
           }
     }
     return moves;
}
int main(){
int T,x,y,z;
scanf("%d",&T);
while(T--){
           scanf("%d%d%d",&x,&y,&z);
           if(z>x && z>y)
                  printf("-1\n");
           else if(z%__gcd(x,y) != 0)
                printf("-1\n");
           else if(z==x || z==y)
                printf("1\n");
           else
               printf("%d\n",min(pour(x,y,z),pour(y,x,z)));
}
return 0;
}
