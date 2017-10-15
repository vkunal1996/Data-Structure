#include<iostream>
using namespace std;
int *array;
int size;
int maxo;
int mino;
void MaxMin(int i,int j)
{
    int max1,min1;
    int mid;
        if(i==j)
        {
            maxo=mino=array[i];
        }
            else if(i==j-1)
            {
                if(array[i]>array[j])
                {
                    maxo=array[i];
                    mino=array[j];
                }
                else
                {
                    maxo=array[j];
                    mino=array[i];
                }
            }
                else 
                {
                    mid=(i+j)/2;
                    MaxMin(i,mid);
                    max1=maxo;
                    min1=mino;
                    MaxMin(mid+1,j);
                    if(maxo<max1)
                    {
                        maxo=max1;
                    }
                    if(mino>min1)
                    {
                        mino=min1;
                    }

                }
}
int main()
{
    cout<<"Enter the Size of the Array : ";
    cin>>size;
    cout<<"Enter the Elements : ";
    int i;
        array=new int [size];
        for(i=0;i<size;i++)
        {
            cin>>array[i];
        }
        maxo=0;
        mino=0;
        MaxMin(0,size-1);
        cout<<"Max is : "<<maxo;
        cout<<endl<<"Min is : "<<mino<<endl;
   return 0;
}
