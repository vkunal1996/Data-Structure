#include <iostream>
using namespace std;
int main()
{
    int *array;
    int size;
    cout<<"Enter the Size of the Array ";
    cin>>size;
    array=new int[size];
    int i;
        for(i=0;i<size;i++)
        {
            cin>>array[i];
        }
            cout<<"Traversal of Array : ";
            for(i=0;i<size;i++)
            {
                cout<<array[i]<<" ";
            }
}


