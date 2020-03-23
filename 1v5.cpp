#include <iostream>
#include <string.h>
#include <typeinfo>

using namespace std;

int main() {

	// счетчик количества 
	int counter = 0;

	// арифм. операторы
	char operators[5] = { '+', '-', '*', '/' , '%' };

	// вводим строку
	cout << "Введите строку:" << endl;

	string input = "";
	getline(cin, input);
	int input_size = input.size();

	// обходим введённую строку
	for (int i = 0; i < input_size; i++) {
		// обходим операторы
		for (int j = 0; j < 5; j++) {
			if(input.at(i) == operators[j]) counter++;
		}
	}

	cout << "Количество использованных в строке арифметических операторов: " << counter << endl;

	return 0;
}
