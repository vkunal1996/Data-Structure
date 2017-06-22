#include<iostream>
using namespace std;
int main()
{
	int *array,size,i,firstlrg,scndlrg;
	cout<<"Enter the Sizeof the Array: ";
	cin>>size;
	array=new int[size];
	cout<<"Enter the Elements : ";
		for(i=0;i<size;i++)
		{
			cin>>array[i];
		}
			firstlrg=array[0];
			scndlrg=array[1];
				if(scndlrg>firstlrg)
				{
					scndlrg=array[0];
					firstlrg=array[1];
				}
					for(i=2;i<size;i++)
					{
						    if(array[i]>=scndlrg)
							{
									if(array[i]>=firstlrg)
									{
										scndlrg=firstlrg;
										firstlrg=array[i];
									}
										else
										{
											scndlrg=array[i];
										}
							}
					}
					cout<<"First Largest number : "<<firstlrg<<" & Second Largest Number : "<<scndlrg<<endl;
}