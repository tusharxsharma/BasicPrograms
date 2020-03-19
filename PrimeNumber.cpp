#include<iostream>
using namespace std;
int main()
{
	int n , x; 
	cout <<"Enter the number : \n";
	cin>>n;
	for(x=2;x<n;x++)
	{
		if(n%x==0)
		{
			cout<<"Not Prime Number";
			exit(0);
		}
		else 
		{
			cout<<"Prime Number";
			exit(1);
		}
	}
}
