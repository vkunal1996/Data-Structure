#include<iostream>
#include<stdlib.h>
#include "insert.hpp"
using namespace std;

int main()
{
	int i;
	int *array;
	int n,number;
	char choice;

	cout<<"Enter the number of Elements ";
	cin>>n;
	array=new int[n];
	cout<<"Enter the Elements : ";
		for(i=0;i<n;i++)
		{
			cin>>array[i];
		}
	do
	{
		cout<<"1.) Insert at position 2.)Insert in sorted List 3.)Exit "<<endl;
		cout<<"Enter Choice : ";
		cin>>choice;
		system("clear");
		switch(choice)
		{
			case '1':
				int pos;
				cout<<"Enter the position where you want to insert ? : ";
				cin>>pos;
				cout<<"Enter the Element you want to insert : ";
				cin>>number;

				n++;
				insertAtPosition(array,n,pos,number);
				for(i=0;i<n;i++)
				{
					cout<<array[i]<<" ";
				}
				cout<<endl;
			break;
			
			case '2':
				cout<<"Enter the Element you want to insert : ";
				cin>>number;
				n++;
				insertAtSorted(array,n,number);
				for(i=0;i<n;i++)
				{
					cout<<array[i]<<" ";
				}
				cout<<endl;
			break;
				
		}
	}while(choice!='3');
				
}