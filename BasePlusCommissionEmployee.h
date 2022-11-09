#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
	public:
		BasePlusCommissionEmployee( const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0, double = 0.0 );

		void setBaseSalary( double );
		double getBaseSalary() const;

		// the use of the override keyword forces the compiler to check whether the base class has a function with the same function signature
		// if not, the compiler generates an error
		virtual double earnings() const override;
		virtual void print() const override;

	private:
		double baseSalary;
}; // end class

#endif

