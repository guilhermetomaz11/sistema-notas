#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

//Entrada - declaração das variáveis
string nomes[20];
int qntdAlunos;

//Processamento
cout << "=== SISTEMA DE NOTAS v4.0===" << endl;

do {
    cout << "Quantidade de alunos (1 a 20): ";
    cin >> qntdAlunos;
}while (qntdAlunos < 1 || qntdAlunos > 20);


cin.ignore();

for (int i = 0; i < qntdAlunos; i++){
    cout << "Nome do aluno: " << i + 1 << ":" ;
    getline(cin, nomes[i]);
}

//Saída
cout << "\nAlunos cadastrados:" << endl;
for (int i = 0; i < qntdAlunos; i++){
cout << "  " << i + 1 << ". " << nomes[i] << endl;
}
    return 0;
}