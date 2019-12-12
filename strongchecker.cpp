#include<iostream>
using namespace std;
int main()
{
	cout << "\t\t\tStrong Number checker"<<endl<<endl;
	unsigned int n, digit, real, sum = 0, factorial = 1;
	cout << "Enter Number : "; cin >> n;
	real=n;
	while (n!=0)
	{
		digit = n % 10;
		factorial = 1;
		for (int i = digit; i != 0; i--)
		{
			factorial *= i;
		}
		sum += factorial;
		n /= 10;
	}
	if (sum == real)
		cout << "The number is a Strong number ";
	else cout << "The number is not Strong number. ";
	system("pause>0");
}
