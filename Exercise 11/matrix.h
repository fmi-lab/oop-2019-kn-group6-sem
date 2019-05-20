#pragma once
#include<fstream>
#include<vector>

using namespace std;

class Matrix{
private:
    size_t width;
    size_t height;
    vector<vector<int>> data;

public:
    Matrix(size_t = 0, size_t = 0);
    Matrix(const Matrix&);
    Matrix& operator=(const Matrix&);
    size_t get_width()const;
    size_t get_height()const;
    friend ostream& operator<<(ostream&, const Matrix&);
    friend istream& operator>>(istream&, Matrix&);
    Matrix operator*(const Matrix&) const;
};

ostream& operator<<(ostream&, const Matrix&);
istream& operator>>(istream&, Matrix&);
