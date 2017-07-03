#include<iostream>
#include<iomanip>
using namespace std;
int i,j,k,temp;
int **array1,**array2,**array3;
int row1,col1,row2,col2;
void Multiply()
{
	
	cout<<"Enter the Rows and Columns of the First Array : ";
	cin>>row1>>col1;

	cout<<"Enter the Rows and Columns of the Second Array : ";
	cin>>row2>>col2;
	
	if(col1!=row2)
		{
			cout<<"Multiplication not Possible !";
		}
			else
			{
				array1=new int*[row1];
				for(i=0;i<row1;i++)
				{
					array1[i]=new int[col1];
				}
				array2=new int*[row2];
				for(i=0;i<row2;i++)
				{
					array2[i]=new int[col2];
				}
				array3=new int*[row1];
				for(i=0;i<row1;i++)
				{
					array3[i]=new int[col2];
				}
				cout<<"Enter the Elements of first Array : ";
					for(i=0;i<row1;i++)
					{
						for(j=0;j<col1;j++)
						{
							cin>>array1[i][j];
						}
					}
					cout<<"Enter the Elements of second Array : ";
					for(i=0;i<row2;i++)
					{
						for(j=0;j<col2;j++)
						{
							cin>>array2[i][j];
						}
					}
					cout<<"After Multiplying the Arrays : "<<endl;
					for(i=0;i<row1;i++)
					{
						
						for(j=0;j<col2;j++)
						{
							temp=0;
							for(k=0;k<col2;k++)
							{
								temp=temp+(array1[i][k]*array2[k][j]);
							}
							array3[i][j]=temp;
						}
					}

						for(i=0;i<row1;i++)
						{
							for(j=0;j<col2;j++)
							{
								cout<<array3[i][j]<<" ";
							}
							cout<<endl;
						}
			}
			delete(array1);
			delete(array3);
			delete(array2);
}
void SumOfArrays()
{
	cout<<"Enter the Rows and Columns of the First Array : ";
	cin>>row1>>col1;

	cout<<"Enter the Rows and Columns of the Second Array : ";
	cin>>row2>>col2;
	if(row1!=row2&&col1!=col2)
	{
		cout<<"Addition of Matrix is not Possible : ";
	}
		else 
		{
			    array1=new int*[row1];
				for(i=0;i<row1;i++)
				{
					array1[i]=new int[col1];
				}
				array2=new int*[row2];
				for(i=0;i<row2;i++)
				{
					array2[i]=new int[col2];
				}
				array3=new int*[row1];
				for(i=0;i<row1;i++)
				{
					array3[i]=new int[col2];
				}
				cout<<"Enter the Elements of first Array : ";
					for(i=0;i<row1;i++)
					{
						for(j=0;j<col1;j++)
						{
							cin>>array1[i][j];
						}
					}
					cout<<"Enter the Elements of second Array : ";
					for(i=0;i<row2;i++)
					{
						for(j=0;j<col2;j++)
						{
							cin>>array2[i][j];
						}
					}
					cout<<"After Addition of Arrays : "<<endl;
						for(i=0;i<row1;i++)
						{
							for(j=0;j<col1;j++)
							{
								array3[i][j]=array1[i][j]+array2[i][j];
								cout<<setw(3)<<array3[i][j]<<" ";
							}
							cout<<endl;
						}
		}
			delete(array1);
			delete(array3);
			delete(array2);
}
void TransposeOfMatrix()
{
	cout<<"Enter the Rows and Columns of Array Matrix : ";
	cin>>row1>>col1;

				array1=new int*[row1];
				for(i=0;i<row1;i++)
				{
					array1[i]=new int[col1];
				}
				cout<<"Enter the Elements of the Array Matrix : ";
				for(i=0;i<row1;i++)
				{
					for(j=0;j<col1;j++)
					{
						cin>>array1[i][j];
					}
				}
				cout<<"Transpose of the Array Matrix is : "<<endl;
				for(i=0;i<col1;i++)
				{
					for(j=0;j<row1;j++)
					{
						cout<<setw(2)<<array1[j][i]<<" ";
					}
					cout<<endl;
				}

}
int main()
{
	
	char choice;
	cout<<"1.)Sum 2.)Multiply 3.)Transpose : Enter choice :";
	cin>>choice;
	switch(choice)
	{
		case '1':
		SumOfArrays();
		break;
		case '2':
		Multiply();
		break;
		case '3':
		TransposeOfMatrix();
		break;
	}
	return 0;
}
