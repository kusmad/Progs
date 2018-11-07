#include<iostream>
#include<iomanip>

using namespace std;

int cifra(string &chave, string &msg)
{
    string aux;
    int j=0, c;
    while(chave.length() < msg.length()){
        chave += chave[j];
        j++;
    }
    cout << "Mensagem: " << msg << "\n"
    << "chave: "  << chave << endl;
    j=0;
    while(j < msg.length()){
        chave[j]-= 'a';

        (msg[j] + chave[j] > 'z') ? c = 'a' + (chave[j] + msg[j] - 'z')-1 : c = msg[j] + chave[j];
        aux += (char) c;
        j++;

        if(msg[j] == 32)
            c = msg[j];
    }
    cout << "Mensagem cifrada: " << aux << endl;

    return 0;
}

int main(){

    cout << "Escolha a opcao desejada: \n";
    cout << "1- Cifrar\n";
    cout << "2- Decifrar\n";
    cout << "0- Sair\n";

    int op;
    cin >> op;

    while(op!=0){
        switch(op){
            case 1:
                  int op;
                    string chave;
                    string msg;

                    cout << "Digite a chave: ";
                    getline(cin, chave);
                    cin.ignore();

                    cout << "Digite a mensagem a ser cifrada: ";
                    getline(cin, msg);
                    cin.ignore();

                cifra(chave, msg);
                break;

        }
    }



}
