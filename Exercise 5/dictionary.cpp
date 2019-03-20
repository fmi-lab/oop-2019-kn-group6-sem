#include"dictionary.h"
#include"row.cpp"

Dictionary::Dictionary(): rows(), length(0){}

void Dictionary::add_row(const row& element){
    if(length <= 500){
        rows[length] = element;
        length ++;
    } else{
        cout<<"Dictionary is full!\n";
    }
}

void Dictionary::print_dictionary()const{
    for(int i = 0; i<length; i++){
        cout<<rows[i].get_word()<<" -> "<<rows[i].get_meaning()<<endl;
    }
}

int main(){
    row r1("1", "one"), r2("2", "two"), r3("3", "three");
    Dictionary d1;
    d1.add_row(r1);
    d1.add_row(r2);
    d1.add_row(r3);

    d1.print_dictionary();
}
