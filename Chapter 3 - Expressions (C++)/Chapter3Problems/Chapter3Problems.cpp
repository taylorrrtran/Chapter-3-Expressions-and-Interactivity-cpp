#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Chapter3Problems.h"

int main() 
{
	chapter3Problems *p1 = new chapter3Problems;
	p1->interestEarned();
	system("pause");
	return 0;
}

void chapter3Problems::milesPerGallon()
{
	//This program will calculate a car's gas mileage
	
	double gallons, miles, mpg;

	//Gather gallons input
	std::cout << "Enter the number of gallons of gas the vehicle can hold: ";
	std::cin >> gallons;

	//Gather total miles on a full tank input
	std::cout << "Enter the number of miles the vehicle can be driven on a full tank: ";
	std::cin >> miles;

	//Display miles per gallon
	mpg = miles / gallons;
	std::cout << "The miles per gallon of the vehicle is: " << mpg << std::endl;
}

void chapter3Problems::stadiumSeating() {

	//This program will display the income generated from ticket sales on different seating prices

	double seat_A = 15.00,
		   seat_B = 12.00,
		   seat_C = 9.00;

	int ticketsA, ticketsB, ticketsC;

	//Gather amount of tickets sold for each seat
	std::cout << "Enter the amount of tickets sold for Seat A: ";
	std::cin >> ticketsA;

	std::cout << "Enter the amount of tickets sold for Seat B: ";
	std::cin >> ticketsB;

	std::cout << "Enter the amount of tickets sold for Seat C: ";
	std::cin >> ticketsC;

	//Calculate total income generated and display it
	double totalA = ticketsA * seat_A,
		   totalB = ticketsB * seat_B,
		   totalC = ticketsC * seat_C,
		   grandTotal = totalA + totalB + totalC;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "The total amount of income generated is: " << grandTotal << std::endl;
}

void chapter3Problems::testAverage()
{
	//This program will calculate the average of 5 test scores
	double score1, score2, score3, score4, score5;

	std::cout << "Enter the score for Test 1: ";
	std::cin >> score1;

	std::cout << "Enter the score for Test 2: ";
	std::cin >> score2;

	std::cout << "Enter the score for Test 3: ";
	std::cin >> score3;

	std::cout << "Enter the score for Test 4: ";
	std::cin >> score4;

	std::cout << "Enter the score for Test 5: ";
	std::cin >> score5;

	//Display the average
	double average = (score1 + score2 + score3 + score4 + score5) / 5.0;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "The average of the five test scores is: " << average << std::endl;
}

void chapter3Problems::averageRainfall()
{
	//This program will calculate the average for 3 months

	double rainfallMonth1, rainfallMonth2, rainfallMonth3;
	std::string month1, month2, month3;

	//Gather input of month and its respective rainfall
	std::cout << "Enter the name of a month: ";
	std::cin >> month1;
	std::cout << "Enter the rainfall of " << month1 << " (in inches): ";
	std::cin >> rainfallMonth1;

	std::cout << "Enter the name of a month: ";
	std::cin >> month2;
	std::cout << "Enter the rainfall of " << month2 << " (in inches): ";
	std::cin >> rainfallMonth2;

	std::cout << "Enter the name of a month: ";
	std::cin >> month3;
	std::cout << "Enter the rainfall of " << month3 << " (in inches): ";
	std::cin >> rainfallMonth3;

	//Calculate average of rainfall and display it
	double average = (rainfallMonth1 + rainfallMonth2 + rainfallMonth3) / 3;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is: " << average << " inches." << std::endl;
}

