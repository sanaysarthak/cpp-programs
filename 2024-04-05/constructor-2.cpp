// You are working in a data processing center. Demonstrate a constructor where the input string will be taken by the user and print the number of vowels in it.

#include <iostream>
#include <string>
using namespace std;

class Vowel {
	private:
		string str;

	public:
	    int count = 0;
	    
		Vowel() {
			cout << "Enter the string: ";
			getline(cin, str);
			
			for(int i=0; i<str.length(); i++) {
				char ch = tolower(str[i]);
				if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
					count++;
			}
		}
		
		void display() {
			cout << "The no. of vowels are : " << count;
		}
};

int main() {
	Vowel v1;
	v1.display();
}
