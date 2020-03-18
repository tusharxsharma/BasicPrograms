#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0;
	cout<<"Enter the number to check the prime number : \n";
	cin>>n;
	m=n/2;
	for(i=2;i<m;i++)
		if(n%i==0)
			cout<<"It is a prime number";
		else
		{
			cout<<"It is not a prime number";
			cout<<i;
		}
		return 0;
}