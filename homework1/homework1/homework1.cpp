#include <iostream>
using namespace std;


int main()
{
	float money = 0;
	float cent = 0;
	cout << "Enter count: ", cin >> money;
	int dollars = int(money);
	int c = (money - dollars) * 100;
	
	cout << dollars << "dollar" << endl;
	cout << c << "cent" << endl;

}


