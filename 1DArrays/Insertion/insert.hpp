#include<iostream>
using namespace std;

void insertAtPosition(int array[],int n,int pos,int number)
{	
				int i;
				if(pos==n+1)
				{
					array[pos]=number;
				}
					else
					{
						for(i=n;i>pos;i--)
						{
							array[i]=array[i-1];
						}
						array[pos]=number;
					}
}
	void insertAtSorted(int array[],int n,int number)
	{
		int i,pos=-1;
			for (i=0;i<n-1;i++)
			{
				if(array[i]>number)
				{
					pos=i;
					break;
				}
			}
				if(pos==-1)
				{
					pos=n;
					array[pos-1]=number;
				}
				else
				{
					for(i=n;i>=pos;i--)
					{
						array[i]=array[i-1];
					}
					array[pos]=number;
				}
	}
