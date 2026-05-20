#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    string nomes[20];
    int qntdAlunos;
    float notas[20][5];
    float media[20];
    int qntdDisciplinas;

    cout << "=== SISTEMA DE NOTAS v4.0 ===" << endl;

    do {
        cout << "Quantidade de alunos (1 a 20): ";
        cin >> qntdAlunos;
    } while (qntdAlunos < 1 || qntdAlunos > 20);

    cin.ignore();

    for (int i = 0; i < qntdAlunos; i++) {
        cout << "Nome do aluno " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    do {
        cout << "Quantidade de disciplinas (1 a 5): ";
        cin >> qntdDisciplinas;
    } while (qntdDisciplinas < 1 || qntdDisciplinas > 5);

    
    cin.ignore(); 

    for (int i = 0; i < qntdAlunos; i++) {
        cout << "\nNotas do aluno: " << nomes[i] << endl;
        float soma = 0;
        for (int j = 0; j < qntdDisciplinas; j++) {
            do {
                cout << "  Disciplina " << j + 1 << " (0 a 10): ";
                cin >> notas[i][j];
                
            } while (notas[i][j] < 0 || notas[i][j] > 10); 
            
            soma += notas[i][j];
        }
        media[i] = soma / qntdDisciplinas;
    }

    cout << "\n==============================" << endl;
    cout << "RELATÓRIO FINAL:" << endl;
    for (int i = 0; i < qntdAlunos; i++) {
        cout << i + 1 << ". " << nomes[i] << " - Média: " << media[i] << endl;
    }

    return 0;
}