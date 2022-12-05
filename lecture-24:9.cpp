#include <iostream>

using namespace std;

int main()
{
    const int size = 5;
    
    int arr1[size];
    int arr2[size];
    int merge[size *2];
    cout<<"შეიყვანეთ პირველი მასივის ელემენტები"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    cout<<"შეიყვანეთ მეორე მასივის ელემენტები"<<endl;
    for(int i = 0;i < size;i++){
        
        cin>>arr2[i];
    }
    for(int i = 0;i<size;i++){
        
        merge[i] = arr1[i];
    }
    
    for(int i = 0; i< size; i++){
        
        merge[size + i] = arr2[i];
    }
    
    cout<<"შერწყმა მასივი არის"<< endl;
    
    for(int i = 0; i < size * 2;i++){
        cout<<merge[i]<<" ";
    }

    return 0;
}