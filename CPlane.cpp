#include <iostream>
using namespace std;
#include <string.h>
#include "CPlane.h"

// Plane constructor
CPlane::CPlane(int i, int nos, const char* m)
{
    id = i;
    model = new char[strlen(m) + 1];
    strcpy(model, m);
    numOfSeats = nos;
}

CPlane::CPlane(const CPlane& other)
{
    id = other.id;
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
    numOfSeats = other.numOfSeats;
}

CPlane :: ~CPlane()
{
    delete[] model;
}

int CPlane::getId()
{
    return id;
}

char* CPlane::getModel()
{
    return model;
}

int CPlane::getNumOfSeats()
{
    return numOfSeats;
}

void CPlane::Print()
{
    cout << "Plane Info:\n  ID: " << id << "\n  Model: " << model << "\n  Number of Seats: " << numOfSeats << "\n" << endl;
}

bool CPlane:: IsEqual(const CPlane other)
{
    if (id == other.id)
        return true;
    return false;
}