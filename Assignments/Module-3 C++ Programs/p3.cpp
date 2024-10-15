// Define a class to represent a bank account. Include the following members:
//  Data Member: -
//      a) Name of the depositor -
//      b) Account Number
//      c) Type of Account -
//      d) Balance amount in the account -
//  Member Functions -
//      a) To assign values -
//      b) To deposited an amount -
//      c) To withdraw an amount after checking balance -
//      d) To display name and balance -

#include <iostream>
using namespace std;

class account
{
public:
    int account_number, balance,choice,amount;
    string name, account_type;

    void getdata()
    {
        cout << "Enter Name of depositor : ";
        cin >> name;
        cout << "Enter Acccount number : ";
        cin >> account_number;
        cout << "Enter Account Type : ";
        cin >> account_type;
        cout << "Enter Balance : ";
        cin >> balance;
    }

    void transaction()
    {
        cout << "For Cash Deposit press  1";
        cout << "\nFor Cash Withdraw press  2";
        cout << "\nEnter your choice: ";
        cin >> choice;
        if (choice==1)
        {
            cout << "Enter your amount: ";
            cin >> amount;
            balance += amount;
        }
        else if (choice==2)
        {
            cout << "Enter withdraw amount: ";
            cin >> amount;
            if (balance > amount)
            {
                balance -= amount;
            }
            else
            {
                cout << "\nyour Balance: " << balance;
                cout << "\nyou can not withdraw amount.... \n";
            }
        }
    }

    void printdata()
    {
        cout << "\nName of Depositor : " << name;
        cout << "\nAccount Number : " << account_number;
        cout << "\nAccount Type : " << account_type;
        cout << "\nBalance : " << balance;
    }
};

int main()
{
    account d;
    d.getdata();
    d.transaction();
    d.printdata();

    return 0;
}