#include<iostream>
using namespace std;

bool power_of_two(int i){
    int j = i - 1;

    if((i&j) == 0){
        cout<<"The number is a power of two.\n";
        return true;
    } else{
        cout<<"The number is NOT a power of two.\n";
        return false;
    }
}

void bitwise_swap(int& x, int& y){
    x = x^y;
    y = x^y;
    x = x^y;
}

int main(){
//    cout<<(5&9)<<endl<<(5|9)<<endl<<(5^9)<<endl<<(~5)<<endl<<(5>>1)<<endl<<(9<<3)<<endl;
    int n = 0;
    cout<<((~n)>>1)<<endl;
    unsigned int m = 0;
//    cout<<(~m)<<endl;
//    (l&k)==0 ? cout<<"k is a power of two.\n" : cout<<"k is NOT a power of two.\n";

    cout<<power_of_two(1024)<<endl;

    int x = 123;
    int y = 543;
    bitwise_swap(x,y);
    cout<<x<<endl<<y<<endl;
}
