// My solution
/* Implement a C++ class called BankAccount with private data members balance and accountNumber. Create a friend function named transferFunds outside the class, 
which takes two BankAccount objects as parameters and transfers a specified account from one account to another, updating their balances accordingly. */

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	private:
		int balance, acc_number;

	public:

		void setData(int b, int ac_no) {
			balance = b;
			acc_number = ac_no;
		}

		void displayData() {
			cout << "\nBalance: " << balance << endl;
			cout << "Account Number: " << acc_number << endl;
		}

		friend void transferFunds(BankAccount A, BankAccount B);
};

void transferFunds(BankAccount A, BankAccount B) {
	int amt;
	cout << "\nTransferring funds from Account " << A.acc_number << " to Account " << B.acc_number << endl;
	cout << "Enter amount: ";
	cin >> amt;
	if(amt > A.balance) 
		cout << "Insufficent Funds.";
	else {
		A.balance -= amt;
		B.balance += amt;
		cout << "\nTransfer of Funds Successfull!\n";
	}
	cout << "Balance in " << A.acc_number << " is : " << A.balance << endl;
	cout << "Balance in " << B.acc_number << " is : " << B.balance << endl;
}

int main() {
	BankAccount A, B;
	A.setData(50000, 123);
	A.displayData();
	B.setData(10000, 999);
	B.displayData();
	transferFunds(A, B);

	return 0;
}
