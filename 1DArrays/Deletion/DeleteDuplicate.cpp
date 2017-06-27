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
            int loc=-1,j,k;

                for(i=0;i<size;i++)
                {
                    loc=-1;
                    for(j=i+1;j<size;)
                    {
                        if(array[i]==array[j])
                        {
                            loc=j;
                            for(k=loc;k<size-1;k++)
                            {
                                array[k]=array[k+1];
                            }
                            size=size-1;
                        }
                        else
                        {
                            j++;
                        }
                    }
                }
                cout<<"Array after Deleting Duplicate Elements : ";
                    for(i=0;i<size;i++)
                    {
                        cout<<array[i]<<" ";
                    }
}


