#include<iostream>
using namespace std;

int main(){
    int size,index,value,i,arr[20];
    cout<<"Enter the size of array: ";
    cin>>size;
    //user input array element
    for(i=0; i<size; i++){
        cout << "Index of arr "<<i<<" is: ";
        cin>>arr[i];
    }

    cout<<endl<<"Before insert elements: "<<endl;
    for(i=0; i<size; i++){
        cout << "Index of arr "<<i<<" is: " << arr[i]<<endl;;
    }

    cout<<endl<<"Which after index insert element you want: ";
    cin>>index;
    cout<<"How value insert array you want: ";
    cin>>value;

    for(int i=size;i>=index-1;i--){
        arr[i+1]=arr[i];
    }
    arr[index-1]=value;

    cout<<endl<<"After insert elements: "<<endl;
    for(i=0; i<=size; i++){
        cout<< "Index of arr "<<i<<" is: "<<arr[i]<<endl;
    }

    return 0;
}