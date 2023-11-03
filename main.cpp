// Shipping Cost
// Programmers: Joey Mei, Ladawn Stuben
// This program will determine shipping cost

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// Add any other header files here

///////////////////////////////////////
int main()
{
    // Declaring Variable
    char Item_Name;
    char Fragile;
    double Order_Total;
    char Destination;

    // Getting Inputs
    cout << "Please enter the item name. (No Spaces)" << left << setw(10) << setfill('.') << right << ":", cin >> Item_Name;
    cout << "Is the item fragile? (y=yes/n=no)" << left << setw(16) << setfill('.') << right << ":", cin >> Fragile;
    cout << "Please enter your order total." << left << setw(19) << setfill('.') << right << ":", cin >> Order_Total;
    cout << "Please enter destination. (usa/can/aus)" << left << setw(10) << setfill('.') << right << ":", cin >> Destination;

    // If Statements


    // Outputs


    return 0;
}

// Place any unused code here so that the instructor can follow your problem solving thoughts.