#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string nome;
	int idade;
	float altura;
	float peso;
	char sexo;
	
	do {
		
		cout << "Digite seu nome:";
		cin >> nome;
		
	} while (nome.length() < 6 || nome.length() > 30);
	
	
	do {
		
		cout << "Digite sua idade:";
		cin >> idade;
	} while (idade <= 0);
	
	
	do {
		
		cout << "Digite sua altura:";
		cin >> altura;
	} while (altura <= 0);
	
	
	do {
		
		cout << "Digite seu peso";
		cin >> peso;
	} while (peso < 0);
	
	do {
		
		cout << "Digite seu sexo:";
		cin >> sexo;
	}  while (sexo != 'F' && sexo != 'M');
	
	
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << nome << endl;
	cout << "Altura: " << nome << endl;
	cout << "Peso: " << nome << endl;
	cout << "Sexo: " << nome << endl;
	
}
