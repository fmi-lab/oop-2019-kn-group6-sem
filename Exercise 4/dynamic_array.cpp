#include<iostream>
#include<cassert>
#include<cmath>
#include<iomanip>

using namespace std;

template<typename T>
class Vector
{
private:
    unsigned int size_v;
    unsigned int length_v;
    T* arr;
    unsigned int start_size;

    void resize_v(bool direction)
    {
        if(direction)
        {
            T* arr_temp;
            arr_temp = new T[(int)(size_v * 2)];
            assert(arr_temp);
            for(int i = 0; i<length_v; i++)
            {
                arr_temp[i] = arr[i];
            }
            delete arr;
            arr = arr_temp;
            size_v = (int)(size_v * 2);
        }
        else
        {
            T* arr_temp;
            arr_temp = new T[(int)(size_v / 2)];
            assert(arr_temp);
            for(int i = 0; i<length_v; i++)
            {
                arr_temp[i] = arr[i];
            }
            delete arr;
            arr = arr_temp;
            size_v = (int)(size_v / 2);
        }
    }

public:
    Vector(int s = 20)
    {
        size_v = s;
        start_size = s;
        length_v = 0;
        arr = new T[s];
        assert(arr != NULL);
    }

    Vector(const T* arr_other)
    {
        arr = new T[arr_other.length_v * 2];
        assert(arr);
        size_v = arr_other.length_v * 2;
        start_size = size_v;
        for(int i = 0; i<arr_other.length_v; i++)
        {
            arr[i] = arr_other[i];
        }
        length_v = arr_other.length_v;
    }

    ~Vector()
    {
        if(arr)
        {
            delete[] arr;
        }
    }

    Vector<T>& operator=(const Vector<T>& other){
        if(this != &other){
            if(this->arr){
                delete this->arr;
            }
            this->arr = new T[other.length_v*2];
            assert(this->arr);
            for(int i = 0; i<other.length_v; i++){
                this->arr[i] = other.arr[i];
            }
            length_v = other.length_v;
        }
        return *this;
    }

    void add_element(const T& elem)
    {
        if(length_v / size_v > 0.8)
        {
            resize_v(1);
        }
        arr[length_v] = elem;
        length_v ++;
    }

    void add_element_at(const T& elem, unsigned int pos)
    {
        if(length_v / size_v > 0.8)
        {
            resize_v(1);
        }
        for(int i = length_v; i>pos; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[pos] = elem;
        length_v ++;
    }

    T get_element_at(unsigned int pos)
    {
        return arr[pos];
    }

    bool remove_element_from(unsigned int pos)
    {
        if(pos >= length_v)
        {
            return false;
        }
        T elem = arr[pos];
        for(int i = pos; i<length_v - 1; i++)
        {
            arr[i] = arr[i+1];
        }
        length_v --;

        if(length_v / size_v < 0.2 && size_v != start_size)
        {
            resize_v(0);
        }
    }

    unsigned int get_length() const
    {
        return length_v;
    }

    unsigned int get_size() const
    {
        return size_v;
    }

    T operator[](unsigned int pos)const
    {
        return arr[pos];
    }

    T& operator[](unsigned int pos)
    {
        return arr[pos];
    }

    Vector<Vector<T> > slice(unsigned int slice_length)
    {
        Vector<Vector<T> > result;
        for(int j = 0; j<length_v/slice_length; j++)
        {
            Vector<T>* slice_v = new Vector<T>;
            for(int i = 0; i<slice_length; i++)
            {
                slice_v->add_element(this->arr[j*slice_length + i]);
            }

            result.add_element(*slice_v);
            delete slice_v;
        }

        Vector<T>* slice_v = new Vector<T>();
        for(int i = 0; i<length_v%slice_length; i++)
        {
            slice_v->add_element(this->arr[i + length_v - length_v%slice_length]);
        }
        result.add_element(*slice_v);
        delete slice_v;

        return result;
    }
};

int main()
{
    Vector<int> v1;
    for(int i = 0; i<55; i++)
    {
        v1.add_element(2*i);
    }

    Vector<Vector<int> > result = v1.slice(10);

    for(int i = 0; i<result.get_length(); i++)
    {
        for(int j = 0; j<result[i].get_length(); j++)
        {
            cout<<setw(4)<<result[i][j];
        }
        cout<<endl;
    }
}
