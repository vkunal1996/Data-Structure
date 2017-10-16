#include <iostream>
using namespace std;
int main()
{
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
            int number,beg=0,end=size-1,mid;
            cout<<"Enter the Number you want to find ";
            cin>>number;
            mid=(beg+end)/2;
                for(i=0;i<size;i++)
                {
                    if(number>array[mid])
                    {
                        beg=mid+1;
                    }
                        else if(number<array[mid])
                        {
                            end=mid-1;
                        }
                            else if(number==array[mid])
                            {
                                loc=mid;
                                break;
                            }
                            mid=(beg+end)/2;

                }
                if(loc==-1)
                {
                    cout<<"Number not found "<<endl;
                }
                    else
                    {
                        cout<<number<<" is present at "<<loc<<" location";
                    }

}
