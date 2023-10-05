#include <iostream> // include standard libraries
using namespace std;

void sum();
void sums();
void max();
void maxs();

int main() {
	sum();
	sums();
	max();
	maxs();
}

void sum()
{
	int num1, num2, sum;
	sum = 0;

	cout << "\nSum of 2 numbers\n\n";
	cout << "Insert 2 numbers" << endl << endl;
	cout << "First number: ";
	//cin << num1; errore
	cin >> num1;
	cout << "\nSecond number: ";
	cin >> num2;
	sum = num1 + num2;
	cout << "\n\nThe result is " << sum << "\n\n";

	std::cout << "press any key to exit...";
	// wait for user to hit enter or another key
}

void sums()
{
	int num, sum;

	sum = 0;
	num = 1;
	while (num != 0)
	{
		cout << "\n Digit a number (digit 0 to exit): ";
		cin >> num;
		sum = sum + num;
	}
	cout << "\nThe result is " << sum << endl << endl;

	std::cout << "press any key to exit...";
	// wait for user to hit enter or another key
}

void max()
{
	int num1, num2;

	cout << "\nMax from 2 numbers\n\n";
	cout << "Digit the first number \n\n";
	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;
	//while (num1 < num2); errore
	if(num1 < num2)
		cout << "\n" << num1 << " is greater than " << num2 << "\n\n";
	else {
		cout << num2 << "\n\n";
		cout << "\n" << num1 << " is less or equal than";
	}

std::cout << "press any key to exit...";
// wait for user to hit enter or another key
}

void maxs()
{
	int num, max;

	max = 0;
	num = 1;
	while (num != 0);
	{
		std::cout << "Digit a number (digit 0 to exit):";
		std::cin >> num;
		if (num > max) max = num;
	}
	std::cout << "\nThe max is " << max << "\n";

	std::cout << "press any key to exit...";
	// wait for user to hit enter or another key
//errore
}