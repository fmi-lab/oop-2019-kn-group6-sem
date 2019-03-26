#include<iostream>
#include<cassert>
#include<cmath>

using namespace std;

template<typename T>
class Vector{
private:
    unsigned int size_v;
    unsigned int length_v;
    T* arr;
    unsigned int start_size;

    void resize_v(bool direction){
        if(direction){
            T* arr_temp;
            arr_temp = new T[(int)(size_v * 2)];
            assert(arr_temp);
            for(int i = 0; i<length_v; i++){
                arr_temp[i] = arr[i];
            }
            delete[] arr;
            arr = arr_temp;
            size_v = (int)(size_v * 2);
        } else {
            T* arr_temp;
            arr_temp = new T[(int)(size_v / 2)];
            assert(arr_temp);
            for(int i = 0; i<length_v; i++){
                arr_temp[i] = arr[i];
            }
            delete[] arr;
            arr = arr_temp;
            size_v = (int)(size_v / 2);
        }
    }

public:
    Vector(int s = 20){
        size_v = s;
        start_size = s;
        length_v = 0;
        arr = new T[s];
        assert(arr != NULL);
    }

    Vector(const T* arr_other, unsigned int length_other){
        arr = new T[length_other * 2];
        assert(arr);
        size_v = length_other * 2;
        start_size = size_v;
        for(int i = 0; i<length_other; i++){
            arr[i] = arr_other[i];
        }
        length_v = length_other;
    }

    ~Vector(){
        size_v = 0;
        length_v = 0;
        delete[] arr;
    }

    void add_element(T elem){
        if(length_v / size_v > 0.8){
            resize_v(1);
        }
        arr[length_v] = elem;
        length_v ++;
    }

    void add_element_at(T elem, unsigned int pos){
        if(length_v / size_v > 0.8){
            resize_v(1);
        }
        for(int i = length_v; i>pos; i--){
            arr[i] = arr[i-1];
        }
        arr[pos] = elem;
        length_v ++;
    }

    T get_element_at(unsigned int pos){
        return arr[pos];
    }

    bool remove_element_from(unsigned int pos){
        cout<<"removing "<<arr[pos]<<endl;
        if(pos >= length_v){
            return false;
        }
        T elem = arr[pos];
        for(int i = pos; i<length_v - 1; i++){
            arr[i] = arr[i+1];
        }
        length_v --;

        if(length_v / size_v < 0.2 && size_v != start_size){
            resize_v(0);
        }
    }

    unsigned int get_length(){
        return length_v;
    }

    unsigned int get_size(){
        return size_v;
    }
};

int main(){
    Vector <double>v1;
    v1.add_element(42.5);
    v1.add_element(30);
    v1.add_element(5);
    v1.add_element_at(6.5, 1);
//    v1.remove_element_from(1);
    for(int i = v1.get_length(); i<30; i++){
        v1.add_element(i+0.5);
    }


//    for(int i=0; i<20; i++){
//        v1.remove_element_from(4);
//    }

    cout<<v1.get_size();

    for(int i = 0; i<v1.get_length(); i++){
        cout<<v1.get_element_at(i)<<endl;
    }

    Vector<char> v2;
    v2.add_element('e');
    for(int i = 0; i<30; i++){
        v2.add_element_at('a', 0);
    }

    for(int i = 0; i<v2.get_length(); i++){
        cout<<v2.get_element_at(i)<<endl;
    }

    int num_arr[] = {1,5,3,7,8,10,32,1,5};
    Vector<int> v3(num_arr, 7);
    for(int i = 0; i<v3.get_length(); i++){
        cout<<v3.get_element_at(i)<<endl;
    }
    cout<<v3.get_size()<<endl;
}



















