//Hack and Bankrupt
//CSC215
//Samael Newgate

#include "stdafx.h"
#include <iostream>

using namespace std;

//Stating the variables used throughout the program
void safeViewAccountBalanceTransaction(int accountBallance, int accountBallanceTwo);
void HackViewAccountBalanceTransaction(int& accountBallanceOne, int& accountBallanceTwo);

int main()
{	//Both the variables used for this program
	//Original values
	int Bank_of_Terror = 666666666;
	int Struggling_Local = 1;
	
	//Prints both orignal values
	cout << "------------------------------" << endl;
	cout << "Original Values: \n";
	cout << "Bank of Terror: " << Bank_of_Terror << "\n";
	cout << "Struggling Local: " << Struggling_Local << "\n";
	cout << "------------------------------" << endl;

	//Prints normal transaction values 
	cout << "\n\n------------------------------" << endl;
	cout << "Normal Transaction: \n";
	safeViewAccountBalanceTransaction(Bank_of_Terror, Struggling_Local);
	cout << "Bank of Terror: " << Bank_of_Terror << "\n";
	cout << "Struggling Local: " << Struggling_Local << "\n";
	cout << "------------------------------" << endl;

	//Prints values after being hacked
	cout << "\n\n------------------------------" << endl;
	cout << "Hacked Transaction: \n";
	HackViewAccountBalanceTransaction(Bank_of_Terror, Struggling_Local);
	cout << "Bank of Terror: " << Bank_of_Terror << "\n";
	cout << "Struggling Local: " << Struggling_Local << "\n";
	cout << "------------------------------" << endl;

	//Stops the program from closing
	system("pause");

	return 0;
}

//Void means the function doesn't return a value
void safeViewAccountBalanceTransaction(int accountBallanceOne, int accountBallanceTwo)
{

	int temp = accountBallanceOne;
	accountBallanceOne = accountBallanceTwo;
	accountBallanceTwo = temp;
}
//Void is used here again
void HackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo)
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;

}