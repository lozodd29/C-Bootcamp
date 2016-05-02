// My first input program
#include <iostream>
using namespace std;

int main() 
{
	cout << "Please enter your age: ";
	int age;
	//request user input from keyboard
	cin >> age;
	//add 1 to their age
	age+=1;
	//print out their age in one year
	cout << "Next year you will be " << age << " years old.";
}
