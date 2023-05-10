#include<bits/stdc++.h>

using namespace std;
/*
Memory Complexity= O(n)
*/
// v.insert(v.begin()+i)

class Array
{
private:
    int *arr; // memory--> O(n)
    int cap;  // memory--> O(1)
    int sz;   // memory--> O(1)

    void Increase_size()
    {
        cap*=2;
        int *temp = new int[cap];
        for(int i=0; i<sz; i++)
        {
            temp[i] = arr[i];
        }
        delete [] arr;
        arr = temp;
    }

    void Decrease_capacity()
    {
        cap/=2;
        int *temp = new int[cap];
        for(int i=0; i<sz; i++)
        {
            temp[i]=arr[i];
        }
        delete [] arr;
        arr = temp;
    }

public:
    Array()
    {
        arr = new int[1];
        cap=1;
        sz=0;
    }

    // Time complexity of Push_back() = O(1)
    /*

    */
    int Push_back(int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }

    void Insert(int pos, int x)
    {
        if(cap==sz)
        {
            Increase_size();
        }
        for(int i=sz-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = x;
        sz++;
    }

    // O(n)
    void Print()
    {
        for(int i=0; i<sz; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    // O(1)
    int getSize()
    {
        return sz;
    }

    int getCapacity()
    {
        return cap;
    }

    // O(1)
    int getElement(int idx)
    {
        if(idx>=sz)
        {
            cout<<"Error "<<idx<<" is out of bound\n";
            return -1;
        }
        return arr[idx];
    }

    // O(1)
    void Pop_back()
    {
        if(sz==0)
        {
            cout<<"Current size i 0\n";
            return;
        }
        sz--;

        //decrease capacity
        if(sz<=cap/2)
        {
            Decrease_capacity();
        }
    }

    // O(sz)
    void Erase(int pos)
    {
        if(pos>=sz)
        {
            cout<<"Position doesn't exist.\n";
            return;
        }
        for(int i=pos+1; i<sz; i++)
        {
            arr[i-1] = arr[i];
//            swap(arr[i-1], arr[i]);
        }
        sz--;

        //decrease capacity
        if(sz<=cap/2)
        {
            Decrease_capacity();
        }
    }

};

int main()
{
    Array a;
    cout<<"Current Size is "<<a.getSize()<<"\n";
    cout<<"Capacity is "<<a.getCapacity()<<"\n";


    a.Push_back(1);
    a.Push_back(2);
    a.Push_back(3);
    a.Push_back(4);
    a.Push_back(5);

    a.Print();
    cout<<"Current Size is "<<a.getSize()<<"\n";
    cout<<"Capacity is "<<a.getCapacity()<<"\n";


    a.Pop_back();
    a.Print();
    cout<<"Current Size is "<<a.getSize()<<"\n";
    cout<<"Capacity is "<<a.getCapacity()<<"\n";

    a.Pop_back();
    a.Print();
    cout<<"Current Size is "<<a.getSize()<<"\n";
    cout<<"Capacity is "<<a.getCapacity()<<"\n";


    a.Erase(1);
    a.Print();

    cout<<"Current Size is "<<a.getSize()<<"\n";
    cout<<"Capacity is "<<a.getCapacity()<<"\n";

//    a.Insert(1,20);
//    cout<<"After Inserting\n";
//    a.Print();
//
//    cout<<a.getSize()<<"\n";
//
//    for(int i=0; i<a.getSize(); i++)
//    {
//        cout<<a.getElement(i)<<" ";
//    }
//    cout<<"\n";
//    cout<<a.getElement(5)<<"\n";

    return 0;
}
