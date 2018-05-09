//==========================================================
//
// Title: ArithmeticAces P2
// Author: Mercyllia Harmon
// Description:
// <brief description of application including its inputs,
// processing, and outputs>
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type

using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()

{
    // Declare variables
    double numA;
    double numB;
    double sum, difference, product, division;
    
    // Show application header
    cout << "Welcome to Arithmetic Aces" << endl;
    cout << "--------------------------" << endl << endl;
    
    // Initialize varibles
    cout << "Please input the first real number: ";
    cin >> numA;
    cout << "Please input the second real number: ";
    cin >> numB;
    
    // Caculate addition, subtraction, multiplication, division, and remainder of the two
    sum = numA + numB;
    difference = numA - numB;
    product = numA + numB;
    division = numA / numB;
    
    // Show inputs and outputs
    cout << "_______________________________" << endl << endl;
    cout << "Real-number arithmetic" << endl;
    cout << "The first number: " << fixed << setprecision (4)<< numA << endl;
    cout << "The second number: " << setprecision(4) << numB << endl;
    cout << "Addition: " << setprecision(4) << sum << endl;
    cout << "Subtraction: " << setprecision(4) << difference << endl;
    cout << "Mutiplication: " << setprecision(4) << product << endl;
    cout << "Division: " << setprecision(4) << division << endl;
    
    // Show application close
    cout << "\nEnd of Arithmetic Aces" << endl << endl;
    
    // Pause before application window closes
    cout << "Press any key to exit ..." << endl;
    
    return 0;
}
