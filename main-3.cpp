

#include <typeinfo>				
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



double const PI = 3.141592;
#include <fstream>
#include "myfunctions.h"
int main()
{
ifstream inFile;							
ofstream outFile;
double base, height, radiusa, radiusb;
 double rec_area, elli_area; 
inFile.open("myfunctions.h");
outFile.open("output9.txt");
cout << "For the rectangle " << endl;
 getData(base, height);
cout << "For the ellipse" << endl;
getData(radiusa,radiusb );
rec_area = area_rectangle( base, height ); 
elli_area = area_ellipse( radiusa, radiusb) ;
printData(outFile,base, height,rec_area ,radiusa , radiusb,  elli_area );
inFile.close();
outFile.close();

	
	return 0 ;
}

