#include <iostream>
using namespace std;

class Bank
{
    string name;
    int acc_no;
    string type;
    float balance;
    int temp;

public:
    void opening()
    {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your Account Number" << endl;
        cin >> acc_no;
        cout << "Enter your account type" << endl;
        cin >> type;
        cout << "Enter balance" << endl;
        cin >> balance;
    }

    void deposit()
    {
        cout << "Your current balance is =" << balance << endl;
        cout << "Enter the balance you want to deposit " << endl;
        cin >> temp;
        balance = balance + temp;
    }

    void withdrawal()
    {
        cout << "Your current balance is =" << balance << endl;
        cout << "Enter the balance you want to withdraw" << endl;
        cin >> temp;
        balance = balance - temp;
    }

    void display()
    {
        cout << "Your account balance is=" << balance << endl;
    }
};

int main()
{
    Bank op;
    while (1)
    {
        char ch;
        cout<<"1.opening"<<endl<<"2.deposit"<<endl<<"3.withdraw"<<endl<<"4.display"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch (ch)
        {
        case '1':
            op.opening();
            break;
        case '2':
            op.deposit();
            break;
        case '3':
            op.withdrawal();
            break;
        case '4':
            op.display();
            break;
        default:
            exit(0);
        }
    }
}