void chapter3Problems::maleAndFemalePercent()
{
	//This program will display the percantage of males and females in a class

	double males, females, totalStudents;

	//Gather number of males and females in the class
	std::cout << "Enter the number of males in the class: ";
	std::cin >> males;

	std::cout << "Enter the number of females in the class: ";
	std::cin >> females;

	//Display the percentages of the males and females
	totalStudents = males + females;
	double malePercent = ((males / totalStudents) * 100),
		   femalePercent = ((females / totalStudents) * 100);
	std::cout << "The percentage of males in the class: " << malePercent << "%" << std::endl;
	std::cout << "The percentage of females in the class: " << femalePercent << "%" << std::endl;
}

void chapter3Problems::ingredientAdjust() 
{
	//This program will display the number of cups of each ingredient to make the specified amount of cookies
	
	//This recipe produces 48 cookies with this amount of ingredients
	double sugar = 1.5,
		   butter = 1.0,
		   flour = 2.75;

	//Ask for the number of cookies that is desired to be made
	double cookies;
	std::cout << "How many cookies would you like to make? ";
	std::cin >> cookies;

	//Display the amount of ingredients needed to make the desired amount of cookies
	std::cout << "To make " << cookies << " cookies, you will need: " << std::endl;
	cookies = cookies / 48.0;
	std::cout << (sugar * cookies) << " cup(s) of sugar." << std::endl;
	std::cout << (butter * cookies) << " cup(s) of butter." << std::endl;
	std::cout << (flour * cookies) << " cup(s) of flours." << std::endl;
}

void chapter3Problems::boxOffice()
{
	//This program will calculate a theater's gross and net box office profit for a night

	double adultTicket = 10.00,
		   childTicket = 6.00;
	int numAdultTickets, numChildTickets;

	//Gather input of movie name
	std::string movieName;
	std::cout << "Enter the name of a movie: ";
	std::getline(std::cin, movieName);

	//Gather input on amount of tickets sold
	std::cout << "Enter the amount of adult tickets sold: ";
	std::cin >> numAdultTickets;

	std::cout << "Enter the amount of the child tickets sold: ";
	std::cin >> numChildTickets;

	//Calculate the theater's gross and net box office profit and display it
	double total = (numAdultTickets * adultTicket) + (numChildTickets * childTicket);
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Movie Name: " << '"' << movieName << '"' << std::endl;
	std::cout << "Adult tickets sold: " << numAdultTickets << std::endl;
	std::cout << "Child tickets sold: " << numChildTickets << std::endl;
	std::cout << "Gross Box Office Profit: $" << total << std::endl;
	std::cout << "Net Box Office Profit: $" << (total * 0.20) << std::endl;
	std::cout << "Amount Paid to Distributor: $" << (total * 0.80) << std::endl;
}

void chapter3Problems::howManyWidgets()
{
	//This program will calculate how many widgets are stacked on a pallet. One widget weighs 12.5 lbs

	double pallet, palletWithWidget, widget;

	//Gather weight of pallet without and with widgets stacked on it
	std::cout << "Enter the weight of the pallet (in pounds): ";
	std::cin >> pallet;

	std::cout << "Enter the weight of the pallet with the widgets stacked on it (in pounds): ";
	std::cin >> palletWithWidget;

	//Calculate the amount of widgets on the pallet
	widget = (palletWithWidget - pallet) / 12.5;
	std::cout << "There are approximately " << widget << " widgets on the pallet. " << std::endl;
}

void chapter3Problems::howManyCalories()
{
	//This program will display the amount of how many cookies were eaten based on calorie consumption

	int cookies;

	//Gather input on how many cookies were eaten
	std::cout << "Enter the amount of cookies you have eaten: ";
	std::cin >> cookies;

	//Display total calories consumed. 3 cookies = 300 calories.
	double calories = (cookies / 3.00) * 300.00;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Total amount of calories consumed: " << calories << std::endl;
}

void chapter3Problems::howMuchInsurance()
{
	/*This program will display the minimum insurance he or she needs to buy for a property.
	  Property owners should insure their homes for at least 80 percent of what it would cost
	  to replace the structure. */

	double replacement;

	//Gather replacement cost input
	std::cout << "Please enter the replacement cost of the building: $";
	std::cin >> replacement;

	//Display the minimum amount of insurance
	std::cout << "The minimum amount of insurance one should buy for the property is: $";
	std::cout << (replacement * 0.80) << std::endl;
}

