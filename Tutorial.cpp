//Escribiendo un comentario para guardar el cambio en github 
//Haciendo otro cambio 

#include <stdio.h> 
#include <iomanip> 
#include <iostream>
using namespace std;
int main()
{
    string name;
    double price, commission, shares, total1, total2, total3; 
    int action;

    do 
    {
        cout << "\nWelcome to our stock system.\n";
        cout << "This system calculates the amount of money paid per stock with or without commission\n\n"; 
        cout << "Please enter your name: ";
        getline (cin,name);

        cout << "How many shares of stock has been brought? "; 
        cin >> shares;

        cout << "What is the price per the share? ";
        cin >> price;

        cout << "What is the percentage of commission? "; 
        cin >> commission;
        cout << "\n";

        total1 = shares*price;
        total2 = total1*(commission/100); 
        total3 = total1+total2;

        cout <<fixed<<showpoint<<setprecision(2);
        cout << "The amount paid for the stocks without commission is: " << total1 <<"$"<< endl;
        cout << "The amount paid for the commission is: " << total2 <<"$" << endl;
        cout << "The total amount paid for the stock plus the commission is: "<< total3 <<"$"<< endl; cout << "\nInput -1 if you wish to exit the program otherwise enter any other number to restart: "; cin >> action;
        cin.ignore(); //clear buffer 
    } 
    while (action != -1);

    cout << "\nThank you for using our stock system";
    return 0; 
}