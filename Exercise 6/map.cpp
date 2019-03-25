#include<iostream>
using namespace std;

template <typename T>
T* map2(T* arr, size_t size_arr, void (*mapper)(T&)){
    for(int i = 0; i<size_arr; i++){
        mapper(arr[i]);
    }
    return arr;
}

template <typename T>
void increment (T& element){
    element ++;
}
//
//int main(){
//    int arr[] = {5,2,8,5,9,0,-1,30};
//
//    void (*p1) (int) = increment;
//
//    int *arr
//
//    map2(arr, 8, p1);
//    for(int i = 0; i<8; i++){
//        cout<<arr[i]<<endl;
//    }
//}
