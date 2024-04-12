// Sir's solution
// Implement a C++ class called BankAccount with private data members balance and accountNumber. Create a friend function named transferFunds outside the class, which takes two BankAccount objects as parameters and transfers a specified account from one account to another, updating their balances accordingly.

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	private:
		float balance;
		string acc_number;

	public:

		BankAccount(float bal, string accNum) : balance(bal), acc_number(accNum) {}

		void displayData() {
			cout << "Account Number: " << acc_number << ", Balance: " << balance << endl;
		}

		friend void transferFunds(BankAccount &from, BankAccount &to, float amount);
};

void transferFunds(BankAccount &from, BankAccount &to, float amount) {
	if(amount <= from.balance) {
		from.balance -= amount;
		to.balance += amount;
		cout << "Transfer Successfull!" << endl;
	}
	else {
		cout << "Insufficient Funds for transfer!" << endl;
	}
}

int main() {
	BankAccount acc1(1000.0, "12345");
	BankAccount acc2(500.0, "67890");
	acc1.displayData();
	acc2.displayData();
	transferFunds(acc1, acc2, 300.0);
	acc1.displayData();
	acc2.displayData();
	return 0;
}