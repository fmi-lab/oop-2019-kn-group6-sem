#include<iostream>
using namespace std;

template<typename T, typename V>
V reduce (T* arr, size_t size_arr, V start, V (*reducer) (V, T)){
    V result = start;
    for(int i = 0; i<size_arr; i++){
        result = reducer(result, arr[i]);
    }
    return result;
}



template <typename T, typename V>
V sum (V accumulator, T element){
    accumulator = accumulator + element;
    return accumulator;
}





//int main(){
//    int arr[] = {5,2,8,5,9,0,-1,30};
//
//    int result = reduce<int, int>(arr, 8, 0, sum<int, int>);
//
//    cout<<result<<endl;
//}
