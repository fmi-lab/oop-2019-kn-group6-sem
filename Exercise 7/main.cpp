#include "Student.cpp"
#include "Person.cpp"

int main(){
    Person p1;
    Student s1, s2("Pesho", "0123456789", 20, 82000);
    Student s3(s2);
    s1 = s2;
}
