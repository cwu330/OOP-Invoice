///////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Homework 1.  Build an invoice class
// Calvin Wu
// July 16th 2025
///////////////////////////////////////////////
#include <iostream>
#include <string>
#include "Invoice.h"
using std::string;

//Default Constructor
Invoice::Invoice() {
    //If no values are provided then these will be used by the default constructor
    partNumber = "";
    partDescription = "";
    partQuantity = 0;
    partPrice = 0;
}

//Constructor inits our data members with provided values
Invoice::Invoice(string partNum, string partDesc, int partQty, int partPr) {
    partNumber = partNum;
    partDescription = partDesc;
    partQuantity = partQty;
    partPrice = partPr;
}


//Getter for part number
string Invoice::GetPartNumber() const {
    return partNumber;
}

//Getter for part description
string Invoice::GetPartDescription() const {
    return partDescription;
}

//Getter for part quantity
int Invoice::GetPartQuantity() const {
    return partQuantity;
}

//Getter for part price
int Invoice::GetPartPrice() const {
    return partPrice;
}

//Setter for part number
void Invoice::SetPartNumber(string partNum) {
    partNumber = partNum;
}

//Setter for part description
void Invoice::SetPartDescription(string partDesc) {
    partDescription = partDesc;
}

//Setter for part quantity
void Invoice::SetPartQuantity(int partQty) {
    partQuantity = partQty;
}

//Setter for part price
void Invoice::SetPartPrice(int partPr) {
    partPrice = partPr;
}

//Member function that calculates the invoice amount
int Invoice::GetInvoiceAmount() const {
    //quantity variable to hold either 0 or the result from GetPartQuantity()
    int invoiceQuantity;
    //price variable to hold either 0 or the result from GetPartPrice()
    int invoicePrice;

    //Conditional to check if quantity is less than 0 and if price is less than 0 
    //If they are set the invoice variables in this function to 0
    //Else set the variable to the getter results
    if (GetPartQuantity() < 0) {
        invoiceQuantity = 0; //If they are set the invoice variables in this function to 0
    } else {
        invoiceQuantity = GetPartQuantity(); //Else set the variable to the getter results
    }
    
    if (GetPartPrice() < 0) {
        invoicePrice = 0; //If they are set the invoice variables in this function to 0
    } else {
        invoicePrice = GetPartPrice(); //Else set the variable to the getter results
    }

    //Return the multiplication result of quantity times price 
    return (invoiceQuantity * invoicePrice);
}