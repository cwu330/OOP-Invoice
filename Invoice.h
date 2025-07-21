///////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Homework 1.  Build an invoice class
// Calvin Wu
// July 16th 2025
///////////////////////////////////////////////
#include <iostream>
#include <string>
using std::string;

//Invoice class that holds our data members, constructor, getter and setters, and methods
class Invoice {
    public:
        //Default constructor
        Invoice();

        //Our set constructor with our requried parameters that will link to our data members
        Invoice(string partNum, string partDesc, int partQty, int partPr); 

        //Getter for part number
        string GetPartNumber() const; 
        //Getter for part description
        string GetPartDescription() const;
        //Getter for part quantity
        int GetPartQuantity() const;
        //Getter for part price
        int GetPartPrice() const;

        //Setter for part number
        void SetPartNumber(string partNum);
        //Setter for part description
        void SetPartDescription(string partDesc);
        //Setter for part quantity
        void SetPartQuantity(int partQty);
        //Setter for part price
        void SetPartPrice(int partPr);

        //Member function that calculates the invoice amount
        int GetInvoiceAmount() const;

    private:
        //Part number data member
        string partNumber;
        //Part description data member
        string partDescription;
        //Part quantity data member
        int partQuantity;
        //Part price data member
        int partPrice;
};