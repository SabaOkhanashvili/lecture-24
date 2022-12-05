#include <iostream>
using namespace std;

int main()
{
    int arr[100],size,pos,i,count = 0;
    cout<<"შეიყვანეთ მასივის ზომა \n";
    cin >> size;
    
    cout<<"შეიყვანეთ მნიშვნელობა მასივში \n";
    
    for(i = 0;i < size;i++){
        cin >> arr[i];
    }
    cout<<"შეიყვანეთ პოზიცია\n";
    cin>>pos;
    
    for(i = pos -1;i<size;i++){
        arr[i] = arr[i+1];
    }
    
    size--;
    
    
    for(i = 0;i<size;i++){
        cout<<"  "<<arr[i];
    }
    return 0;
}