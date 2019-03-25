#include"map.cpp"
#include"filter_lecture.cpp"
#include"reduce.cpp"

/// Take all even elements, square them, and take their product

template <typename T>
bool even(const T& element){
    return element%2 == 0;
}

template <typename T>
void squarer(T& element){
    element = element* element;
}

template <typename T, typename V>
V producer(V accumulator, T element){
    return accumulator * element;
}

int main(){
    int arr[] = {5,2,8,5,9,1,-1,30};

    size_t new_size;
    int* filtered = filter(arr, 8, even, new_size);
    map2(filtered, new_size, squarer);
    int result = reduce(filtered, new_size, 1, producer);
    cout<<result<<endl;



}
