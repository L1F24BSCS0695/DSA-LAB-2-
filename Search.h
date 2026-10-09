#pragma once
template <class T>
int linearSearch(T arr[], int size, T key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
            return i;
    }

    return -1;
}

template <class T>
int binarySearch(T arr[], int size, T key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}