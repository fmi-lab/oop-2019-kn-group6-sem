#include<iostream>
using namespace std;

template <typename T>
T* filter(T* arr, size_t size_arr, bool (*pred) (const T&)){
    for(int i = 0; i<size_arr; i++){
        if(!pred(arr[i])){
            for(int j = i; j<size_arr-1; j++){
                arr[j] = arr[j+1];
            }
            arr[size_arr - 1] = 0;
            size_arr --;
            i--;
        }
    }
    return arr;
}

template <typename T>
bool pred1 (const T& element){
    return element < 5;
}



//int main(){
//    int arr[] = {5,2,8,5,9,0,-1,30};
//    filter(arr, 8, pred1);
//
//    for(int i = 0; i<8; i++){
//        cout<<arr[i]<<endl;
//    }
//}
