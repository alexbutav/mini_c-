#include <iostream>
#include <string.h>
#include <sstream>
#include <vector>

using namespace std;

int main() {
	// Вводим строку
	cout << "Введите строку:" << endl;

	string word;
	string input = "";
	getline(cin, input);
	
	// разбиваем входную строку на слова
	vector<string> words;
	stringstream ss(input);

	while( ss >> word ) {
		words.push_back(word);
	}

	// выводим необходимые
	cout << "Центральное слово:" << endl;
	if(words.size() % 2 == 0) {
		cout << words.at(words.size() / 2 - 1) << " " << words.at(words.size() / 2) << endl;
	} else {
		cout << words.at(words.size() / 2) << endl;
	}
}
