#include<iostream>
using namespace std;
int main()
{
	int num,first=0,second=1,next;
	cout<<"Enter the number of times you want to print the fibonacci series \n";
	cin>>num;
	cout<<"Fibonacci Series \n";
	for(int i=0;i<num;i++)
	{
	 cout<<first<<"\n";
	 next=first+second;
	 first=second;
	 second=next;
	}
return -1;
}
 
