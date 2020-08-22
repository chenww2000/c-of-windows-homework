#include<iostream>
using namespace std;

int main()
{
	int Num, Sum = 0;
	for(int i=0; i<10; i++){
		cin >> Num;
		Sum += Num; 
	}
	cout << Sum << endl;
	return 0;
}
