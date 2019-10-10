// SDI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct timeType
{
	int hr;
	double min;
	int sec;
};
struct tourType
{
	string cityName;
	int distance;
	timeType travelTime;
};

void tourOut(tourType x)
{
	cout << "City Name: " << x.cityName << endl << "Distance: " << x.distance << endl << "travel time: " << x.travelTime.hr << ":" << x.travelTime.min << ":" << x.travelTime.sec << endl;
}

tourType tourIn()
{
	tourType x;

	cout << "Enter city" << endl;
	cin >> x.cityName;
	cout << endl << "Enter Distance" << endl;
	cin >> x.distance;
	cout << endl << "Enter Time in hours" << endl;
	cin >> x.travelTime.hr;
	cout << endl << "Enter time in minutes" << endl;
	cin >> x.travelTime.min;
	cout << endl << "Enter time in seconds" << endl;
	cin >> x.travelTime.sec;
	cout << endl;
	return (x);
}
int main()
{
	tourType destination{ "Nottingham",130,{3,15} };
	tourOut(destination);
	destination = tourIn();
	tourOut(destination);

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
