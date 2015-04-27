#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "        ***************** WELCOME TO THE CAPNIZY ATM MENU***************** \n\n"<<endl;
    cout << "                             HOW CAN I HELP YOU?" <<endl;

    cout << "1. Withdraw Money \n";
    cout << "2. Deposit Money \n";
    cout << "3. Create and Account \n";
    cout << "4. Send Money \n";
    cout << "5. Help \n\n\n";

    int Withdraw_Money;
    int Deposit_Money;
    int Create_Account;
    int Send_Money;
    int Help;
    int Choice;
    int withdrawn;
    int deposited;
    string names;
    int pin;
    int send;
    string reciever;
    int balance;


    cout << "Enter what you want (NUMERIC) " <<endl;
    cin >> Choice;

    switch (Choice)
    {
    case 1:
        cout << "How Much Do you want to WITHDRAW?  (You currently 10,000)" << endl;
        cin >> Withdraw_Money;
        withdrawn = (10000 - Withdraw_Money) - 25;
        cout << "you have withdrawn " << Withdraw_Money << " your new balance is " << withdrawn << endl;
        cout << "25 is VAT" << endl;
        cout << "New Balance: " << withdrawn <<endl;
        cout << "--------------- ThANKS FOR USING CAPNIZY ATM---------------- \n          for any questions call +25405123289" <<endl;
    break;

    case 2:
        cout << "How Much Do you want to DEPOSIT  (you currently have 10,000)" <<endl;
        cin >> Deposit_Money;
        deposited = Deposit_Money + 10000;
        cout << "you have deposited " << Deposit_Money <<endl;
        cout << "your new Balance is: " << deposited << endl;
        cout << "--------------- ThANKS FOR USING CAPNIZY ATM---------------- \n          for any questions call +25405123289" <<endl;
    break;

    case 3:
        cout << "Enter you First and Last Name"<<endl;
        cin >> names;
        cout << "enter you pin" << endl;
        cin >> pin;
        cout << "thanks for registering with us " <<endl;
        cout << "Your account name is " << names << "and your pin is " << "****" <<endl;
        cout << "YOUR PIN IS YOUR SECRET!!" <<endl;
    break;

    case 4:
        cout << "Enter the amount of money you want to send" <<endl;
        cin >> send;
        cout << "enter the account number of the recipient" << endl;
        cin >> reciever;
        balance = 10000 - send;
        cout << "you have send " << send << "to " << reciever <<endl;
        cout << "you current balance: " << balance <<endl;
        cout << "--------------- ThANKS FOR USING CAPNIZY ATM---------------- \n          for any questions call +25405123289" <<endl;
    break;


    case 5:
        cout << "Call this Number +254705123289" << endl;
    break;

    default:
        cout << "sorry i don't understand that!!!!!!" << endl;
    }


}
