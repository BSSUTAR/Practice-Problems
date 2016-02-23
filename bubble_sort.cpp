#include<iostream>
using namespace std;
void bubble_sort(int *a,int size)
{
	int outer_loop=0,inner_loop=0,temp=0;
	for(outer_loop=0;outer_loop<size-1;outer_loop++)
	{
		for(inner_loop=0;inner_loop<size-outer_loop-1;inner_loop++)
		{
			if(a[inner_loop]>a[inner_loop+1])
			{
				
				temp =a[inner_loop];
				a[inner_loop]=a[inner_loop+1];
				a[inner_loop]=temp;
				cout<<temp<<endl;
			}
		}
	}
}
int main()
{
	int increment=0;
	int unsorted_array[]={34,12,65,32,1,76,23,89,12,23,2,32,32};
	bubble_sort(unsorted_array,13);
	for(increment=0;increment<13;increment++)
	{
		cout<<unsorted_array[increment]<<" ";
	}
}
