#include <iostream>
#include <string.h>

using namespace std;

// заменяет все вхождения строки from, внутри строки str, на строку to
void replaceAll(string& str, const string from , const string to) {
	size_t position;
	while( (position = str.find(from)) != string::npos) {
		str.replace(position, from.length(), to);
	}
}

int main() {
	// Вводим строку
	cout << "Введите строку:" << endl;
	string input = "";
	getline(cin, input);

	// заменяем символы
	replaceAll(input, "г", "r");
	replaceAll(input, "Z", "Ш");

	cout << "Отредактированная строка (Z->Ш, г->r): " << endl << input << endl;
	return 0;
}
