#ifndef __CPLANE_H
#define __CPLANE_H

class CPlane
{
private:
	int id;
	char* model;
	int numOfSeats;

public:
	CPlane (int i, int nos, const char* m);
	CPlane (const CPlane& other);
	~CPlane();
	int getId ();
	char* getModel ();
	int getNumOfSeats ();
	void Print ();
	bool IsEqual (const CPlane other);
};


#endif //__CPLANE_H