#include<iostream>
using namespace std;
int main()
{
	int num,digit,rev=0;
	cout<<"Enter the number to be reversed: ";
	cin>>num;
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	cout<<"The reversed number is :"<<rev;
	
	return -1 ;
} 
