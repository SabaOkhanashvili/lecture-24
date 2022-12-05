#include <iostream>

using namespace std;

int main()
{
    int arr[] = {15,14,47,97,46,35};
    
    int size = 6;
    
    int sum=0;
    
    for(int i = 0; i<size;i++){
        sum = sum + arr[i];
    }
    
    cout << "მასივის ელემენტების ჯამი: " << sum;
    return 0;
}