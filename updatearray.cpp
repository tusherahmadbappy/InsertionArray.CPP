#include<iostream>
using namespace std;

int main(){
    int size,index,value,i,arr[100];
    cout<<endl<<"Enter the size of array: ";
    cin>>size;

    for(i=0; i<size; i++){
        cout << "Index of arr "<<i<<" is: ";
        cin>>arr[i];
    }

    cout<<endl<<"Before update elements: "<<endl;

    for(i=0; i<size; i++){
        cout << "Index of arr "<<i<<" is: " << arr[i];
        cout<<endl;

    }

    cout<<"\n\nWhich index update you want: ";
    cin>>index;

    cout<<"Which element updated index insert you want: ";
    cin>>value;

    for(int i=0; i<size; i++)
    {
        if(i==index)
            arr[i]=value;
    }
    cout<<"Updated elements: \n";
    for(int i=0; i<size; i++)
    {
        cout<<"Index of arr "<<i<<" is: "<<arr[i]<<endl;

    }


    return 0;

}
