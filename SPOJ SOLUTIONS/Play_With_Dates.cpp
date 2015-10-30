#include <iostream>
using namespace std;
string Days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int DaysInMonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int check_leap(int Year){
   
   if((Year%400==0)||(Year%4==0&&Year%100))
      return 1;
  
   else return 0;

}

int calculate(int day,int month,int year)
{
	int days=0;
	for(int i=0;i<month;i++)
	{
		days+=DaysInMonth[i];
	}
	if((month>2)&&check_leap(year))
	{
		days++;
	}
	days+=(year-2012)*365;
	for(int i=2012;i<year;i++)
	{
		if(check_leap(i))
		days++;
	}
	days+=(day-1);
	return days%7;
}

int main() {
	int N,day,month,year;
	cin>>N;
	while(N--)
	{
		cin>>day>>month>>year;
		cout<<Days[calculate(day,month,year)]<<endl;
	}
	// your code goes here
	return 0;
}
