#ifndef __CFLIGHTINFO_H
#define __CFLIGHTINFO_H

class CFlightInfo
{
private:
	int flightNumber;
	char* dest;
	int flightTime;
	int flightLength;

public:
	CFlightInfo (const char* d, int fn, int ft, int fl);
	CFlightInfo (const CFlightInfo& other);
	~CFlightInfo();
	int getFlightNumber();
	char* getDest();
	int getFlightTime();
	int getFlightLength();
	void setFlightNumber(int n);
	void SetDest(const char* n);
	void setFlightTime(int n);
	void setFlightLength(int n);
	bool isEqual(const CFlightInfo f);
	void Print();
};


#endif //__CFLIGHTINFO_H