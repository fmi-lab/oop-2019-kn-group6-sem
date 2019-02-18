#include<iostream>
#include<cstring>
#include<cassert>

using namespace std;

class Student{
private:
    char* name;
    int fn;

public:
    Student(){
        cout<<"Student constructor\n";
        name = new char[0];
        strcpy(name,"");
//        assert(name);
        fn = 0;
    }

    ~Student(){
        cout<<"Student destructor "<<name<<endl;
        delete name;
    }

    int getFn(){
        return fn;
    }

    void setFn(int other_fn){
        fn=other_fn;
    }

    void setName(char* other_name){
        if(strlen(name) > 0){
            delete name;
        }
        name = new char[strlen(other_name) + 1];
        assert(name);
        strcpy(name, other_name); ///name = other_name; NO!!!
    }

    void printName(){
        cout<<name<<endl;
    }
};

int main(){
    Student s1;
    s1.setFn(42);
    cout<<s1.getFn()<<endl;
    char* str;
    str = new char[strlen("Pesho") + 1];
    assert(str);
    strcpy(str, "Pesho");

    s1.setName(str);
    s1.printName();

    delete str;

    str = new char[strlen("Ivan") + 1];
    assert(str);
    strcpy(str, "Ivan");
    cout<<"s1.name = ";
    s1.printName();
    cout<<"str = "<<str;

    Student s2;

    s2.printName();
    cout<<s2.getFn()<<endl;

    s2.setName("Pavel");
    s2.printName();
    s2.setName("Ivelin");
    s2.printName();

    while(true){
        s2.setName("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    }
}























