#include <iostream>
using namespace std;
#include <string.h>
#include "CFlightCompany.h"

// Flight Company constructor
CFlightCompany::CFlightCompany(const char* cn)
{
    companyName = new char[strlen(cn) + 1];
    strcpy(companyName, cn);
}

CFlightCompany::CFlightCompany(const CFlightCompany &other)
{
    companyName = new char[strlen(other.companyName) + 1];
    strcpy(companyName, other.companyName);
}

CFlightCompany :: ~CFlightCompany()
{
    delete[] companyName;
}

void CFlightCompany::SetName(const char* cn)
{
    companyName = new char[strlen(cn) + 1];
    strcpy(companyName, cn);
}

char* CFlightCompany::getCompanyName()
{
    return companyName;
}

void CFlightCompany::Print()
{
    cout << "Flight Company Name: " << companyName << endl;
}