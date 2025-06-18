# currency-convertor

Description:
This is a Currency Converter program in C++, which allows users to convert amounts from one currency to another using a menu-driven system. The program supports conversions between the following currencies:

INR (Indian Rupee)
EURO
USD (US Dollar)
DIRHAM
POUND (British Pound Sterling)

⚙️ Features:
✅ Menu-driven interface.
✅ Converts currencies based on user input.
✅ Supports multiple currency conversion choices.
✅ Displays appropriate conversion rates.
✅ Option to exit the program safely.

🖥️ How It Works:
The user is presented with a main menu with 6 options:

INR
EURO
USD
DIRHAM
POUND
Exit

Based on the selected currency, the user enters:

The amount they want to convert.

The target currency to which they want to convert.

The program uses a switch-case structure to calculate and display the converted amount according to the exchange rates coded.

The program will keep running in a while loop until the user chooses the "Exit" option.

🔢 Exchange Rates Used:
From	To	Rate
INR	EURO	0.010
INR	USD	0.012
INR	DIRHAM	0.043
INR	POUND	0.0087
EURO	INR	96.63
EURO	USD	1.13
EURO	DIRHAM	4.15
EURO	POUND	0.84
USD	INR	85.56
USD	EURO	0.88
USD	DIRHAM	3.67
USD	POUND	0.74
DIRHAM	INR	23.30
DIRHAM	EURO	0.24
DIRHAM	USD	0.27
DIRHAM	POUND	0.20
POUND	INR	115.19
POUND	EURO	1.19
POUND	USD	1.35
POUND	DIRHAM	4.94

🚨 Important Notes:
The program uses integer data type (int) for amounts and results. For more accurate conversions (especially with decimals), float or double should be used instead.

The currency exchange rates are hardcoded and may not reflect real-time market values.

Option 6 exits the program.

🛠️ How to Run:
Copy the code into a C++ compiler (e.g., Code::Blocks, Turbo C++, or any online compiler).

Compile and Run the program.

Follow the instructions on the menu to convert currencies.

✅ Example Output:
WELCOME
1. inr
2. euro
3. usd
4. dirham
5. pound
6. exit
choose any one option: 1
enter the amount: 1000
1. euro
2. usd
3. dirham
4. pound
enter the option: 2
1 inr = 0.012 usd
result: 12
🙏 THANK YOU FOR USING THE CURRENCY CONVERTER!
