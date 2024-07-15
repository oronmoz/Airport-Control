#ifndef __CCREWMEMBER_H
#define __CCREWMEMBER_H
#include "CAddress.h"

class CCrewMember
{
private:
	char* memberName;
	int airTime;
	CAddress memberAddress;

public:
	CCrewMember(const char* mn, CAddress ma, int at = 0);
	CCrewMember(const CCrewMember& other);
	~CCrewMember();
	bool UpdateMinutes(int add);
	char* getMemberName();
	int getAirTime();
	CAddress getMemberAddress();
	void setMemberName(char* name);
	void setMemberAddress(CAddress newAddress);
	bool IsEqual(const CCrewMember m);
	void Print();
};


#endif //__CCREWMEMBER_H