#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const string &first, const string &last, const string &ssn,
	double sales, double rate, double salary )
	// explicitly call base-class constructor
	: CommissionEmployee( first, last, ssn, sales, rate )
{
	setBaseSalary( salary );
}

// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
	if ( salary >= 0.0 ) { 
		baseSalary = salary;
	} else {
		throw invalid_argument( "Salary must be >= 0.0" );
	}
}

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

// calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
	// derived class cannot access the base class's private data
	return baseSalary + CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print() const
{
	cout << "base-salaried ";

	// invoke CommissionEmployee's print function
	CommissionEmployee::print();

	cout << "\nbase salary: " << getBaseSalary();	
}
