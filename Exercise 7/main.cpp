#include "Student.cpp"
#include "Person.cpp"

int main(){
    Person p1;
    Student s1, s2("Pesho", "0123456789", 20, 82000);
    Student s3(s2);
    s1 = s2;

    Student s4;
    s4 = (const Student&)p1;

    std::cout<<"object: "<<s4.get_fn()<<std::endl;

    Person* p_p1 = &p1;
    Student* p_s1;

    p_s1 = (Student*)p_p1;
    std::cout<<"pointer: "<<p_s1->get_fn()<<std::endl;

    Person& ps_p1 = p1;
    Student& ps_s1 = (Student&)ps_p1;
    std::cout<<"pseudonym: "<<ps_s1.get_fn()<<std::endl;

    void (Person::*pr_p)()const = Person::print_person;

    (p1.*pr_p)();

    (s1.*pr_p)();

    unsigned int (Student::*g_fn)()const = Student::get_fn;

    std::cout<<(s1.*g_fn)()<<std::endl;

//    std::cout<<(p1.*g_fn)()<<std::endl;

    unsigned int (Person::*pr_p2)();

    pr_p2 = (unsigned int (Person::*)()) Student::get_fn;

    std::cout<<(p1.*pr_p2)()<<std::endl;
}



