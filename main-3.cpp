/////////////////////////////////////////////////////////////////////
//
// Name: Emiliano Prado
// Due date:10/9/24
// Class: CSCI 1470.02
// Semester: fall 2024
// CSCI 1370 Instructor: Mr. Gustavo Dietrich
//
// Using your own words describe below what the program does 
// Program Description: program that calculates the areas of a
//rectangle and of an ellipse and sends the results to an output file.
/////////////////////////////////////////////////////////////////////


#include <typeinfo>				// to be able to use operator typeid
// Include here the libraries that your program needs to compile
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// Declare a global constant named PI equal to 3.141592
double const PI = 3.141592;
// Include here your header file 
#include <fstream>
#include "myfunctions.h"
int main()
{
// Declare variable named outFile to represent the output file
ifstream inFile;							
ofstream outFile;
// Declare variables named base, height, radiusa, and radiusb that hold doble precision numbers
double base, height, radiusa, radiusb;
// Declare variables named rec_area, and elli_area that hold double precision real numbers
 double rec_area, elli_area; 
// Open output file "output9.txt" and relate it to outFile
inFile.open("myfunctions.h");
outFile.open("output9.txt");
//Print on the screen "For the rectangle"
cout << "For the rectangle " << endl;
//Call void function getData() and receive in base and height the two lengths read from the keyboard
 getData(base, height);
//Print on the screen "For the ellipse"
cout << "For the ellipse" << endl;
//Call void function getData() and receive in radiusa and radiusb the two lengths read from the keyboard
getData(radiusa,radiusb );
// Call function area_rectangle() to calculate the area of a rectangle and assign the returned value to rec_area
rec_area = area_rectangle( base, height ); 
//Call function area_ellipse() to calculate the area of an ellipse and assign the returned value to elli_area
elli_area = area_ellipse( radiusa, radiusb) ;
// Call function printData() to print the output to the output file
printData(outFile,base, height,rec_area ,radiusa , radiusb,  elli_area );
// Close the file
inFile.close();
outFile.close();

	// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(PI) == typeid(1.));							// Incorrect data type used for PI
	test(PI == 3.141592);									// Incorrect value used for PI
	test(typeid(base) == typeid(1.));						// Incorrect data type used for base
	test(typeid(height) == typeid(1.));						// Incorrect data type used for height
	test(typeid(radiusa) == typeid(1.));					// Incorrect data type used for radiusa
	test(typeid(radiusb) == typeid(1.));					// Incorrect data type used for radiusb
	test(typeid(rec_area) == typeid(1.));					// Incorrect data type used for rec_area
	test(typeid(elli_area) == typeid(1.));					// Incorrect data type used for elli_area
	test(fabs(area_rectangle(2.33, 3.61) - 8.4) < 0.001);	// Incorrect rounding of area of rectangle
	test(fabs(area_rectangle(2.42, 3.7) - 9.0) < 0.001);	// Incorrect rounding of area of rectangle
	test(fabs(area_ellipse(4.55, 5.95) - 85.1) < 0.001);	// Incorrect rounding of area of ellipse
	test(fabs(area_ellipse(4.61, 6.01) - 87.0) < 0.001);	// Incorrect rounding of area of ellipse

	return 0 ;
}

