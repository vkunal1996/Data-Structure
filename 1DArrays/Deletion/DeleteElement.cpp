#include <iostream>
using namespace std;
int main()
{
    /* Deletion of elements */
    int *array;
    int size;
    cout<<"Enter the Size of Array ";
    cin>>size;
    array=new int[size];
        int i;
            for(i=0;i<size;i++)
            {
                cin>>array[i];
            }
            cout<<"Array before Deletion ";
            for(i=0;i<size;i++)
            {
                cout<<array[i]<<" ";
            }
            cout<<endl;
            int number,loc=-1;
            cout<<"Enter the Number You want To Delete ";
            cin>>number;
                for(i=0;i<size;i++)
                {
                    if(array[i]==number)
                    {
                        loc=i;
                        break;
                    }
                }
                    if(loc==-1)
                    {
                        cout<<"Sorry Number is not present in the List";
                    }
                        else
                        {
                            for(i=loc;i<size;i++)
                            {
                                array[i]=array[i+1];
                            }
                            size--;
                                cout<<"Array after Deleting Element is  : ";
                                for(i=0;i<size;i++)
                                {
                                    cout<<array[i]<<" ";
                                }
                        }
}


