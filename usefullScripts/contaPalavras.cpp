#include <iostream>
#include <string>
#include <sstream>

int main() {
	std::string linha;
	long long quantidade_palavras = 0;

	while (std::getline(std::cin, linha)) {
		std::stringstream ss(linha);
		std::string palavra;

		while (ss >> palavra) {
			quantidade_palavras++;
		}
	}

	std::cout << quantidade_palavras << std::endl;

	return 0;
}
