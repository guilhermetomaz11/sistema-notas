#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    string nomes[20];
    int qntdAlunos;
    float notas[20][5];
    float media[20];
    int qntdDisciplinas;
    int opcaoInicial;

    cout << "\n=== SISTEMA DE NOTAS v4.1 ===" << endl;
    cout << "1 - Novo relatório" << endl;
    cout << "2 - Ver relatório salvo" << endl;
    cout << "3 - Sobre o sistema" << endl;
    cout << "4 - Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> opcaoInicial;


    if (opcaoInicial == 4) {
        return 0;
    }

    if (opcaoInicial == 3) {
        cout << "\n=== SOBRE ===" << endl;
        cout << "Sistema de Notas v4.1" << endl;
        cout << "Desenvolvido por: Guilherme Tomaz Camara" << endl; 
        cout << "Turma: LOPAL 2026 - SENAI-SP\n" << endl;
        return 0;
    }
    if (opcaoInicial == 2) {
        ifstream leitura("relatorio.txt");
        if (leitura.is_open()) {
            string linha;
            cout << "\n";
            while (getline(leitura, linha)) {
            cout << linha << endl;
        }
            leitura.close();
    }else {
        cout << "Nenhum relatório encontrado!" << endl;
    }
    return 0;
    }
    

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
    int alunosAprovados = 0; int alunosReprovados = 0; int alunosRecuperacao = 0;
    for (int i = 0; i < qntdAlunos; i++) {
        cout << i + 1 << ". " << nomes[i] << " - Média: " << media[i] << endl;
        if (media[i] >= 7) {
            cout << "   Situação: Aprovado" << endl;
            alunosAprovados++;
        } else if (media[i] >= 5) {
            cout << "   Situação: Recuperação" << endl;
            alunosRecuperacao++;
        } else {
            cout << "   Situação: Reprovado" << endl;
            alunosReprovados++;
        }
    }

    cout << "==============================" << endl;
    cout << "RESUMO:" << endl;
    cout << "Alunos aprovados: " << alunosAprovados << endl;
    cout << "Alunos em recuperação: " << alunosRecuperacao << endl;
    cout << "Alunos reprovados: " << alunosReprovados << endl;
    cout << "==============================" << endl;

ofstream arquivo("relatorio.txt");
if (arquivo.is_open()) {
    arquivo << "=== RELATÓRIO FINAL ===" << endl;
    for (int i = 0; i < qntdAlunos; i++) {
        arquivo << nomes[i] << " - Média: " << media[i] << endl;
        if (media[i] >= 7) {
            arquivo << "   Situação: Aprovado" << endl;
        } else if (media[i] >= 5) {
            arquivo << "   Situação: Recuperação" << endl;
        } else {
            arquivo << "   Situação: Reprovado" << endl;
        }
    }
    arquivo << "\nResumo: " << alunosAprovados << " aprovados, " << alunosRecuperacao << " em recuperação, " << alunosReprovados << " reprovados." << endl;
arquivo.close();
    cout << "\nRelatório salvo em 'relatorio.txt'" << endl;
} else {
    cout << "Erro ao salvar o relatório!" << endl;
}




    return 0;
}
