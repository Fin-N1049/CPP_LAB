#include <iostream>

class bank
{
private:
    std::string cust_name, password, userpass;
    int acc_no, amount;
    char acc_type;
    int balance;

public:
    void new_acc(int acc_no);
    void withdraw(void);
    void deposit(void);
    void balance_enquiry(void);
    int account_statement(int acc_no);
};

void bank::new_acc(int acc_no)
{
    std::cout << "enter your name: ";
    std::cin >> cust_name;
    std::cout << "enter the type of the account\nenter S for savings\nenter c for cureent account\nenter: ";
    std::cin >> acc_type;
    std::cout << "enter the amount you need to deposit: ";
    std::cin >> balance;
    std::cout << "create a password: ";
    std::cin >> password;
    std::cout << "your account had been created and the account number is :" << acc_no;
}

void bank::withdraw()
{
    std::cout << "enter your password: ";
    std::cin >> userpass;
    if (userpass == password)
    {
        std::cout << "Enter the amount you have to withdraw\n";
        std::cin >> amount;
        if ((balance - amount) > 500)
        {
            balance = balance - amount;
            std::cout << "Rs." << amount << " is withdrawn";
            std::cout << "\nyour current balance=" << balance;
        }
        else
        {
            std::cout << "insufficient balance";
        }
    }
    else
    {
        std::cout << "wrong password";
    }
}

void bank::deposit()
{
    std::cout << "enter your password: ";
    std::cin >> userpass;
    if (userpass == password)
    {
        std::cout << "Enter the amount you have to deposit\n";
        std::cin >> amount;
        balance = balance + amount;
        std::cout << "your current balance is:" << balance;
    }
    else
    {
        std::cout << "wrong password";
    }
}

void bank::balance_enquiry()
{
    std::cout << "enter your password: ";
    std::cin >> userpass;
    if (userpass == password)
    {
        std::cout << "current balance is: " << balance;
    }
    else
    {
        std::cout << "wrong password";
    }
}

int bank::account_statement(int acc_no)
{
    std::cout << "enter your password: ";
    std::cin >> userpass;
    if (userpass == password)
    {
        std::cout << "********\n";
        std::cout << "Your Account Statement is ";
        std::cout << "\nAccount Holder  : " << cust_name;
        std::cout << "\nAccount No      : " << acc_no;
        std::cout << "\nAccount Type    : " << acc_type;
        std::cout << "\nAccount Balance : Rs." << balance;
        std::cout << "\n*********\n";
    }
    else
    {
        std::cout << "wrong password";
    }
}
int main()
{
    int option, amount, acc_no, count = 0;
    std::string choice;
    bank *customer = new bank[100];
    std::cout<<"\nWELCOME TO ABC BANK\n";
    do
    {   
        std::cout << "\n*****MAIN MENU*****\n";
        std::cout << "1.enter 1 for New Account\n2.enter 2 to Withdraw\n3.enter 3 to Deposit\n4.enter 4 to check balance\n5.enter 5 for Account Statement\nenter: ";
        std::cin >> option;

        if (option == 1)
        {
            count++;
            acc_no = count;
            customer[acc_no].new_acc(acc_no);
        }
        else if (option == 2)
        {
            std::cout << "kindly please enter your account number: ";
            std::cin >> acc_no;
            if (acc_no <= count)
            {
                customer[acc_no].withdraw();
            }
            else
            {
                std::cout << "acoount number is invalid, please create an account";
            }
        }
        else if (option == 3)
        {
            std::cout << "kindly please enter your account number: ";
            std::cin >> acc_no;
            if (acc_no <= count)
            {
                customer[acc_no].deposit();
            }
            else
            {
                std::cout << "acoount number is invalid, please create an account";
            }
        }
        else if (option == 4)
        {
            std::cout << "kindly please enter your account number: ";
            std::cin >> acc_no;
            if (acc_no <= count)
            {
                customer[acc_no].balance_enquiry();
            }
            else
            {
                std::cout << "acoount number is invalid, please create an account";
            }
        }
        else if (option == 5)
        {
            std::cout << "kindly please enter your account number: ";
            std::cin >> acc_no;
            if (acc_no <= count)
            {
                customer[acc_no].account_statement(acc_no);
            }
            else
            {
                std::cout << "acoount number is invalid, please create an account";
            }
        }
        else
        {
            std::cout << "invalid input";
        }

        std::cout << "\n\ndo you want to continue(enter yes/no): ";
        std::cin >> choice;
    } while (choice == "yes");

    return 0;
}