void chapter3Problems::automobileCosts()
{
	//This program will display the monthly costs of expenses and total annual cost of expenses

	double loan, insurance, gas, tires, oil, maintenance;

	//Gather expenses input
	std::cout << "Enter the monthly expenses for the car loan payment: ";
	std::cin >> loan;

	std::cout << "Enter the monthly expenses for the insurance: ";
	std::cin >> insurance;

	std::cout << "Enter the monthly expenses for gas: ";
	std::cin >> gas;

	std::cout << "Enter the monthly expenses for oil change: ";
	std::cin >> oil;

	std::cout << "Enter the monthly expenses for tires: ";
	std::cin >> tires;

	std::cout << "Enter the monthly expenses for maintenance: ";
	std::cin >> maintenance;

	//Display expenses, total monthly expenses, and total annual expenses
	std::cout << "Monthly expenses for loan is: $"        << loan << std::endl;
	std::cout << "Monthly expenses for insurance is: $"   << insurance << std::endl;
	std::cout << "Monthly expenses for gas is: $"         << gas << std::endl;
	std::cout << "Monthly expenses for oil is: $"         << oil << std::endl;
	std::cout << "Monthly expenses for tires is: $"       << tires<< std::endl;
	std::cout << "Monthly expenses for maintenance is: $" << maintenance<< std::endl;

	double totalMonthly = loan + insurance + gas + oil + tires + maintenance;
	double totalAnnual = totalMonthly * 12.00;
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "Total monthly expenses: $" << totalMonthly << std::endl;
	std::cout << "Total annual expenses: $" << totalAnnual << std::endl;
}

void chapter3Problems::celsiusToFahrenheit()
{
	//This program will convert Celsius temperatures to Fahrenheit temperatures
	double celsius, fahrenheit;
	
	//Gather input and convert. Display fahrenheit after conversion
	std::cout << "Enter a temperature in Celsius: ";
	std::cin >> celsius;

	fahrenheit = ((9.0 / 5.0) * celsius) + 32.0;
	std::cout << "The Fahrenheit equivalent is: " << fahrenheit << std::endl;
}

void chapter3Problems::currency()
{
	//This program will convert U.S. dollar amounts to Yen and Euros

	const double YEN_PER_DOLLAR = 112.35;
	const double EUROS_PER_DOLLAR = 0.88;

	//Gather U.S. dollar input from user
	double US_DOLLAR;
	std::cout << "Please enter a U.S. dollar amount: ";
	std::cin >> US_DOLLAR;

	//Convert the U.S. dollar into appropriate currencies and display them
	double YEN_CONVERSION = YEN_PER_DOLLAR * US_DOLLAR,
		   EUROS_CONVERSION = EUROS_PER_DOLLAR * US_DOLLAR;
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "The Japanese Yen equivalent: " << YEN_CONVERSION << std::endl;
	std::cout << "The European Euros equivalent: " << EUROS_CONVERSION << std::endl;
}

void chapter3Problems::monthlySalesTax()
{
	//This program will generate a monthly sales tax report

	std::string month, year;
	double total, sales, stateTax, countyTax, totalTax;

	//Gather input
	std::cout << "Enter a month: ";
	std::cin >> month;

	std::cout << "Enter a year: ";
	std::cin >> year;

	std::cout << "Enter the total amount collected at the cash register (including all sales tax): ";
	std::cin >> total;

	//Calculate "sales" variable and the different sales tax
	sales = (total) / (1.06);
	countyTax = sales * 0.02;
	stateTax = sales * 0.04;
	totalTax = countyTax + stateTax;
	
	//Display report
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "Sales Tax Report: " << month << " " << year << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << "Total Collected:  $" << std::setw(8) << total << std::endl;
	std::cout << "Sales:            $" << std::setw(8) << sales << std::endl;
	std::cout << "County Sales Tax: $" << std::setw(8) << countyTax << std::endl;
	std::cout << "State Sales Tax:  $" << std::setw(8) << stateTax << std::endl;
	std::cout << "Total Sales Tax:  $" << std::setw(8) << totalTax << std::endl;
}

