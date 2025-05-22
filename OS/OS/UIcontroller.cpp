#include <iostream>
using namespace std;
#include "UIcontrollerHEAD.h"

void UIcontroller::Print(string out) {
	cout << out << endl;
}
void UIcontroller::PrintMas(vector<string> mas) {
	for (int i = 0; i < mas.size(); i++) {
		cout << mas[i] << "";

	}
}


