#include<bits/stdc++.h>
using namespace std;
void swapp(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{

    int n,swapNUM=0;
    cout<<"Enter the size of the  array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the element\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sorting
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
         if(a[j]>a[j+1])
         swapp(&a[j],&a[j+1]);
         swapNUM++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    cout<<"Array sorted in the "<<swapNUM<<" Swaps\n";
    return 0;

}
