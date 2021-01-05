#include <iostream>
using namespace std;

int binarySearch(int arr[],int Start,int End,int key){
    int mid = ( Start + End ) / 2;

    if ( Start > End ) return -1;
    if ( arr[mid] == key ) return mid;
    if ( arr[mid] < key ){
        Start = mid + 1;
        mid = ( Start + End ) / 2;
        return binarySearch(arr,Start,End,key);
    }
    if ( arr[mid] > key ){
        End = mid - 1;
        mid = ( Start + End ) / 2;
        return binarySearch(arr,Start,End,key);
    }
}

int main()
{
    int Size,val;
    cout << "enter the size of the array" << endl;
    cin>>Size;
    int arr[Size];
    for ( int i =0;i < Size;i++){
        cout << "enter element " << i +1 <<endl;
        cin >> arr[i];
    }
    cout << "enter the number to be searched" << endl;
    cin >> val;
    cout << "your number is at index " << binarySearch( arr , 0 , Size -1 ,val ) << endl;
    return 0;
}
