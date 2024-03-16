//Q#1
/*
#include <iostream>
using namespace std;
int main () {
	//Iam sleepy... hope this is good enough x_x
	int i, sum;
	
	i = sum = 0;
	
	while ( i <= 10)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
			
		}
		i = i + 1;
	}
	
	cout << "The sum of all even numbers = " << sum << endl;
	
	
	return 0;
}
*/

//Q#2
/*
#include <iostream>
using namespace std;
int main () {
	
	int n = 1;
	
	while ( n < 15)
	{
		if (n % 2 == 0)
			cout << n << " ";
		
		n ++;
	}	
	cout << endl;
	
	
	return 0;
}
*/

//Q#5
/*
#include <iostream>
using namespace std;
int main () {
	
	int x;
	int count = 0;
	
	cout << "Enter your values, -value to stop " << endl;
	cin >> x;
	
	while ( x >= 0 ) {
		if ( x == 7) {
			count ++;
		}
		cin >> x;
	}
	cout << "The number of occurrences of the value 7: " << count << endl;
	
	return 0;
}
*/

//Q#6
/*
#include <iostream>
using namespace std;
int main () {

	int x;
	int count = 0;
	
	cout << " Enter positive numbers to check how many can be divisibled by 3 and 7 " << endl;
	cin >> x;
	
	while ( x >= 0) {
		if ( x % 7 == 0 && x % 3 == 0) {
			count ++;
		}
		cin >> x;
	}
	cout << count << endl;



return 0;
}
*/

//Q#7 "Loved it so much !! "

/*
#include <iostream>
using namespace std;
int main () {


int n, x, average;
int counter = 0;
int count = 0;
int sum = 0;

	cout << "Enter the number of values you wish to input: " << endl;
	cin >> n;

	cout << "Enter your " << n << " values: " << endl;
	
	while ( counter < n ) {
		cin >> x;
		if ( x % 2 == 0) {
			sum = sum + x;
			count ++;
		}
		counter ++;
	}
	if (sum == 0) {
		cout << "No even values were entered" << endl;
		return 1;
	}
	if (count == 0) {
		cout << "You cant devide by zero " << endl;
		return 2;
	}
	average = sum / count;
	cout << "The average of the even values entered = " << average << endl;
	
	
return 0;
}
*/

//Q#8
/*
#include <iostream>
using namespace std;

int main () {

int largest, n, x;

cin >> n;

while ( x >= 0) {
	cin >> x;
	
		if ( n > x ) 
			largest = n;

		else if (x > n)
			largest = x;
	
		else 
			cout << "Same Same";
	
	cin >> n;	
}


return 0;
}
*/



#include <iostream>
using namespace std;

int main () {
    int largest = 0; // Initialize largest to 0

    int n, x;
    cin >> n;

    while (n >= 0) { // Corrected condition
        cin >> x;

        if (x > largest) { 
            largest = x; // Update largest if the new value is greater
        }

        cin >> n;
    }

    cout << "The largest value entered is: " << largest << endl;

    return 0;
}


//Own program to calculate Major ratio to university students count 😍
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	cout << fixed << setprecision (2);
	
	
	float x;
	int y;
	float total;
	
	cout << "Enter students count in University" << endl;
	cin >> x;
	
	cout << "Enter students count in your major" << endl;
	cin >> y;
	
	total = ( y / x) * 100;
	
	cout << "The ratio of students in your major for the university = " << "%" << total <<endl;
	
	
	
	return 0;
}
*/
















