#ifndef STACKT_H
#define STACKT_H
#include <iostream>
using namespace std;

template<typename T>
class Stackt
{
private:
    int count;
    int size;
    T* arr;

public:
    Stackt(int size) {
        count = 0;
        this->size = size;
        arr = new T[size];
    }

    ~Stackt()
    {
        delete[] arr;
    }

    void push(T el)
    {
        if (count < size)
        {
            arr[count++] = el;
        }
        else
        {
            cout << "STACK OVERFLOW\n";
        }
    }

    T pop()
    {
        if (count > 0)
        {
            T result;
            result = arr[--count];
            return result;
        }
        else
        {
            cout << "STACK IS EMPTY\n";
            return T();
        }
    }

    T peek()
    {
        if (count > 0)
        {
            T result;
            result = arr[count - 1];
            return result;
        }
        else
        {
            cout << "STACK IS EMPTY\n";
            return T();
        }
    }

    bool isEmpty()
    {
        return count == 0;
    }
};



#endif