#include <iostream>
#include <map>
#include <string>

int main() {
	std::map<std::string, int> notas;

	Inserção
		notas["Alice"] = 90;
	notas.insert({"Bob", 85});

	// Acesso e Modificação
	notas["Alice"] = 95; 

	// Busca segura
	if (notas.count("Charlie") > 0) {
		std::cout << "Charlie encontrado\n";
	}

	// Iteração
	for (const auto& [nome, nota] : notas) {
		std::cout << nome << ": " << nota << "\n";
	}

	// Remoção
	notas.erase("Bob");

	return 0;
}   
