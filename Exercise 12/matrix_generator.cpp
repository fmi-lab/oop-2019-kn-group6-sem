#include<iostream>
#include <stdlib.h>
#include<time.h>
#include<fstream>
using namespace std;

int main(){
    unsigned int n, m, k;
    cout<<"Input dimensions:\n";
    cin>>n>>m>>k;
    srand (time(NULL));

    ofstream fout1("matrix1.txt", ios::out);
    ofstream fout2("matrix2.txt", ios::out);

    fout1 << n <<' '<< m << endl;
    fout2 << m <<' '<< k << endl;

    for(int i = 0; i<n*m; i++){
        fout1 << (rand() % 200 - 100) << ' ';
    }

    for(int i = 0; i<m*k; i++){
        fout2 << (rand() % 200 - 100) << ' ';
    }
}
