#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "matrix.cpp"

int main(){
    size_t n,m,k;
    cout<<"Input dimensions:\n";
    cin>>n>>m>>k;

        srand (time(NULL));

    ofstream fout1("matrix1.txt", ios::out);
    ofstream fout2("matrix2.txt", ios::out);



    Matrix m1(n,m), m2(m,k), m3(n,k);
    ifstream fin1("matrix1.txt", ios::in);
    fin1>>m1;
    ifstream fin2("matrix2.txt", ios::in);
    fin2>>m2;

    cout<<m1;
    cout<<m2;

    m3 = m1*m2;

    ofstream fout("result.txt", ios::out);
    fout<<m3;
}
