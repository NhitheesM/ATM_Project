# ATM_Project
This C++ code is a simple implementation of an ATM (Automated Teller Machine) program using object-oriented programming concepts. The program simulates basic functionalities of an ATM, including checking balance, cash withdrawal, cash deposit, viewing user details, and updating the mobile number.

Let's go through the code step by step:

1. The code defines a class named `Account`, which represents an account with private data members for account number, password, balance, mobile number, and username.

2. The `Account` class has a constructor that initializes the account details with the provided values.

3. Public member functions in the `Account` class include:

- `getBalance()`: This function returns the account balance.
- `getAccnum()`: This function returns the account number.
- `getPword()`: This function returns the account password.
- `getMobnumber()`: This function returns the mobile number.
- `setMobnumber(long long int mno)`: This function allows the user to update the mobile number.
- `getDetails()`: This function displays the details of the account, including the account number, username, balance, and mobile number.
- `withdraw(int amount)`: This function allows the user to withdraw a specified amount from the account, given that the balance is sufficient.
- `deposit(int amount)`: This function allows the user to deposit a specified amount into the account.

4. The `main()` function serves as the entry point of the program. It creates an `Account` object called `user1` with some initial values.

5. The main part of the program is a loop that keeps the ATM interface running until the user chooses to exit.

6. The user is prompted to enter their account number and password.

7. If the account number and password match the ones stored in the `user1` object, the user is granted access to the ATM functionalities.

8. The user is then presented with a menu of options: check balance, view account details, withdraw amount, deposit amount, change mobile number, and exit.

9. Based on the user's choice, the program performs the corresponding action by calling the appropriate member functions of the `Account` class.

10. The program also provides appropriate feedback and messages to the user throughout the interface.

Please note that this code is intended for educational purposes and does not involve actual account management or security features that would be necessary in a real-world banking system. Additionally, this code does not include any data storage or persistence, so the account information will be lost once the program terminates.
