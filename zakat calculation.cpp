
#include <iostream>
using namespace std;
#include<conio.h>

int main()
{
    cout<<"Are you Muslim (y/n):";
	char a;
	cin >> a;
	if(a=='y' || a=='Y')
	{
		cout<<"Enter your total balance: ";
		double balance;
		cin >> balance;
		if (balance >= 500000)
		{
			double zakat = balance * 0.025; // Zakat is 2.5% of total wealth
			cout << "Your Zakat amount is: " << zakat << endl;
		}
		else
		
			cout << "You are not eligible to pay Zakat." << endl;
	}
	else
	{
		cout<<"Zakat is only applicable to Muslims."<<endl;
	}

}
