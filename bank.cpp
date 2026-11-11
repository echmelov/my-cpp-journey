#include <iostream>
#include <vector>
class bankAccount {
protected:
	double* balance;
public:
	bankAccount(double startAmount) {
		balance = new double(startAmount);
	}
	virtual void deposit(double amount) {
		*balance += amount;
	}
	void printBalance() {
		std::cout << *balance << '\n';
	}
	virtual ~bankAccount() {
		delete balance;
	}
};

class BusinessAccount : public bankAccount {

public:
	BusinessAccount(double startAmount) : bankAccount(startAmount) {};
	void deposit(double amount) {
		*balance += amount - 10;
	}
};

int main() {
	std::vector<bankAccount*> accounts;
	accounts.push_back(new bankAccount(1000));
	accounts.push_back(new BusinessAccount(1000));

	for (int i = 0; i < accounts.size(); i++) {
		accounts[i]->deposit(1000);
		accounts[i]->printBalance();
	}

	for (int i = 0; i < accounts.size(); i++) {
		delete accounts[i]; // Благодаря virtual ~bankAccount() удалятся и дети!
	}
}
