#include<iostream>
using namespace std;
int bins_left(int nums[],int n,int target){
    int s=0,e=n-1,ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
    }
    return ans;
}
int bins_right(int nums[],int n,int target){
    int s=0,e=n-1,ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            ans=mid;
            e=mid-1;
            
        }
        else if(nums[mid]<target){
            s=mid+1;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int nums[6]={1,2,3,4,7,9};
    int n=6;
    int target;
    cout << "enter target";
    cin >> target;
    cout << bins_left(nums,n,target) <<"\n";
    cout << bins_right(nums,n,target) << "\n";
  
}