#include <iostream>
#include <string>
using namespace std;

int main() {
        string chave;
        string msg;
        string crypted = "";
        unsigned int i=0, caractere;

        cout << "Informe a chave : ";
        getline(cin, chave);

        cout << "Informe a mensagem a ser cifrada: ";
        getline(cin, msg);

        while(chave.length() < msg.length()){ // enquanto a chave menor que a mensagem,
            chave += chave[i]; //acrescenta caracteres na chave
            i++;
        }
        cout << "mensagem:" << msg << endl << "   chave:" << chave << endl; // remover isto

        i = 0;
        while(i < msg.length()){ // percorre toda a mensagem
            chave[i] -= 'a';
            //cout << "chave:" << chave << endl; // remover isto
            if (msg[i] + chave[i] > 'z') // testa se o caractere cifrado ultrapassa Z
                caractere = 'a' + (chave[i] + msg[i] - 'z')-1;
            else if(msg[i] == 32) // se o caractere for espa�o
                caractere = msg[i];
            else
                caractere = msg[i] + chave[i]; // substitui caractere pelo caractere da tabela
            crypted += (char) caractere;
            i++;
        }
        cout << "Cifrada:" << crypted << endl;
        system("pause");
}
