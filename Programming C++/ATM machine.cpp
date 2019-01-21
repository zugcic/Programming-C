/*
It is necessary to implement a simple ATM operations program. Suppose the user initially has 10,000 kn.
The operations are as follows.
1. Checking the status of your account
2. Raise cash - if the raise went up in minus to ban the operation
3. Cash payment
4. Exit
Operation is performed according to the selected option.
For operations 2 and 3 make special functions. For function 2, 
the function checks to see if the raise of the desired amount enters the minus. 
If no new balance is entered, otherwise it signals that surgery is not possible. 
For operation 3, the function of the new state account.
Before the operation, make a PIN check. Suppose the PIN = 1111. If the user entered the wrong pin 3 times, enter the message "Blocked Card" and exit completely from the program.
Enable the user for more consecutive operations.*/
#include<iostream>
class Bank_account {
	double money;
	int pin = 1111;
	~Bank_account() {}
public:
	Bank_account(double money) :money(money) {}
	void check_status() {
		std::cout << "You have " << money << "kn" << std::endl;
	}
	void raise_cash() {
		if (this->money < 0) {
			std::cout << "You don't have enough money" << std::endl;
			check_status();
		}
		double amount;
		std::cout << "Enter amount to raise->";
		std::cin >> amount;
		if (amount > this->money) {
			std::cout << "You don't have enough money" << std::endl;
			check_status();
			return;
		}
		this->money -= amount;
		std::cout << "Take cash..." << std::endl;
		check_status();
	}
	void cash_payment() {
		double amount;
		std::cout<<"Enter amount to payment->";
		std::cin >> amount;
		this->money += amount;
		check_status();
	}
	bool check_PIN(int pin) {
		if (this->pin == pin)
			return true;
		else
			return false;
	}
};

int main() {
	Bank_account *b = new Bank_account(10000.00);
	int operation;
	int pin;
	int error=0;
	while (error < 3) {
		std::cout << "Enter PIN->";
		std::cin >> pin;
		if (b->check_PIN(pin)) {
			while (true) {
				std::cout << "Enter operation->";
				std::cin >> operation;
				switch (operation) {
				case 1:
					b->check_status();
					continue;
				case 2:
					b->raise_cash();
					continue;
				case 3:
					b->cash_payment();
					continue;
				case 4:
					return 0;
				}
			}
		}
		else {
			++error;
			if (error == 3) {
				std::cout << "Blocked Card" << std::endl;
			}
			continue;
		}
	}
	return 0;
}