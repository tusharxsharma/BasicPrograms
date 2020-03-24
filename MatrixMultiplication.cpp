#include <iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	cout<<"Enter first matrix : \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter second matrix : \n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"1st Matrix is \n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			{
				cout<<a[i][j]<<"  ";
			}
			cout<<"\n\n";

	}
	cout<<"2nd Matrix is \n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<"  ";
		}
		cout<<"\n\n";
	}
	for(i=0; i<3; ++i)
	{
      	for(j=0; j<3; ++j) 
      	{
            c[i][j] = 0;
        }
    }
    for(i=0; i<3; ++i)
      	{ 
      		for(j=0; j<3; ++j)
      	 	{
            	for(k=0; k<3; ++k)
            	{
               		c[i][j]+=a[i][k]*b[k][j];
            	}
			}
		} 
		cout<<"Product of 2 Matrix is \n\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
 			{
 				cout<<c[i][j]<<"  ";
 			}
 			cout<<"\n\n";

		}
	} 
