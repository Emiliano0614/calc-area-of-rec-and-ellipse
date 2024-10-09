#include <fstream>
#include <typeinfo>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double round_off(double value, int digits) {
    return round(value * static_cast<double>(digits))/10.;
}
double getData(double & par1,  double & par2){
    cout << "Please enter two lengths ";
    cin >> par1 >> par2;
    cout << endl;
    return par1, par2;
}

void printData(ofstream & oFile,double b,double h,double ar,double ra,double rb,double ae){
    cout << fixed << setprecision(2);
    oFile << fixed << setprecision(2);
    cout << "The area of the rectangle with base " << b  << " and height "  <<h <<" is " << ar << endl << endl;
    cout << "The area of the ellipse with radius " << ra  <<" and radius " << rb <<" is "  <<ae << endl <<endl;
    oFile << "The area of the rectangle with base "  << b  << " and height "<<h << " is "  << ar << endl << endl;
    oFile <<"The area of the ellipse with radius "  << ra  <<" and radius " << rb <<  " is "  <<ae << endl <<endl;


}


double area_rectangle(double b, double h ){
    double arear = b * h;
    return round_off (arear, 10.);
}

double area_ellipse(double ra, double  rb ){

    double areae = PI * ra * rb;
    return round_off(areae, 10.);
    //round ( areae / 1.)*1.;
    
}
