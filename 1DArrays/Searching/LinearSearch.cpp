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
        int i,j,temp,loc=-1;
            for(i=0;i<size;i++)
            {
                cin>>array[i];
            }
            cout<<"Array Elements : ";
            for(i=0;i<size;i++)
            {
                cout<<array[i]<<" ";
            }
            cout<<endl;
            int number;
            cout<<"Enter the Number you want to find ";
            cin>>number;
                for(i=0;i<size;i++)
                {
                    if(array[i]==number)
                    {
                        loc=i+1;
                        break;
                    }
                }
                if(loc==-1)
                {
                    cout<<"Number not found ";
                }
                    else
                    {
                        cout<<number<<" is present at "<<loc<<" location";
                    }

}


