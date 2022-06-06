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

    cout<<endl<<"How value insert array you want: ";
    cin>>value;

    for(i=0;i<size;i++)
    {
       if(arr[i]==size){
           arr[i+1]=value;
       }
    }
    cout<<endl<<"After update elements: ";
    cout<<endl;
    for(i=0; i<=size; i++){
        cout<< "Index of arr "<<i<<" is: "<<arr[i]<<endl;
    }

    return 0;

}