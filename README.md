# atm-system
Mini ATM System In C Language.

This is simple atm machine functionality program in c language


# Mini ATM System

This Mini ATM System is a simple console-based program designed to simulate basic ATM functionalities. The user is first prompted to enter their name, and then presented with a menu of options to perform various actions, including:

1. **Balance Enquiry**: Check the current balance in the account.
2. **Withdrawal**: Withdraw a specified amount from the account.
3. **Deposit**: Deposit a specified amount into the account.
4. **Exit**: Exit the program.

## Features
- User-friendly console interface.
- Menu-driven navigation.
- Basic banking functionalities simulated.

## Usage
1. Run the program.
2. Enter your name when prompted.
3. Select an option from the menu by entering the corresponding number.
4. Follow the instructions for each option.
5. Choose option 4 to exit the program.

## Menu Options
### 1. Balance Enquiry
Displays the current balance of the user. The initial balance is set to a default value (e.g., `1000` units).

### 2. Withdrawal
Allows the user to withdraw an amount from their balance. The program will check if sufficient balance is available before processing the withdrawal.

### 3. Deposit
Allows the user to deposit an amount into their balance. The program adds the entered amount to the current balance.

### 4. Exit
Exits the program.

## Example Output
```plaintext
Welcome to the Mini ATM System!
Please enter your name: User
Hello, User! Please choose an option:
1. Balance Enquiry
2. Withdrawal
3. Deposit
4. Exit

Enter your choice: 1
Your current balance is: 1000

Enter your choice: 2
Enter the amount to withdraw: 200
Withdrawal successful! Your new balance is: 800

Enter your choice: 3
Enter the amount to deposit: 500
Deposit successful! Your new balance is: 1300

Enter your choice: 4
Thank you for using the Mini ATM System. Goodbye, User!
```

## How to Run
1. Clone the repository from GitHub.
2. Ensure you have Python installed on your system.
3. Run the script using the command:
   ```bash
   C mini_atm.c
   ```

## Contributing
Feel free to fork the repository and submit pull requests for improvements or additional features.

## License
This project is licensed under the MIT License.
