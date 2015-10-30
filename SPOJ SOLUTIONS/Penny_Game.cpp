#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	string str;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	map <string,int> vij;
	vij["TTT"]=0;
	vij["TTH"]=0;
	vij["THT"]=0;
	vij["THH"]=0;
	vij["HTT"]=0;
	vij["HTH"]=0;
	vij["HHT"]=0;
	vij["HHH"]=0;
	cin>>x;
	cin>>str;
	for(int i=0;i<38;i++)
	{
		vij[str.substr(i,3)]++;
	}
	cout<<x<<" "<<vij["TTT"]<<" "<<vij["TTH"]<<" "<<vij["THT"]<<" "<<vij["THH"]<<" "<<vij["HTT"]<<" "<<vij["HTH"]<<" "<<vij["HHT"]<<" "<<vij["HHH"]<<endl;
}
	return 0;
}
