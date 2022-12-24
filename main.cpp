#include <iostream>
using namespace std;
int binarysearch( int arr[],int l,int r,int element){
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==element){
            return mid;
        }else if(element>arr[mid]){
            l=mid+1;
        }else {
            r=mid-1;
        }
    }
    return -1;
}
int main() {
    //declare sorted list
    int arr[]={2,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    //item need to search
    int k=50;
    //search
    cout<<binarysearch(arr,0,n-1,k);
}
