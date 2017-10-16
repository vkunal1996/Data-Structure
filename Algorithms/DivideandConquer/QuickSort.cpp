#include<iostream>
using namespace std;
int *array;
int i;
int size;
int j;
void interchange(int,int);
void Sort(int,int);
int partition(int ,int);

int main()
{
    cout<<"Enter the Size of the Array : ";
    cin>>size;
        array=new int[size];
        for(i=0;i<size;i++)
        {
            cin>>array[i];
        }
        Sort(0,size-1);
        cout<<endl<<"After Sorting Array is  : ";
        for(i=0;i<size;i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
}
void Sort(int p,int q)
{
    if(p<q)
    {
        j=partition(p,q+1);
        Sort(p,j-1);
        Sort(j+1,q);
    }
}
int partition(int m,int p)
{
    int v=array[m];
    i=m;
    j=p;
    do
    {
        do
        {
            i=i+1;
        }while(!(array[i]>=v)&&(i!=j));
        do
        {
            j=j-1;
        }while(!(array[j]<=v));
            
            if(i<j)
            {
                interchange(i,j);
            }
          
    }while(!(i>=j));
    array[m]=array[j];
    array[j]=v;
    return j;
}
void interchange(int i,int j)
{
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}
