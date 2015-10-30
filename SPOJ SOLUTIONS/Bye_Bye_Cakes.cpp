#include <bits/stdc++.h>
using namespace std;

int main() {
	int E,F,S,M,E1,F1,S1,M1,high;
	cin>>E>>F>>S>>M>>E1>>F1>>S1>>M1;
	while(cin && E != -1 && E!=-1 && F!=-1 && S!=-1 && M!=-1 && E1!=-1 && F1!=-1 && S1!=-1 && M1!=-1 )
	{
		high=max(max(ceil((float)E/(float)E1),ceil((float)F/(float)F1)),max(ceil((float)S/(float)S1),ceil((float)M/(float)M1)));
		E=max(0,high*E1-E);
		F=max(0,high*F1-F);
		S=max(0,high*S1-S);
		M=max(0,high*M1-M);
		cout<<E<<" "<<F<<" "<<S<<" "<<M<<endl;
		cin>>E>>F>>S>>M>>E1>>F1>>S1>>M1;
	}
	// your code goes here
	return 0;
}
