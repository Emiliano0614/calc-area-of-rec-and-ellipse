/////////////////////////////////////////////////////////////////////
//
// Name: Emiliano Prado
// Due date:10/9/24
// Class: CSCI 1470.02
// Semester: fall 2024
// CSCI 1370 Instructor: Mr. Gustavo Dietrich

//************************  Function definitions  *************************
// Read the handout carefully for detailed description of the functions that you have to implement
#include <fstream>
#include <typeinfo>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// round_off(): Rounds the value received in the first parameter to the number of digits received in the second parameter
double round_off(double value, int digits) {
    return round(value * static_cast<double>(digits))/10.;
}
// getData(): Gets two lengths from the keyboard and returns them to the caller
double getData(double & par1,  double & par2){
    cout << "Please enter two lengths ";
    cin >> par1 >> par2;
    cout << endl;
    return par1, par2;
}

// printData(): Receives the output file, base of the rectangle, height of the rectangle, area of the rectangle,
// radius a of the ellipse, radius b of the ellipse, and area of the ellipse and prints the output to the file
void printData(ofstream & oFile,double b,double h,double ar,double ra,double rb,double ae){
    cout << fixed << setprecision(2);
    oFile << fixed << setprecision(2);
    cout << "The area of the rectangle with base " << b  << " and height "  <<h <<" is " << ar << endl << endl;
    cout << "The area of the ellipse with radius " << ra  <<" and radius " << rb <<" is "  <<ae << endl <<endl;
    oFile << "The area of the rectangle with base "  << b  << " and height "<<h << " is "  << ar << endl << endl;
    oFile <<"The area of the ellipse with radius "  << ra  <<" and radius " << rb <<  " is "  <<ae << endl <<endl;


}


// area_rectangle(): Calculates the area of the rectangle and returns it rounded to 1 decimal digit to the caller
double area_rectangle(double b, double h ){
    double arear = b * h;
    return round_off (arear, 10.);
}

// area_ellipse(): Calculates the area of the area_ellipse and returns it rounded to 1 decimal digit to the caller
double area_ellipse(double ra, double  rb ){

    double areae = PI * ra * rb;
    return round_off(areae, 10.);
    //round ( areae / 1.)*1.;
    
}
