#ifndef __CFLIGHTCOMPANY_H
#define __CFLIGHTCOMPANY_H
#include "CFlightCompany.h"

class CFlightCompany
{
private:
	char* companyName;

public:
	CFlightCompany(const char* cn);
	CFlightCompany(const CFlightCompany &other);
	~CFlightCompany();
	void SetName(const char* cn);
	char* getCompanyName();
	void Print();
};


#endif //__CFLIGHTCOMPANY_H