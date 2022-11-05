#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int candidato, eleitor = 0, limpar = 0, length = 0;
    string eleitores[] = {"", "Bernardo", "Arthur", "Luiza", "Vitoria", "Bruno"};

    cout << "OLA ELEITOR! VOTE AGORA NO NOVO PRESIDENTE DO BRASIL!" << endl;
    cout << "-----------------------------------------------------" << endl << endl;
    cout << "Insira seu codigo de eleitor:" << endl;
    cin >> eleitor;
    system("cls");
    if (eleitores[eleitor] != "" || eleitor < *(&eleitores + 1) - eleitores)
    {
        cout << "Obrigado eleitor(a), " << eleitores[eleitor] << "! Vote consciente!" << endl;
        system("pause");
        system("cls");

        do
        {
            cout << "-----------------------------------" << endl;
            cout << "|            PRESIDENTE:          |" << endl;
            cout << "|---------------------------------|" << endl;
            cout << "|Digite o numero do seu candidato |" << endl;
            cout << "-----------------------------------" << endl<<endl;
            cin >> candidato;
            system("cls");

            switch (candidato)
            {
            case 13:
                cout << "Lula Molusco!" << endl << endl;
                break;
            case 22:
                cout << "Jair Salnorabo!" << endl << endl;
                break;
            case 55:
                cout << "Ciro Gominhos!" << endl << endl;
                break;
            default:
                cout << "Nulo!" << endl << endl;
                break;
            }

            cout << "Digite 1 para CONFIRMAR o voto" << endl;
            cout << "Digite 2 para LIMPAR" << endl;
            cin >> limpar;
            system("cls");
        } while(limpar == 2);
        cout <<"Voto computado com sucesso!"<<endl;
    }
    else{
        cout << "Eleitor nao cadastrado! Procure a justica eleitoral." << endl;
    }


    return 0;
}
