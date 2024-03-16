//Q#1
/*
#include <iostream>
using namespace std;

int main  () {
	
	int num, alpha;
	
	alpha = 10;
	num = 8;
	
	switch (num)
	{
		case 3: alpha++;
		case 4: alpha = alpha + 2;
				break;
		case 8: alpha = alpha + 3;
		default: alpha = alpha + 4;
	}
	cout << alpha << endl; //17
	
	return 0; 
}
*/
/* //THe 2nd half..

#include <iostream>
using namespace std;

int main  () {
	
	int num, alpha;
	
	alpha = 10;
	num = 8;
	
	if (num == 3)
		alpha++;
	
	else if (num == 4)
		alpha = alpha+2;
	
	else if (num == 8) {
		alpha = alpha + 3;
		alpha = alpha + 4;}
	
	cout << alpha << endl;
	
return 0;
}
*/

//Q#2 
/*
#include <iostream>
using namespace std;

int main  () {

int n =3;

	switch (n+1)
	{
		case 2: cout << "First";
		case 4: cout << "Second";
		case 7: cout << "Third";
		case 9: cout << "Fourth";
		default: cout << "Fifth";
	}
return 0;
}
//FirstSecondThirdFourthFifth
*/

//Q#3
/*
#include <iostream>
using namespace std;

int main () {
	
	int n, alpha, beta, gamma, delta;
	
	
	switch (n) {
		case 3: alpha ++;
			break;
		case 7: beta ++;
			break;
		case 10 : gamma++;
			break;
		default : delta ++;
	}
	
	
	return 0;
}
*/

//Q#4 - Write a valid expression
/*
#include <iostream>
#include <cmath>

using namespace std;
int main () {
	
	double a, b, x, abdoo;
	
	sqrt((pow (a,3)/b)+17) / (x + 3);
	
	( (((x+y) / 5 ) + (a+b) / 7) ) / abs (3z)
	
	return 0;
}
*/

//Q#5 idk
/*
#include <iostream>
using namespace std;
int main () {
	
	
	
	return 0;
}
*/

//Q#6
/*
#include <iostream>
using namespace std;

int main () {
	
	float x, z, total;
	char operation;
	
	cout << "Try to calculate anything with 2 numbers " << endl;
	
	cin >> x >> operation >> z;
	
	switch (operation) {
		
		case '+':
			 total = x + z;
				break;
		case '-':
			 total = x - z;
				break;
		case '*': 
			total = x * z;
				break;
		case '/':
			if (z != 0){	
			total = x / z;
			 }else {
			 	cout << "Error Devision by zero !!";
				 return 1; }
		default :
			 cout << "Illigal input" << endl;
			
return 2;
}
	cout << "The result is " << "= " << total << endl;
	
return 0;
}
*/

//Q#7

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	char shape;
	int widgth, length, sArea, rArea;
	
	cout << "Enter S or R " << endl;
	cin >> shape;
	
	switch (shape) {
		
		case 'S':
		case 's': 
			cout << "Enter the length please " << endl;
			cin >> length;
			
			sArea = pow (length , 2);
			cout << "The square area = " << sArea << endl;
			break;
			
		case 'R':
		case 'r':
			cout << "Enter the widgth please " << endl;
			cin >> widgth;
			
			cout << "Enter the length please " << endl;
			cin >> length;
			
			rArea = widgth * length;
			cout << "The rectangle area = " << rArea << endl;
			break;
			
	default: cout << "invalid input !!" << endl;
	
	}
	
	return 0;
}





