#include<iostream>
using namespace std;

template<class T>
class Array
{
private:
    T *data;
    int size;
public:
    Array(int s)
    {
        size=s;
        data=new T[size];
    }

    Array(const Array &obj)
    {
        size=obj.size;
        data=new T[size];

        for(int i=0;i<size;i++)
            data[i]=obj.data[i];
    }

    Array &operator=(const Array &obj)
    {
        if(this!=&obj)
        {
            delete[] data;

            size=obj.size;
            data=new T[size];

            for(int i=0;i<size;i++)
                data[i]=obj.data[i];
        }

        return *this;
    }

    T &operator[](int index)
    {
        return data[index];
    }

    int getSize()
    {
        return size;
    }

    ~Array()
    {
        delete[] data;
    }
};

int main()
{
    Array<int> arr(5);

    for(int i=0;i<arr.getSize();i++)
        arr[i]=(i+1)*10;

    for(int i=0;i<arr.getSize();i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    Array<int> copy=arr;

    for(int i=0;i<copy.getSize();i++)
        cout<<copy[i]<<" ";

    return 0;
}