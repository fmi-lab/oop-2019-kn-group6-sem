#include "matrix.h"

Matrix::Matrix(size_t width, size_t height): width(width), height(height){
    data.resize(height);
    for(int i = 0; i<height; i++){
        data[i].resize(width);
        for(int j = 0; j<width; j++){
            data[i][j] = 0;
        }
    }
}

Matrix::Matrix(const Matrix& other): width(other.width), height(other.height)
{
    data = other.data;
}

Matrix& Matrix::operator=(const Matrix& other)
{
    if(this != &other)
    {
        for(int i = 0 ; i < height; i++)
        {
            data[i].clear();
        }
        data.clear();
        width = other.width;
        height = other.height;
        data = other.data;
    }
}

size_t Matrix::get_height()const
{
    return height;
}

size_t Matrix::get_width()const
{
    return width;
}

ostream& operator<<(ostream& out, const Matrix& mat)
{
    out<<mat.width<<' '<<mat.height<<endl;
    for(int i = 0; i < mat.height; i++)
    {
        for(int j = 0; j<mat.width; j++)
        {
            out<<mat.data[i][j]<< ' ';
        }
    }
}

istream& operator>>(istream& in, Matrix& mat)
{
    in>>mat.height>>mat.width;
    mat.data.resize(mat.height);
    in.ignore(1);
    cout<<"peek = "<<in.peek()<<" = "<<(char)in.peek()<<endl;
    cout<<"state = "<<in.rdstate()<<endl;
    cout<<"goodbit = "<<in.good()<<"\neofbit = "<<in.eof()<<"\nfailbit = "<<in.fail()<<"\nbadbit = "<<in.bad()<<endl;
    char buff;
    in.clear();
    while(in>>buff){
        cout<<buff;
    }
    for(int i = 0; i < mat.height; i++)
    {
        mat.data[i].resize(mat.width);
        for(int j = 0; j < mat.width; j++)
        {

        }
    }
}

Matrix Matrix::operator*(const Matrix& other)const{
    if(width == other.height){
    Matrix result(height, other.width);
    for(int i = 0; i<width; i++){
        for(int j = 0; j<height; j++){
            for(int k = 0; k<other.width; k++){
//                cout<<data[j][i]<<" * "<<other.data[k][i]<<endl;
                result.data[j][k] += data[j][i] * other.data[k][i];
            }
        }
    }
    for(int i = 0; i<result.height; i++){
        for(int j = 0; j<result.width; j++){
//            cout<<result.data[i][j]<<' ';
        }
//        cout<<endl;
    }
    return result;
    } else{
        cout<<"Incompatible matrices!\n";
        Matrix fake;
        return fake;
    }
}







