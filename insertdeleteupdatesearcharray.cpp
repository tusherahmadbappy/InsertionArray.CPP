#include<iostream>
using namespace  std;

void searcharray(int arr[],int n5)
{
    int value,search1=0;
    cout<<"\nWhich value search you want: ";
    cin>>value;

    for(int i=0;i<n5;i++)
    {
        if(arr[i]==value)
        {
            search1=1;
        }
    }
    if(search1==1)
    {
         cout<<"\nSearching element is :"<<value<<" found: "<<endl;
    }
    else{
        cout<<"\nSearching element is :"<<value<<" not found: "<<endl;
    }

}

void deleted(int arr[],int n3)
{

    int index,count4=0;

    cout<<"\nWhich index delete you want: ";
    cin>>index;


    if(index>=n3+1)
    {
        cout<<"Deletion not possible.\n";
    }
    else
    {
        for(int i=index; i<n3-1; i++)
        {

            arr[i] = arr[i+1];

        }
        cout<<"after deleted array:\n";
        for(int i=0; i<n3-1; i++)
        {
            cout<<"index of arr"<<i<<" is:"<<arr[i]<<endl;
            count4++;
        }
    }
    searcharray(arr,count4);
}

void updatedarray(int arr[],int n1)
{
    int value,index,count2=0;
    cout<<"\n\nWhich index update you want: ";
    cin>>index;

    cout<<"Which element updated index insert you want: ";
    cin>>value;

    for(int i=0; i<n1; i++)
    {
        if(i==index)
            arr[i]=value;
    }
    cout<<"Updated elements: \n";
    for(int i=0; i<n1; i++)
    {
        cout<<"Index of arr "<<i<<" is: "<<arr[i]<<endl;
        count2++;
    }

    deleted(arr,count2);


}



void insertedarray(int arr[],int n)
{
    int index,value,count1=0;
    cout<<"\nWhich index insert you want: ";
    cin>>index;
    cout<<"Which element insert you want: ";
    cin>>value;

    for(int i=n; i>index-1; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=value;
    cout<<"after inserted elements: \n";
    for(int i=0; i<n+1; i++)
    {
        cout<<"Index of arr "<<i<<" is: "<<arr[i]<<endl;
        count1++;
    }

    updatedarray(arr,count1);
}

int main()
{
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the array element: ";
        cin>>arr[i];
    }

    insertedarray(arr,n);
}
