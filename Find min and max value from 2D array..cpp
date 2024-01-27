#include<iostream>
using namespace std;
int main()
{
	int ar[10][10],i,j,r,c,max,min;
	cout<<"Enter row and column: ";
	cin>>r>>c;
	cout<<"Enter elements: ";
	for(i=0;i<=r-1;i++)
	for(j=0;j<=c-1;j++)
	{
	cin>>ar[i][j];	
	}
	max=min=ar[0][0];
	for(i=0;i<=r-1;i++)
	for(j=0;j<=c-1;j++)
	{
		if(ar[i][j]>max)
		max=ar[i][j];
		else
		if(ar[i][j]<min)
		min=ar[i][j];
	}
	cout<<"\n" " Maximum element is "<<max;
	cout<<"\n" " Minimun element is "<<min;
	return 0;
}
