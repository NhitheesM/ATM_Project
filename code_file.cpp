#include<iostream>
#include<conio.h>

using namespace std;

/* Mini Project - ATM
   -> Check Balance
   -> Cash Withdraw
   -> Cash Deposit
   -> User Details
   -> Update Mobile No.
*/

// class Account
class Account{
	//private members
	private:
		long  int accno,passw,balance;
		long long int mobno;
		string uname;
	
	//public members	
	public:
		
		// Account constructor
		Account(long int a,string b,long int c,long long int d, long int e){
			accno=a;
			uname=b;
			passw=c;
			mobno=d;
			balance=e;
		}
		
		// function for getting balance
		int getBalance(){
			return balance;
		}
		
		// function for getting account number
		int getAccnum(){
			return accno;
		}
		
		// function for getting password
		int getPword(){
			return passw;
		}
		
		// function for getting mobile number
		long long int getMobnumber(){
			return mobno;
		}
		
		// function for changing mobile number
		void setMobnumber(long long int mno){
			mobno=mno;
			cout<<"\n\nYour Notifications will be sent to the mobile number "<<mobno<<endl;
		}
		
		// function for getting details of the account
		void getDetails(){
			cout<<"\n||   Account Details   ||\n\n\nAccount Number : "<<accno<<"\nUsername : "<<uname<<"\nAmount Balance : "<<balance<<"\nMobile Number : "<<mobno<<endl;	
		}
		
		// function for withdrawl of the amount
		void withdraw(int amount){
			if(balance>amount){
				balance -= amount;
				cout<<"\n\n\nYour Balance is "<<balance<<" after withdrawl."<<endl<<"!!!! Now Collect Money in the Counter !!!!"<<endl;
			}
			else{
				cout<<"\n\n\n!!!! Balance is insufficient !!!!!\n";
			}
		}
		
		// function for depositing of the amount
		void deposit(int amount){
			balance+=amount;
		}
		
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//main function
int main(){
	int Accnum , Pword;
	
	//assigning value with constructor for Account class
	Account user1(1234567,"Ram",0000,9876543210,45000);
	
	
	cout<<"\n\n\t\t\t\t\t\tWelcome to ABC Bank\t\t\t\t\t\t\t\n\n";
	// Getting account number and its password
	cout<<"\nEnter your Account Number : ";
	cin>>Accnum;
	cout<<"\nEnter your Account's Password : ";
	cin>>Pword;
	//
	do{
		// Checking account authentication
		if(Accnum==user1.getAccnum()){
			if(Pword==user1.getPword()){
				system("cls");
				// User Interface
				cout<<"\n\n\t\t\t\t\t\t||    Welcome to ABC Bank    ||\t\t\t\t\t\t\t\n\n"<<endl;
				cout<<"\n\n\nFunctions Available : \n"<<endl;
				cout<<"1) Check Balance"<<endl;
				cout<<"2) View Account Details"<<endl;
				cout<<"3) Withdraw Amount"<<endl;
				cout<<"4) Deposit Amount"<<endl;
				cout<<"5) Change Notification Mobile number"<<endl;
				cout<<"6) Exit"<<endl;
				int option;
				// Getting user's choice
				cout<<"\n\n\nEnter Option Number : ";
				cin>>option;
				system("cls");
		
				switch(option){
					case 1 :     
						cout<<"\n\n\nYour Account Balance is "<<user1.getBalance()<<endl;
						_getch();
						break;
						                        
						
					case 2 :
						user1.getDetails();              										//calling getDetails function
						_getch();
						break;
						
					case 3 :
						int amt;
						cout<<"\n\n\nEnter Withdrawing Amount : ";
						cin>>amt;
						system("cls");
						user1.withdraw(amt);													//calling withdraw function
						_getch();
						break;
					
					case 4 :
					
						cout<<"\n\n\nEnter Depositing Amount : "<<endl;
						cin>>amt;
						user1.deposit(amt);														//calling deposit function
					
						cout<<"\n\n!!!! Now Deposit in the Counter !!!!"<<endl;
						system("cls");
						cout<<"\n\n\nYour Balance is "<<user1.getBalance()<<" after depositing.";
																								//calling getBalance function
						_getch();
						break;
						
					case 5 :
						long long int oldmobno,newmobno;
						cout<<"\n\n\nEnter Old Mobile number:";
						cin>>oldmobno;
						
						if(oldmobno==user1.getMobnumber()){  
							cout<<"\nEnter New Mobile number:";
							cin>>newmobno;
							system("cls");
							user1.setMobnumber(newmobno);										//calling setMobnumber function
							
						}
						else{
							system("cls");
							cout<<"\n\n\nEnter Valid Mobile number";
						}
						_getch();
						break;
						
					case 6 :
						exit(0);                              									// Exit the interface
					
					default:
						cout<<"!!! Enter Valid Option !!!";
					}
			}
		else{
			cout<<"!!!!!    Enter the Valid Account Number and Password     !!!!!"<<endl;	
		}
	}
	}while(1);
	
	
	
return 	0 ;	
}
