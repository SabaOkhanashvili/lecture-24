
#include <iostream>

using namespace std;

int main()
{
    const int n=10;
    int arr1[n],arr2[n],i;
    
    cout <<"შეიყვანეთ მასივის ელემენტი";
    
    for(i=0;i<n;i++){
        cin >> arr1[i];
    }
    for(i = 0;i<n;i++){
        arr2[i] = arr1[i];
    }
    cout<<"კოპირებული მასივის სია არის: ";
    for(i = 0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}