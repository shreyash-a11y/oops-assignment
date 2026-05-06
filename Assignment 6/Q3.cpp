#include <iostream>
#include <string>

class Account {
private:
    const long accountNumber;
    long transactionID;
    std::string transactionType;
    double balance;

    static long nextTransactionID;

public:

    Account(const long accNo, const double bal)
        : accountNumber(accNo), balance(bal) {

        transactionID = 0;
        transactionType = "None";
    }

    long depositAmount(const long to, const long from, const double amount);

    long creditAmount(const long to, const long from, const double amount);

    void displayDetails() const;
};

long Account::nextTransactionID = 1000;

long Account::depositAmount(const long to, const long from, const double amount) {

    if (accountNumber == to) {

        balance += amount;

        transactionID = ++nextTransactionID;

        transactionType = "Credit";

        std::cout << "Amount Deposited Successfully\n";

        return transactionID;
    }

    return -1;
}

long Account::creditAmount(const long to, const long from, const double amount) {

    if (accountNumber == from && balance >= amount) {

        balance -= amount;

        transactionID = ++nextTransactionID;

        transactionType = "Debit";

        std::cout << "Amount Debited Successfully\n";

        return transactionID;
    }

    return -1;
}

void Account::displayDetails() const {

    std::cout << "\nAccount Number: " << accountNumber << std::endl;
    std::cout << "Balance: " << balance << std::endl;
    std::cout << "Transaction ID: " << transactionID << std::endl;
    std::cout << "Transaction Type: " << transactionType << std::endl;
}

int main() {

    Account a1(1001, 5000);
    Account a2(1002, 6000);
    Account a3(1003, 7000);
    Account a4(1004, 8000);
    Account a5(1005, 9000);

    a1.creditAmount(1002, 1001, 1000);
    a2.depositAmount(1002, 1001, 1000);

    a3.creditAmount(1004, 1003, 1500);
    a4.depositAmount(1004, 1003, 1500);

    a5.creditAmount(1001, 1005, 2000);
    a1.depositAmount(1001, 1005, 2000);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}
