#include "main.hpp"

int main()
{
	int n1, n2, n3, n4;

	n1 = 10;
	n2 = 20;
	n3 = 30;
	n4 = 40;

	cout << "Original Values are " << n1 << "\t" << n2 << "\t" << n3 << "\t" << n4 << endl;

	swapValues(n1, n2);
	cout << "After changing two value n1 and n2 " << n1 << "\t" << n2 << endl;
	swapValues(n1, n2, n3);
	cout << "After changing three value n1, n2 and n3 " << n1 << "\t" << n2 << "\t" << n3 << endl;
	swapValues(n1, n2, n3, n4);
	cout << "After changing four value n1, n2, n3 and n4 " << n1 << "\t" << n2 << "\t" << n3 << "\t" << n4 << endl;
}