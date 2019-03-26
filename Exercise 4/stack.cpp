#include<iostream>
using namespace std;

/// Needs constructors and operator =

template<typename T>
struct node
{
    T value;
    node* previous;
};

template<typename T>
class Stack
{
private:
    node<T>* last;
public:
    Stack(): last(NULL) {}

    void push(T element)
    {
        node<T>* temp = new node<T>();
        temp->value = element;
        temp->previous = this->last;
        last = temp;
    }

    T top()
    {
        return last->value;
    }

    T pop()
    {
        if(last)
        {
            T result = last->value;
            node<T>* temp = last;
            last = last->previous;
            delete temp;
            return result;
        }
        cout<<"WARNING: Stack is empty\n";
        return 0;
    }

    ~Stack()
    {
        while(last->previous)
        {
            this->pop();
        }
        this->pop();
    }

    bool _empty()
    {
        return last == NULL;
    }

};

int main()
{

    Stack<int> s1;
    s1.push(3);
    s1.push(5);
    s1.push(10);
    s1.push(2);
    s1.push(4);
    s1.push(1);
    s1.push(-5);
    s1.push(0);

    cout<<s1.top()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    cout<<s1._empty();


}














