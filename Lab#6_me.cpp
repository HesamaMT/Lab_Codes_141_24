//Q1
/*
#include <iostream>

using namespace std;

int main ()
{
	float m1, m2, m3, avg;
	cout << "Enter three grades: ";
	cin >> m1 >> m2 >> m3;
	avg = (m1 + m2 + m3)/3;
	if (avg >= 60)
	{
	  avg = avg + 5;
	  cout << "The resulting average is: " << avg << endl;
	  
	}
	else
	if (avg = 90)
		avg = 90 -3;
		if (avg < 90)
		cout << "The student is excellent!" << endl;
	return 0;
}

*/
////////////////////

//Q#3_fixed
/*
#include <iostream>

using namespace std;

int main ()
{
	float m1, m2, m3, avg;
	cout << "Enter three grades: ";
	cin >> m1 >> m2 >> m3;
	avg = (m1 + m2 + m3)/3;
	if (avg < 60)
	{
	  avg = avg + 5;
	  cout << "The resulting average is: " << avg << endl;
	  
	}
	else
	if (avg < 90)
		avg = 90 -3;
		if (avg > 90)
		cout << "The student is excellent!" << endl;
	return 0;
}
*/

//Q#5
/*
#include <iostream> 

using namespace std;

int main () {
	
	int x, y, z;
	bool even1, even2, even3, odd1, odd2, odd3;
	
	
	cout << "Enter 3 digits please ";
	cin >> x >> y >> z;
	
	
	if ( ( x % 2 == 0) ) {
		even1 = true;
}
	else {
		odd1 = true;
}
	if ( ( y % 2 == 0) ) {
	
		even2 = true; 
}
	else {
		odd2 = true;
}
		
	if ( ( z % 2 == 0) ) {
		even3 = true;
}
	else {
		odd3 = true;
}
	
	if ( (even1 == true) && (even2 == true) && (even3 == true) )
		cout << "All are Even digits " << endl;
	
	else if ( ( (odd1 == true) && (odd2 == true) && (odd3 == true) ) )
		cout << "All are odd digits " << endl;
		
	else
		cout << "We got mixed digits here !!" << endl;
		
return 0;	
}
	*/

//Q#6
/*	
#include <iostream>

using namespace std;

int main () {
	
	int x, y, sum, product;
	
	cout << "Enter two numbers please " << endl;
	cin >> x >> y;
	if ( x % 2 == 0 && y % 2 == 0 ) {
	
		sum = x + y;
		cout << "The summation is " << sum;}
		
	else {
		product = x * y;
		cout << "The product is " << product;}
		
	return 0;
}
*/	
/*	
//Q#7

#include <iostream>
	
using namespace std;

int main () {
	
	int x, y, sum, rest;
	
	cout << "Enter 2 degrees please " << endl;
	cin >> x >> y;
	
	sum = x + y;
	rest = 180 - sum;
	
	if ( sum > 180 ) {
		cout << "Sorry but the sum of angles of any triangle is always 180 degrees";
		return 1; }
		
		
	if ( rest < 90 )
		cout << "Acute angle" << endl;
	
	
	else if ( rest > 90 )	
		cout << "Obtuse angle" << endl;
		
		
	else
		cout << "Right angle" << endl;
		
	return 0;
}
*/
	
//Q#8
/*
#include <iostream>

using namespace std;

int main () {
	
	float weight, height, bmi;
	
	cout << "Enter your weight in kg please: ";
	cin >> weight;
	
	cout << "Enter your height in meters please: ";
	cin >> height;
	
	bmi = weight / (height * height);
	
	if ( bmi < 18.5)
		cout << bmi << " Under weight";
	
	if ( bmi >= 18.5 && bmi < 25)
		cout << bmi << " Normal weight";
	
	if ( bmi >= 25 && bmi < 30)
		cout << bmi << " Over weight";
	
	if ( bmi >= 30 )
		cout << bmi << " Obese";
	
	
	return 0;
}
*/







