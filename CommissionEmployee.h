#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>

class CommissionEmployee
{
	public:
		CommissionEmployee( const std::string &, const std::string &,
			const std::string &, double = 0.0, double = 0.0);

		void setFirstName( const std::string & );
		std::string getFirstName() const;

		void setLastName( const std::string & );
		std::string getLastName() const;

		void setSocialSecurityNumber( const std::string & ); // get SSN
		std::string getSocialSecurityNumber() const; // return SSN
		
		void setGrossSales( double );
		double getGrossSales () const;

		void setCommissionRate( double );
		double getCommissionRate() const;

		double earnings() const;
		void print() const;

	protected:
		std::string firstName;
		std::string lastName;
		std::string socialSecurityNumber;
		double grossSales;
		double commissionRate;
}; // end class CommissionEmployee
 
#endif
