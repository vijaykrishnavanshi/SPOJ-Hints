#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int L;
	char d[5001];
	unsigned long long int dpp[5001];
	while(true){
		scanf("%s",d);
			if(d[0]=='0') break;
		L = strlen(d);
		dpp[0] = dpp[1] = 1;
		for(int i = 2;i<=L;++i){
			dpp[i] = 0;
			char c1 = d[i-2]-'0', c2 = d[i-1]-'0';
			if(c1==1 || (c1==2 && c2<=6)) dpp[i] += dpp[i-2];
			if(c2!=0) dpp[i] += dpp[i-1];
			}
		printf("%u\n",dpp[L]);
	}
return 0;
}
