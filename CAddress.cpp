#include <iostream>
using namespace std;
#include <string.h>
#include "CAddress.h"

// Address constructor
CAddress::CAddress(int hn, const char* sn, const char* cn)
{
    cityName = new char [strlen(cn)+1];
    strcpy(cityName, cn);
    streetName = new char[strlen(sn) + 1];
    strcpy(streetName, sn);
    houseNumber = hn;
}

CAddress::CAddress(const CAddress &other)
{
    cityName = new char[strlen(other.cityName) + 1];
    strcpy(cityName, other.cityName);
    streetName = new char[strlen(other.streetName) + 1];
    strcpy(streetName, other.streetName);
    houseNumber = other.houseNumber;
}

CAddress :: ~CAddress()
{
    delete[] cityName;
    delete[] streetName;
}

char* CAddress::getCityName()
{
    return cityName;
}

char* CAddress::getStreetName()
{
    return streetName;
}

int CAddress::getHouseNumber()
{
    return houseNumber;
}

void CAddress::Print()
{
    cout << "Address: " << houseNumber << " " << streetName << ", " << cityName << "\n" << endl;
}

void CAddress::UpdateAddress(const char* cn, const char* sn, int hn)
{
    cityName = new char[strlen(cn) + 1];
    strcpy(cityName, cn);
    streetName = new char[strlen(sn) + 1];
    strcpy(streetName, sn);
    houseNumber = hn;
}