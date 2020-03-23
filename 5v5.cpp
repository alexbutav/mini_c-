#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;	

int main() {
	// Вводим строку
	cout << "Введите Имя Фамилию Отчество:" << endl;

	string word;
	string input = "";
	getline(cin, input);
	
	// разбиваем входную строку на слова
	vector<string> words;
	stringstream ss(input);

	while( ss >> word ) {
		words.push_back(word);
	}

	cout << words.at(1) << " " << words.at(0).substr(0, 2) << ". " << words.at(2).substr(0, 2) << "." << endl;

	return 0;
}	
