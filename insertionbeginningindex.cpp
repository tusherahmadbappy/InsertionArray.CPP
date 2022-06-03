#include<iostream>
using namespace std;

int main(){
    int size,value,i,arr[100];
    cout<<endl<<"Enter the size of array: ";
    cin>>size;

    for(i=0; i<size; i++){
        cout << "Index of arr[" << i << "] is: ";
        cin>>arr[i];
    }

    cout<<endl<<"Before insert elements: "<<endl;

    for(i=0; i<size; i++){
        cout << "Index of arr[" << i << "] is: " << arr[i];
        cout<<endl;

    }

   

    cout<<endl<<"How value insert array you want: ";
    cin>>value;

    for(i=size;i>=0-1;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = value;

    cout<<endl<<"After insert elements: ";
    cout<<endl;
    for(i=0; i<=size; i++){
        cout<< "Index of arr[" << i << "] is: "<<arr[i]<<endl;
    }

    return 0;

}