#ifndef KOMAXA_H
#define KOMAXA_H

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class KOMAXA {
private:
	string name;

	int sv;
	int masa;
protected:
	string tip;
	int live;
public:
	string country;
	int h;

	KOMAXA(); 

	~KOMAXA(); 

	KOMAXA(string valueCountry, string valueName, string valueTip, int valueMasa, int valueSv, int valueLive, int valueH);

	string GetCountry();

	string GetName();

	string GetTip();

	int GetMasa();

	int GetSv();

	int GetLive();

	int GetH();

	void Print();
};

#endif