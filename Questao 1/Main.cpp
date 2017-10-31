#include "Conta.h"
#include "IConta.h"
#include "ContaEspecial.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nomeCliente;
    double salarioMensal;
    string numeroConta;
    double saldo, saque, deposito;
    int escolha, tipo;

    cout << "Bem Vindo" << endl;

    cout << "Qual o seu nome?" << endl;
    cin >> nomeCliente;

    cout << "Qual o seu salario Mensal?" << endl;
    cin >> salarioMensal;

    cout << "Qual seu tipo de conta?" << endl;
    cout << "Digite 1 para conta Normal" << endl;
    cout << "Digite 2 para conta Especial" << endl;
    cin >> tipo;

    cout << "Qual seu numero de conta?" << endl;
    cin >> numeroConta;

    saldo = salarioMensal;

    if(tipo == 1)
    {
        Conta c(nomeCliente, salarioMensal, numeroConta, saldo);
    }
    if(tipo == 2)
    {
        ContaEspecial c(nomeCliente, salarioMensal, numeroConta, saldo);

    }
    while(1){
        cout << "Escolha uma das opções a seguir:" << endl;
        cout << "Opcao 1 - Consultar saldo" << endl;
        cout << "Opcao 2 - Realizar saque" << endl;
        cout << "Opcao 3 - Realizar deposito" << endl;
        cout << "Opcao 4 - Consultar Limite" << endl;
        cout << "Opcao 5 - Finalizar sessao" << endl;
        cin >> escolha;

        if(escolha == 1)
        {
            cout << c.getNomeCliente() << " seu saldo eh: RS " << c.getSaldo() << endl;
        }

        if(escolha == 2)
        {
            cout << c.getNomeCliente() << " qual valor do saque?" << endl;
            cin >> saque;
            c.sacar(saque);
        }
        if(escolha == 3)
        {
            cout << c.getNomeCliente() << " qual valor do deposito?" << endl;
            cin >> deposito;
            c.depositar(deposito);
        }
        if(escolha == 4)
        {
            cout << c.getNomeCliente() << " seu limite eh de: RS " << c.definirLimite();
        }

        if(escolha == 5)
        {
            cout << "Obrigado e volte sempre :)" << endl;
            return 0;
        }
    }
}
