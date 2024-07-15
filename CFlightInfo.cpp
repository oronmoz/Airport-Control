#include <iostream>
using namespace std;
#include <string.h>
#include "CFlightInfo.h"

// Flight Info constructor
CFlightInfo::CFlightInfo(const char* d, int fn, int ft, int fl)
{
    flightNumber = fn;
    dest = new char[strlen(d) + 1];
    strcpy(dest, d);
    flightTime = ft;
    flightLength = fl;
}

CFlightInfo::CFlightInfo(const CFlightInfo& other)
{
    flightNumber = other.flightNumber;
    dest = new char[strlen(other.dest) + 1];
    strcpy(dest, other.dest);
    flightTime = other.flightTime;
    flightLength = other.flightLength;
}

CFlightInfo :: ~CFlightInfo()
{
    delete[] dest;
}

int CFlightInfo::getFlightNumber()
{
    return flightNumber;
}

char* CFlightInfo::getDest()
{
    return dest;
}

int CFlightInfo::getFlightTime()
{
    return flightTime;
}

int CFlightInfo::getFlightLength()
{
    return flightLength;
}

void CFlightInfo::setFlightNumber(int n)
{
    flightNumber = n;
}

void CFlightInfo::SetDest(const char* n)
{
    dest = new char[strlen(n) + 1];
    strcpy(dest, n);
}

void CFlightInfo::setFlightTime(int n)
{
    flightTime = n;
}

void CFlightInfo::setFlightLength(int n)
{
    flightLength = n;
}

bool CFlightInfo::isEqual(const CFlightInfo f)
{
    if (flightNumber == f.flightNumber)
        return true;
    return false;
}


void CFlightInfo::Print()
{
    cout << "Flight Info:\n  Flight Number: " << flightNumber << "\n  Destination: " << dest << "\n  Flight time: " << flightTime << " minutes\n  Flight Length: " << flightLength << " km\n" << endl;
}

