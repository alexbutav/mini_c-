#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	// Вводим строку
	cout << "Введите строку:" << endl;
	
	string input = "";
	getline(cin, input);

	// инициализируем счетчики
	int n_words = 0;
	int n_chars = 0;
	int middle_length = 0;

	// разбиваем входную строку на слова
	// и считаем слова и буквы
	string word;
	stringstream ss(input);

	while(ss >> word) {
		n_words++;
		n_chars += word.size();
	}

	// Подсчитываем среднюю длину слова
	middle_length = n_chars / n_words;

	cout << "Количество слова: " << n_words << endl << "Количество символов в словах: " << n_chars << endl << "Средняя длина слова: " << middle_length << endl;
	
	return 0;
}
