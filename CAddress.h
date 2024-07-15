#ifndef __CADDRESS_H
#define __CADDRESS_H

class CAddress
{
private:
	char* cityName;
	char* streetName;
	int houseNumber;

public:
	CAddress(int hn, const char* sn, const char* cn = "Tel Aviv");
	CAddress (const CAddress &other);
	~CAddress();
	char* getCityName();
	char* getStreetName();
	int getHouseNumber();
	void Print();
	void UpdateAddress(const char* cn, const char* sn, int hn);
};


#endif //__CADDRESS_H