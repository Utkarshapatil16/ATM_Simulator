#include <iostream>

using namespace std;

int main()
{
   int pin = 1234;
   int enteredPin;
   int choice;
   int balance = 1000;
   int deposit ,withdraw;

   cout<<"==== ATM SIMULATOR ===="<<
   endl;
   cout<<"Enter your PIN:";
   cin>>enteredPin;

   if(enteredPin != pin){
    cout<<"Wrong PIN.Access Denied!" <<endl;
    return 0;
   }
   do{
        cout<<"1.Check Balance" <<endl;
        cout<<"2.Deposit Money" <<endl;
        cout<<"3.Withdraw Money" <<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice:";
        cin>>choice;

   if(choice == 1){
         cout<<"Your balance is:"<<balance <<endl;
   }
   else if(choice == 2){
        cout<<"Enter amount to deposit:";
        cin>>deposit;
        balance = balance + deposit;
        cout<<"New balance:" <<balance<<endl;
   }
   else if(choice == 3){
        cout<<"Enter amount to withdraw:";
        cin>>withdraw;

    if(withdraw > balance){
        cout<<"Insufficient balance !"<<endl;
    }
    else
    {
    balance = balance - withdraw;
    cout<<"New balance:" <<balance << endl;
    }
    }
    else if (choice == 4)
    {
        cout<<"Thank you for using ATM!"<<endl;
    }
    else {
        cout<<"Invalid choice!"<<endl;
    }

    return 0;
   }
   while(choice !=4);
   }




