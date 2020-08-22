#include<iostream>
#include<math.h>
using namespace std;
double Money, Irate;
bool IfInt(double num);								//integer judgement
void Input(double* num);
int main() {
	double MoneyAfter;
	cout << "Please input the Money:" << endl;
	cin >> Money;
	Input(&Money);
	cout << "Please input the interest rate:" << endl;
	cin >> Irate;
	Input(&Irate);
	MoneyAfter = round(100 * Money * (1 + Irate / 100)) / 100;
		cout << "The total money afer one year is " << MoneyAfter << "." << endl;
	return 0;
}
bool IfInt(double num) {
	double less;
	less = num - floor(num);
		if (less == 0) {
			return true;
		}
	return false;
}
void Input(double* num) {
	cout << *num;
	while (!IfInt(100 * *num)) {
		cout << "Illgal input, please reenter:" << endl;
		cin >> *num;
	}
}