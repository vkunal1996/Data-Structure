#include <iostream>
using namespace std;
int main()
{
    /* Deletion of  Duplicate elements */
    int *array;
    int size;
    cout<<"Enter the Size of Array ";
    cin>>size;
    array=new int[size];
        int i,j,temp;
            for(i=0;i<size;i++)
            {
                cin>>array[i];
            }
            cout<<"Array before Sorting ";
            for(i=0;i<size;i++)
            {
                cout<<array[i]<<" ";
            }
            cout<<endl;
            cout<<"Array After Sorting ";
            for(i=0;i<size-1;i++)
            {
                for(j=i+1;j<size;j++)
                {
                    if(array[i]>array[j])
                    {
                        temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;
                    }
                }
            }
                for(i=0;i<size;i++)
                {

                    cout<<array[i]<<" ";
                }

}


