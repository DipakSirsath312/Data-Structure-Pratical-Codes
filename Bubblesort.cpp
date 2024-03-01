#include<iostream>
#include<conio.h>
using namespace std;
void bubble_sort(int[], int);
int main()
{
int arr[30], num, i;
cout<<"\nEnter no of elements :";
cin>>num;
cout<<"\nEnter array elements :";
for (i = 0; i < num; i++)
{
cin>>arr[i];
}
bubble_sort(arr, num);
getch();
}
void bubble_sort(int iarr[], int num)
{
int i, j, k, temp;
cout<<"\nUnsorted Data:";
for (k = 0; k < num; k++)
{
cout<<"\t"<<iarr[k];
}
for (i = 1; i < num; i++)
{
for (j = 0; j < num - 1; j++)
{
if (iarr[j] > iarr[j + 1])
{
temp = iarr[j];
iarr[j] = iarr[j + 1];
iarr[j + 1] = temp;
}
}
cout<<"\n\nAfter pass : "<< i<< "\n";
for (k = 0; k < num; k++)
{
cout<<"\t"<<iarr[k];
}
}
}