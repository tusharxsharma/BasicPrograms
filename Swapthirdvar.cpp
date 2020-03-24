#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter Number a : ";
	cin>>a;
	cout<<"Enter Number b : ";
	cin>>b;
		a=a+b;
		b=a-b;
		a=a-b;
	cout<<"Swapped Numbers are : \n";
	cout<<"a : "<<a<<"\n";
	cout<<"b : "<<b;
} 
