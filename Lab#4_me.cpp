#include <iostream>
using namespace std;

int main()
{
	int num, newNum, first, second, third, fourth;
	
	cout << "Enter a four-digit integer value:  ";
	cin >> num;
	first = num%10;
	second = (num/10)%10;
	third = (num/100)%10;
	fourth = num/1000;
	newNum = first*1000 + second*100 + third*10 + fourth;
	
	cout<< "First number is:  " << num
	    << "\nSecond number is: " << newNum << endl;
		
	return 0; 
}
