#include<iostream>
using namespace std;

class complex_number{
private:
    double real;
    double comp;

public:
    complex_number(): real(0), comp(0){}
    complex_number(double real, double comp): real(real), comp(comp){}
    complex_number(const complex_number& other): real(other.real), comp(other.comp){}
    ~complex_number(){}

    complex_number& operator=(const complex_number& other){
        this->real = other.real;
        this->comp = other.comp;
        return *this;
    }

    complex_number operator+(const complex_number& other){
        complex_number result(this->real + other.real, this->comp + other.comp);
        return result;
    }

    complex_number operator-(const complex_number& other){
        complex_number result(this->real - other.real, this->comp - other.comp);
        return result;
    }

    complex_number operator*(const complex_number& other){
        complex_number result;
        result.set_real(this->real * other.real - this->comp * other.comp);
        result.set_comp(this->comp * other.real + this->real * other.comp);
        return result;
    }

    complex_number operator+(int real){
        complex_number result(this->real + real, this->comp);
        return result;
    }

    void set_real(double real){
        this->real = real;
    }
    void set_comp(double comp){
        this->comp = comp;
    }

    double get_real() const{
        return real;
    }

    double get_comp() const{
        return comp;
    }

    complex_number operator++(int x){
        complex_number result(*this);
        this->real ++;
        return result;
    }

    complex_number operator++(){
        this->real ++;
        return *this;
    }

    bool operator<(const complex_number& other){
        return this->real < other.real;
    }

    bool operator>(const complex_number& other){
        return this->real > other.real;
    }

    bool operator==(const complex_number& other){
        return this->real == other.real;
    }

    bool operator!=(const complex_number& other){
        return this->real != other.real;
    }

    friend complex_number operator+(int, const complex_number&);
};

complex_number operator+(int real, const complex_number& comp_num){
    complex_number result(comp_num.real + real, comp_num.comp);
    return result;
}



int main(){
    complex_number c1, c2(3, 4);
    c1 = c1 + c2;
    cout<<c1.get_real()<<endl<<c1.get_comp()<<endl;
    complex_number c3(1,2);
    c3 = c3*c2;
    cout<<c3.get_real()<<endl<<c3.get_comp()<<endl;
    c1 = c1+3;
    cout<<c1.get_real()<<endl<<c1.get_comp()<<endl;

    c1 = 3 + c1;

    cout<<c1.get_real()<<endl<<c1.get_comp()<<endl;

    cout<<"**************************"<<endl;
//    int x = 3;
//    cout<<++x;


    cout<<(++c1).get_real()<<endl<<c1.get_comp()<<endl;


}















