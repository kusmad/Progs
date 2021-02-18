#include<iostream>

using namespace std;

int main(){
    
    int linha;
    int coluna;
    
    cout << "Informe o número de linhas: ";
    cin >> linha;
    cout << "Informe o número de colunas: ";
    cin >> coluna;
    
    int matrizresultante[linha][coluna];
    
    // Monta a matriz
    for(int i=1; i<=linha;){
        for(int j=1; j<=coluna;){
            if(i<j){
                matrizresultante[i][j] = j-i;
            }
            else if(i >= j){
                matrizresultante[i][j] = 2*i + j;
            }
            j++;
        }
        i++;
    }
    
    // Mostra a matriz
    for(int i=1; i<=linha;){
        for(int j=1; j<=coluna;){
            cout << matrizresultante[i][j] << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
    
}
