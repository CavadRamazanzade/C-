#include <iostream>
using namespace std;


int main()
{
	int num = 0;
	cout << "Enter count", cin >> num;
	int weeks = num / 7;
	int days = num - (weeks * 7);
	cout << weeks << "w\n" << days << "d";
}

