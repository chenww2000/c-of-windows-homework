#include<iostream>
using namespace std;
int main()
{
	int nofs, nofr;		//number of space, number of line

	cout<<"Please input the number of space:"<<endl;
	cin>>nofs;
	cout<<"Please input the number of row:"<<endl;
	cin>>nofr;
	//input config
	
	for(int i=0;i<nofr;i++)		//output
	{
		for(int k=0;k<nofr-i-1;k++)	//output the first space
		{
			cout<<" ";
		}
		
		for(int k=0;k<2*i+1;k++)	//output the first
		{
			cout<<"*";
		}
		for(int k=0;k<nofs;k++)	//output the space between
		{
			cout<<" ";
		}
		for(int k=0;k<2*nofr-2*i-1;k++)	//output the second
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}
