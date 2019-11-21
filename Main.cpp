#include <iostream>
#include <string>
#include "KOMAXA.h"

int main() {
	
	int live1, sv1 = 0, masa1 = 0, H1 = 0;
	string name1 = "", country = "", tip1 = "";
	int live2, sv2 = 0, masa2 = 0, H2 = 0;
	string name2 = "", country2 = "", tip2 = "";
	int live3, sv3 = 0, masa3 = 0, H3 = 0;
	string name3 = "", country3 = "",tip3 = "";

	cout << "1) Ñountry: ";
	cin >> country;
	cout << "2) Ñountry: ";
	cin >> country2;
	cout << "3) Ñountry: ";
	cin >> country3;
	cout << "1) Name: ";
	cin >> name1;
	cout << "2) Name: ";
	cin >> name2;
	cout << "3) Name: ";
	cin >> name3;
	cout << "1) Tip: ";
	cin >> tip1;
	cout << "2) Tip: ";
	cin >> tip2;
	cout << "3) Tip: ";
	cin >> tip3;
	cout << "1) Masa: ";
	cin >> masa1;
	cout << "2) Masa: ";
	cin >> masa2;
	cout << "3) Masa: ";
	cin >> masa3;
	cout << "1) SV: ";
	cin >> sv1;
	cout << "2) SV: ";
	cin >> sv2;
	cout << "3) SV: ";
	cin >> sv3;
	cout << "1) Live: ";
	cin >> live1;
	cout << "2) Live: ";
	cin >> live2;
	cout << "3) Live: ";
	cin >> live3;
	cout << "1) H: ";
	cin >> H1;
	cout << "2) H: ";
	cin >> H2;
	cout << "3) H: ";
	cin >> H3;
	

	KOMAXA firstKOMAXA(country, name1, tip1, masa1, sv1, live1, H1);
	firstKOMAXA.Print();

	KOMAXA secondKOMAXA(country2, name2, tip2, masa2, sv2, live2, H2);
	secondKOMAXA.Print();

	KOMAXA thirdKOMAXA(country3, name3, tip3, masa3, sv3, live3, H3);
	thirdKOMAXA.Print();

	return 0;
}