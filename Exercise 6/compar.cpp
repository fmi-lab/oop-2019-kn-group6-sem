#include<stdlib.h>
#include<iostream>

using namespace std;
int compare_int(const void* el1, const void* el2){
    int elem1 = *(int*)el1;
    int elem2 = *(int*)el2;

    if(elem1 < elem2){
        return -1;
    } else if (elem1 == elem2){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    int arr[] = {5,2,8,5,9,0,-1,30};
    qsort(arr, 8, sizeof(int), compare_int);

    for(int i = 0; i<8; i++){
        cout<<arr[i]<<endl;
    }
}
