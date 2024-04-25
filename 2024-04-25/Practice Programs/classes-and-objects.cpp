#include <iostream>
using namespace std;

class Student 
{
	private:
		int rollNo;
		string name;
		string branch;
		int totalMarks;

	public:
		void get_data()
		{
			cout << "Enter roll no: "; 
			cin >> rollNo;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter branch: ";
			cin >> branch;
			cout << "Enter total marks: ";
			cin >> totalMarks;
		}
		
		void display() 
		{
			cout << "Roll No: " << rollNo << endl;
			cout << "Name: " << name << endl;
			cout << "Branch: " << branch << endl;
			cout << "Total Marks: " << totalMarks << endl; 
		}	
};

class BankAccount
{
	private:
		string name;
		int accountNo;
		string accountType;
		int accBalance;

	public:
		void get_data()
		{
			cout << "Enter Account holder name: ";
			cin >> name;
			cout << "Enter Account number: ";
			cin >> accountNo;
			cout << "Enter Account type: ";
			cin >> accountType;
			cout << "Enter Account Balance: ";
			cin >> accBalance; 
		}
		
		void deposit_amount()
		{
			int deposit_amt;
			cout << "Enter amount to deposit: ";
			cin >> deposit_amt;
			accBalance += deposit_amt;
		}

		void withdraw_amount()
		{
			int withdrawal_amt;
			cout << "Enter amount to withdraw: ";
			cin >> withdrawal_amt;
			if(accBalance < withdrawal_amt)
				cout << "Insufficent Funds!" << endl;
			else
				accBalance -= withdrawal_amt;			
		}
		
		void display() 
		{
			cout << name << endl;
			cout << accBalance << endl;
		}	
};

int main()
{
	Student s1, s2;
	s1.get_data();
	s1.display();
	s2.get_data();
	s2.display();

	BankAccount c1;
	c1.get_data();
	c1.deposit_amount();
	c1.display();
	c1.withdraw_amount();
	c1.display();
}
