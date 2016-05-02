// My first If else statement, for loop, and while loop
#include <iostream>
using namespace std;

int main() 
{
	int num;
	cout << "Enter an integer between 1 and 100: ";
	cin >> num;
	
	if (num > 50) {
		for(int i=num; i<100; i++) {
			cout << "You will see me " << 100-i << " more times\n";
		}
	}
	else {
		while (num < 50) {
			cout << "You will see me " << 50-num << " more times\n";
			num++;
		}
	}
}
