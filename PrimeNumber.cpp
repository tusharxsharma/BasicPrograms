#include<iostream>
using namespace std;
int main()
{
	int n , x; 
	cout <<"Enter the number : \n";
	cin>>n;
	if(n<2)
		cout<<"Number is lesser than 2 and not applicable";
	else
	{
		for(x=2;x<n/2;x++)
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
}