void chapter3Problems::propertyTax()
{
	//This program will display the assessment value and property tax of a property

	double LAND_PRICE;

	//Gather property value input
	std::cout << "Enter the actual value of the property: ";
	std::cin >> LAND_PRICE;

	//Calculate assessment value and property tax
	double assessmentValue = LAND_PRICE * 0.60;
	double propertyTax = (assessmentValue / 100.0) * 0.75;

	//Display the assessment value and proprety tax 
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "The assessment value for that property is: $" << std::setw(10) << assessmentValue << std::endl;
	std::cout << "The property tax for that property is:     $" << std::setw(10)  << propertyTax << std::endl;
}

void chapter3Problems::seniorCitizenTax()
{
	//This program will display the amount a senior will be charged for his/her property and quarterly tax

	double LAND_PRICE;
	double taxRate;

	//Gather input
	std::cout << "Enter the actual value of the property: ";
	std::cin >> LAND_PRICE;

	std::cout << "Enter the tax rate for every $100 of assessed value: ";
	std::cin >> taxRate;

	//Calculate assessed value, annual and quarterly property tax
	/* There is a $5,000 exemption in the assessed value*/
	double assessedValue = (LAND_PRICE * 0.60) - 5000;
	double propertyTax = (assessedValue / 100.0) * taxRate;
	double quarterlyTax = propertyTax / 4.00;

	//Display annual and quarterly property tax
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "The annual property tax for a senior homeowner:     $" << std::setw(10) << propertyTax << std::endl;
	std::cout << "The monthly property tax for a senior homeowner is: $" << std::setw(10) << quarterlyTax << std::endl;
}

void chapter3Problems::mathTutor()
{
	//This program will generated random numbers that will be added and need to be solved by user input

	//Get the system time
	unsigned seed = time(0);

	//Seed the random number generator
	srand(seed);

	//Range value from 1 - 999
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 999;
	int number1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	int number2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	//Display numbers and show correct answer after pressing enter
	std::cout << "Press enter once you are ready to see the solution." << std::endl;
	std::cout << std::setw(5) << number1 << std::endl;
	std::cout << "+ " << std::setw(3) << number2 << std::endl;
	std::cout << "------";
	
	char ch;
	std::cin.get(ch);

	int total = number1 + number2;
	std::cout << std::setw(5) << total << std::endl;
}

void chapter3Problems::interestEarned()
{
	//This program will display a report about interest earned

	double principal, interestRate;
	int times;

	//Gather input
	std::cout << "Enter a principal amount: $";
	std::cin >> principal;

	std::cout << "Enter the interest rate: ";
	std::cin >> interestRate;

	std::cout << "Enter how many times the interest is compounded: ";
	std::cin >> times;

	//Calculate total amount after interest
	double amount = principal * pow((1.00 + ((interestRate / 100.0)/ times)), times);
	double interest = amount - principal;

	//Display report
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "Interest rate:      " << std::setw(10) << interestRate << "%" << std::endl;
	std::cout << "Times Compounded:   " << std::setw(10) << times << std::endl;
	std::cout << "Principal:         $" << std::setw(10) << principal << std::endl;
	std::cout << "Interest:          $" << std::setw(10) << interest << std::endl;
	std::cout << "Amount in Savings: $" << std::setw(10) << amount << std::endl;
}

void chapter3Problems::monthlyPayments()
{
	//This program
}

chapter3Problems::chapter3Problems()
{
}