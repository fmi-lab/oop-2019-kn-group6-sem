#include<iostream>

template <typename T>
T* filter (T arr[], size_t n, bool (*pred) (const T&), size_t& newSize)
{
    size_t count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (pred(arr[i]))
        {
            count++;
        }
    }
    T *result = new T[count];
    count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (pred(arr[i]))
        {
            result[count] = arr[i];
            count++;
        }
    }
    newSize = count;
    return result;
}
