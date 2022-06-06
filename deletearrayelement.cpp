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
        cout << "Index of arr "<<i<<" is: " << arr[i]<<endl;

    }

    cout<<endl<<"Which index delete array you want: ";
    cin>>index;

    if (index >= size+1)
     cout<<"Deletion not possible.\n";
    else
    {
      for (i = index; i<size - 1; i++)
         arr[i] = arr[i+1];

      cout<<"Resultant array:\n";

      for (i = 0; i < size - 1; i++)
        cout << "Index of arr "<<i<<" is: " << arr[i]<<endl;
   }

    return 0;

}