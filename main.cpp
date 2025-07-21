///////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Homework 1.  Build an invoice class
// Calvin Wu
// July 16th 2025
///////////////////////////////////////////////
#include <iostream>
#include <string>
#include "Invoice.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    // Welcome message for HW1!!
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Welcome to my Homework 1 for CIS554!" << endl;
    cout << "This program shows off OOP using an invoice class." << endl;
    cout << "It uses private data members for invoice parts" << endl;
    cout << "with getters, setters,constructors," << endl;
    cout << "and lastly a function to get the invoice amount with validation." << endl;
    cout << "Below are the listed invoices." << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    //Create an invoice object using the setters made in the invoice class
    Invoice invoice1;
    invoice1.SetPartNumber("35786");
    invoice1.SetPartDescription("ATX Motherboard");
    invoice1.SetPartQuantity(2);
    invoice1.SetPartPrice(232);

    //Display invoice 1 details to user
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Invoice 1:" << endl;
    cout << "Part number: " << invoice1.GetPartNumber() << endl;
    cout << "Part Description: " << invoice1.GetPartDescription() << endl;
    cout << "Quantity: " << invoice1.GetPartQuantity() << endl;
    cout << "Price per item: $" << invoice1.GetPartPrice() << endl;
    cout << "Total Amount: $" << invoice1.GetInvoiceAmount() << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    //Create an invoice by passing in data directly
    Invoice invoice2("23415", "Wireless Mouse", 4, 69);

    //Display invoice 2 details to user
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Invoice 2:" << endl;
    cout << "Part number: " << invoice2.GetPartNumber() << endl;
    cout << "Part Description: " << invoice2.GetPartDescription() << endl;
    cout << "Quantity: " << invoice2.GetPartQuantity() << endl;
    cout << "Price per item: $" << invoice2.GetPartPrice() << endl;
    cout << "Total Amount: $" << invoice2.GetInvoiceAmount() << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    //Create an invoice using user prompts
    Invoice invoice3;
    //String parts for user
    string partNum, partDesc;
    //Int parts for user
    int partQty, partPrice;

    //Prompt user to enter invoice details
    cout << "Create your invoice." << endl;
    cout << "Enter Part Number: " << endl;
    cin >> partNum;
    cout << "Enter description: ";
    cin >> partDesc;
    cout << "Enter quantity: ";
    cin >> partQty;
    cout << "Enter price per item: ";
    cin >> partPrice;

    //Set Invoice with user prompts
    invoice3.SetPartNumber(partNum);
    invoice3.SetPartDescription(partDesc);
    invoice3.SetPartQuantity(partQty);
    invoice3.SetPartPrice(partPrice);

    //Display invoice 3 details to user
    cout << "\n--------------------------------------------------------------------------" << endl;
    cout << "Invoice 3:" << endl;
    cout << "Part number: " << invoice3.GetPartNumber() << endl;
    cout << "Part Description: " << invoice3.GetPartDescription() << endl;
    cout << "Quantity: " << invoice3.GetPartQuantity() << endl;
    cout << "Price per item: $" << invoice3.GetPartPrice() << endl;
    cout << "Total Amount: $" << invoice3.GetInvoiceAmount() << endl;
    cout << "--------------------------------------------------------------------------" << endl;
}