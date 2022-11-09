#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
	// instantiate base-class object
	CommissionEmployee commissionEmployee( "Sue", "Jones", "222-22-2222", 1000, .06 );

	// create base-class pointer
	CommissionEmployee *commissionEmployeePtr = nullptr;

	// instantiate derived-class object
	BasePlusCommissionEmployee basePlusCommissionEmployee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

	// create derived-class pointer
	BasePlusCommissionEmployee *basePlusCommissionEmployeePtr = nullptr;

	cout << fixed << setprecision( 2 );

	cout << "Print base-class and derived-class objects:\n\n";
	commissionEmployee.print();
	cout << "\n\n";
	basePlusCommissionEmployee.print();

	// aiming base-class pointer at base-class object and print
	commissionEmployeePtr = &commissionEmployee; // perfectly natural
	cout << "\n\n\nCalling print with base-class pointer to \nbase-class object invokes base-class print function:\n\n";
	commissionEmployeePtr->print();

	// aiming derived-class object at derived-class object and print
	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with derived-class pointer to \nderived-class object invokeds derived-class print function\n\n";
	basePlusCommissionEmployeePtr->print(); // invokes derived-class print

	// aiming base-class pointer at derived-class object and print
	commissionEmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with base-class pointer to derived-class object\ninvokes base-class print "
		<< "function on that derived-class object:\n\n";
	commissionEmployeePtr->print(); // invokes base-class print
	cout << endl;
}
