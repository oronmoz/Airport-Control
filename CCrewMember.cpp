#include <iostream>
using namespace std;
#include <string.h>
#include "CCrewMember.h"

// Crew Member constructor
CCrewMember::CCrewMember(const char* mn, CAddress ma, int at) : memberAddress(ma)
{
    memberName = new char[strlen(mn) + 1];
    strcpy(memberName, mn);
    airTime = at;
}

CCrewMember::CCrewMember(const CCrewMember& other) : memberAddress(other.memberAddress)
{
    memberName = new char[strlen(other.memberName) + 1];
    strcpy(memberName, other.memberName);
    airTime = other.airTime;
}

CCrewMember :: ~CCrewMember()
{
    //delete &memberAddress;
    delete[] memberName;
}

bool CCrewMember::UpdateMinutes(int at)
{
    if (at < 0)
    {
        return false;
    }
    airTime += at;
    return true;
}

char* CCrewMember::getMemberName()
{
    return memberName;
}

int CCrewMember::getAirTime()
{
    return airTime;
}

CAddress CCrewMember::getMemberAddress()
{
    return memberAddress;
}

void CCrewMember::setMemberName(char* name)
{
    memberName = new char[strlen(name) + 1];
    strcpy(memberName, name);
}

void CCrewMember::setMemberAddress(CAddress newAddress)
{
    memberAddress.UpdateAddress(newAddress.getCityName(), newAddress.getStreetName(), newAddress.getHouseNumber());
}

bool CCrewMember::IsEqual(const CCrewMember m)
{
    if (strcmp(memberName ,m.memberName))
        return true;
    return false;
}


void CCrewMember::Print()
{
    cout << "Crew Member Info:\n  Member Name: " << memberName << "\n  Air Time: " << airTime << endl;
    memberAddress.Print();
}

