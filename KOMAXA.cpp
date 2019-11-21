#include "KOMAXA.h"

using namespace std;

KOMAXA::KOMAXA() {
	string country;
	string name;
	string tip;
	int masa;
	int sv;
	int live;
	int h;
}

KOMAXA::KOMAXA(string valueCountry, string valueName, string valueTip, int valueMasa, int valueSv, int valueLive, int valueH) {
	country = valueCountry;
	name = valueName;
	tip = valueTip;
	masa = valueMasa;
	sv = valueSv;
	live = valueLive;
	h = valueH;
}

string KOMAXA::GetCountry() {
	return country;
}
string KOMAXA::GetName() {
	return name;
}
string KOMAXA::GetTip() {
	return tip;
}
int KOMAXA::GetMasa() {
	return masa;
}
int KOMAXA::GetSv() {
	return sv;
}
int KOMAXA::GetLive() {
	return live;
}
int KOMAXA::GetH() {
	return h;
}

void KOMAXA::Print() {
	cout << "\n Country is: " << GetCountry() << "\n Your name is: " << GetName() << "\n Tip: " << GetTip() << "\n Masa: " << GetMasa() << "\n SV: " << GetSv() << "\n Live: " << GetLive() << "\n H: " << GetH() << endl;
}

KOMAXA::~KOMAXA() {
	cout << "\n The end of program, tnx for using us!" << endl;
}


