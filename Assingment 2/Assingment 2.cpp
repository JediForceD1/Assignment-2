/*
Assingment 2A.cpp
Aaron McCormick
*/
// Chapter 3 - Programming Challenge 10, Box Office
// This program calculates a theater's gross and net profit.
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string> 


int main()
{
	using namespace std;

	const double THEATER_PCT = .80,   // Percent of gross kept by theater
		DISTRIBUTOR_PCT = .20,   // Percent of gross paid to distributor
		ADULT_PRICE = 10.00,     // Price of an adult ticket
		CHILD_PRICE = 6.00;      // Price of a child ticket

	string movieName;

	double grossRevenue, netRevenue, distributorAmt;
	int	adultTickets, childTickets;

	cout << "Name of the movie: ";
	getline(cin, movieName);

	cout << "Number of adult tickets sold: ";
	cin >> adultTickets;

	cout << "Number of child tickets sold: ";
	cin >> childTickets;

	grossRevenue = ((adultTickets * 10) + (childTickets * 6));
	distributorAmt = (grossRevenue * 0.2);
	netRevenue = grossRevenue - distributorAmt;

	// Display results
	cout << setprecision(2) << fixed;	//Setiing Decimal
	cout << "\nRevenue Report\n\n";
	cout << "Movie Name:                    " << "\"" << movieName << "\"" << endl;
	cout << "Adult Tickets Sold:            " << setw(4) << adultTickets << endl;
	cout << "Child Tickets Sold:            " << setw(4) << childTickets << endl;
	cout << "Gross Box Office Revenue:       $" << setw(8) << grossRevenue << endl;
	cout << "Amount Paid to Distributor:   - $" << setw(8) << distributorAmt << endl;
	cout << "Net Box Office Revenue:         $" << setw(8) << netRevenue << endl;

	return 0;
}