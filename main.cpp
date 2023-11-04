// Shipping Cost
// Week 3 Programming Assignment #2
// Programmers: Joey Mei, LaDawn Stuben
// This program will determine shipping cost

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <fstream>

using namespace std;
// Add any other header files here

///////////////////////////////////////
int main()
{
    // Declaring Output File
    ofstream outFile("order.txt"); 

    // Check if file opened successfully
    if (!outFile) {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Declaring Variables
    string Item_Name;
    char Fragile;
    double Order_Total = 0.00;
    string Destination;
    double Fragile_Cost = 0.00;
    double Shipping_Cost = 0.00;
    double Total_Shipping = 0.00;

    // Print Header
    cout << "." << setw(48) << setfill('.') << right << "." << endl;
    cout << " ITCS 2530 - Programming Assignment for week #3" << endl;
    cout << "." << setw(48) << setfill('.') << right << "." << endl;
    cout << endl;
    cout << endl;

    // Print Header to File
    outFile << "." << setw(48) << setfill('.') << right << "." << endl;
    outFile << " ITCS 2530 - Programming Assignment for week #3" << endl;
    outFile << "." << setw(48) << setfill('.') << right << "." << endl;
    outFile << endl;
    outFile << endl;


    // Getting Inputs
    cout << "Please enter the item name. (No Spaces)" << left << setw(10) << setfill('.') << right << ":";
    cin >> Item_Name;
    cout << "Is the item fragile? (y=yes/n=no)" << left << setw(16) << setfill('.') << right << ":";
    cin >> Fragile;


    // Validating Fragility
    if (Fragile != 'y' && Fragile != 'n') {
        cout << endl;
        cout << "Invalid entry, exiting" << endl;
        cin.ignore();
        cin.get();
        return 1;
    }


    // Getting Inputs
    cout << "Please enter your order total." << left << setw(19) << setfill('.') << right << ":";
    cin >> Order_Total;
    cout << "Please enter destination. (usa/can/aus)" << left << setw(10) << setfill('.') << right << ":";
    cin >> Destination;


    // Validating Destination
    if (Destination != "usa" && Destination != "can" && Destination != "aus") {
        cout << endl;
        cout << "Invalid entry, exiting" << endl;
        cin.ignore();
        cin.get();
        return 1;
    }

    // If Statements for Fragile Items
    if (Fragile == 'y')
        Fragile_Cost = 2.00;
    else if (Fragile == 'n')
        Fragile_Cost = 0.00;

    // If Statements for Shipping Cost
    if (Order_Total <= 50) {
        if (Destination == "usa")
            Shipping_Cost = 6.00 + Fragile_Cost;
        else if (Destination == "can")
            Shipping_Cost = 8.00 + Fragile_Cost;
        else if (Destination == "aus")
            Shipping_Cost = 10.00 + Fragile_Cost;
    }
    else if (Order_Total <= 100) {
        if (Destination == "usa")
            Shipping_Cost = 9.00 + Fragile_Cost;
        else if (Destination == "can")
            Shipping_Cost = 12.00 + Fragile_Cost;
        else if (Destination == "aus")
            Shipping_Cost = 14.00 + Fragile_Cost;
    }
    else if (Order_Total <= 150) {
        if (Destination == "usa")
            Shipping_Cost = 12.00 + Fragile_Cost;
        else if (Destination == "can")
            Shipping_Cost = 15.00 + Fragile_Cost;
        else if (Destination == "aus")
            Shipping_Cost = 17.00 + Fragile_Cost;
    }
    else {
        Shipping_Cost = 0.00 + Fragile_Cost;
    }

    // Calculations
    Total_Shipping = Order_Total + Shipping_Cost;

    // Uppercasing Destination and Item name
    transform(Item_Name.begin(), Item_Name.end(), Item_Name.begin(), ::toupper);
    transform(Destination.begin(), Destination.end(), Destination.begin(), ::toupper);

    // Outputs to Screen
    cout << endl;
    cout << "Your item is" << left << setw(28) << setfill('.') << ".", cout << Item_Name << endl;
    cout << "Your shipping cost is" << left << setw(20) << setfill('.') << right << "$" << setprecision(2) << fixed << Shipping_Cost << endl;
    cout << "You are shipping to" << left << setw(21) << setfill('.') << ".", cout << Destination << endl;
    cout << "Your total shipping cost are" << left << setw(13) << setfill('.') << right << "$" << setprecision(2) << fixed << Total_Shipping << endl;
    cout << endl;
    cout << "-" << setw(49) << setfill('-') << right << "Thank You!" << endl;
    cout << endl;
    cout << endl;

    //Prompt user to press key to exit
    cout << "Press any key to continue . . .";
    cin.ignore();
    cin.get();

    // Outputs to File
    outFile << endl;
    outFile << "Your item is" << left << setw(28) << setfill('.') << "." << Item_Name << endl;
    outFile << "Your shipping cost is" << left << setw(20) << setfill('.') << right << "$" << setprecision(2) << fixed << Shipping_Cost << endl;
    outFile << "You are shipping to" << left << setw(21) << setfill('.') << "." << Destination << endl;
    outFile << "Your total shipping cost are" << left << setw(13) << setfill('.') << right << "$" << setprecision(2) << fixed << Total_Shipping << endl;
    outFile << endl;
    outFile << "-" << setw(49) << setfill('-') << right << "Thank You!" << endl;
    outFile << endl;

    // Closing File
    outFile.close();


    return 0;
}

// Place any unused code here so that the instructor can follow your problem solving thoughts.