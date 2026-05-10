#include <iostream>
using namespace std;

class Bankaccount
{
private:
    double balance;

public:
    Bankaccount(double bal);

    void display();
};

Bankaccount::Bankaccount(double bal)
{
    balance = bal;
}

void Bankaccount::display()
{
    cout << balance << endl;
}

int main()
{
    Bankaccount accounta(500);
    Bankaccount accountb(1200);
    Bankaccount accountc(50);

    cout << "Account A Balance: ";
    accounta.display();

    cout << "Account B Balance: ";
    accountb.display();

    cout << "Account C Balance: ";
    accountc.display();
    return 0;
}