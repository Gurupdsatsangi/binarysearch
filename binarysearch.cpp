#include<iostream>
using namespace std;
int main(){
    int nums[6]={1,2,3,4,7,9};
    int n=6,s=0,e=n-1;
    int target;
    cout << "enter target";
    cin >> target;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            cout << mid<<"\n";
            break;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
    }
}