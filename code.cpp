#include<bits/stdc++.h>
using namespace std;

class Bank 
{
    private :
    char name[15];
    char account_no[11];
    char account_type[12];
    int initial_amt , deposit_amt , withdraw_amt;
    
    public:
    
    Bank()
    {
        name[15] =  ' ';
        account_no[11] = ' ';
        account_type[12] = ' ';
        initial_amt = 1000;
    }
    
    void menu();
    void create();
    void deposit();
    void withdraw();
    void display_acct_details();
    void check();
};

void Bank::menu()
{
    cout<<"********************************************************************************************************"<<endl;;
    cout<<"\t\t\t********************* BANK MANAGEMENT SYSTEM********************************* \n\n";
    int choice;
    cout<<"Choose from the menu below: "<<endl;
    cout<<"\t\t 1. Create an account "<<endl;
    cout<<"\t\t 2. Deposit balance "<<endl;
    cout<<"\t\t 3. Check balance "<<endl;
    cout<<"\t\t 4. Withdraw balance "<<endl;
    cout<<"\t\t 5. Accountholder's detail "<<endl;
    cout<<"\t\t 6. EXIT"<<endl;
    cout<<"*********************************************************************************************************"<<endl;

    cin>>choice;
    
    if(choice == 1)
    {
        create();
        menu();
    }
    else if(choice == 2)
    {
        deposit();
        menu();
    }
    else if(choice == 3)
    {
        check();
        menu();
    }
    else if(choice == 4)
    {
        withdraw();
        menu();
    }
    else if(choice == 5)
    {
        display_acct_details();
        menu();
    }
    else
    {
        exit(0);
    }
}

void Bank::create()
{  
   cout<<"Enter the name: ";
   cin>>name;
   
   cout<<"Enter the account number: ";
   cin>>account_no;
   
   cout<<"Enter the account type: ";
   cin>>account_type;
}

void Bank::deposit()
{
    cout<<"Enter the deposit amount: ";
    cin>>deposit_amt;
}

void Bank::check()
{
    cout<<"Total Balance is "<<initial_amt<<endl;
}

void Bank::withdraw()
{
    cout<<"Enter the withdraw amount: ";
    cin>>withdraw_amt;
    
    if(withdraw_amt>initial_amt)
    {
        cout<<"Insufficient amount"<<endl;
    }
    else 
    {
        initial_amt=initial_amt-withdraw_amt;
    }
}

void Bank::display_acct_details()
{
    cout<<"\t\t TRANSACTION DETAILS \n\n";
    cout<<"\t\t Name: "<<name<<endl;
    cout<<"\t\t Account Number: "<<account_no<<endl;
    cout<<"\t\t Account Type: "<<account_type<<endl;
    cout<<"\t\t Total Amount Available"<<initial_amt;
}

int main()
{
    Bank b;
    b.menu();
    b.create();
    b.deposit();
    b.check();
    b.withdraw();
    b.display_acct_details();
    
}

