//This is a Simple menu driven calculator program.

#include <iostream>
using namespace std;

int main() {

int operation, num_1, num_2;

cout << "\n---------------" << endl;
cout << "Choose your operation 
\n(Type number in front)\n"<<endl;
cout << "1 -> Addition\n2 -> Subtraction\n3 -> Multiplication\n4 -> Division"endl;
cout << "Enter choice: ";
cin >> operation;

switch (operation) {
case 1: {
cout << "\nEnter 2 numbers: ";
cin >> num_1 >> num_2;

cout << "\nSum is: " << num_1 + num_2 << endl;

break;
}

case 2: {
cout << "\nEnter 2 numbers: ";
cin >> num_1 >> num_2;

int option;
cout << "1 -> (1st - 2nd)\n2 -> (2nd - 1st)\nEnter choice: ";
cin >> option;

if (option == 1)
cout << "\nSubtraction is: " << num_1 - num_2 << endl;
else if (option == 2)
cout << "\nSubtraction is: " << num_2 - num_1 << endl;
else
cout << "\nInvalid" << endl;

break;
}

case 3: {
cout << "\nEnter 2 numbers: ";
cin >> num_1 >> num_2;

cout << "\nProduct is: " << num_1 * num_2 << endl;

break;
}

case 4: {
cout << "\nEnter 2 numbers: ";
cin >> num_1 >> num_2;

int option;
cout << "1 -> (1st / 2nd)\n2 -> (2nd / 1st)\nEnter choice: ";
cin >> option;

if (option == 1) {
if (num_2 != 0) {
cout << "\nQuotient is: " << num_1 / num_2;
cout << "\nRemainder is: " << num_1 % num_2 << endl;
} 
else
cout << "\nError: Division by zero!" << endl;
} 
else if (option == 2) {
if (num_1 != 0) {
cout << "\nQuotient is: " << num_2 / num_1;
cout << "\nRemainder is: " << num_2 % num_1 << endl;
} 
else
cout << "\nError: Division by zero!" << endl;
} 
else
cout << "\nInvalid" << endl;

break;
}

default:
cout << "\nInvalid choice" << endl;
}

cin.ignore();
cin.get();
return 0;
}