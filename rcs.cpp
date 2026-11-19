#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> aray,int tar){
    int st=0;
    int end=aray.size()-1;;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(tar<aray[mid]){
            end = mid-1;
        }
        else if(tar>aray[mid]){
            st = mid+1;
        }
        else{
            return mid;
        }
    }
    
}
int main(){
    vector<int> arr = {-1,2,4,7,9,18,20,22};

    int target = 20;
    cout<< binarysearch(arr, target)<<endl;

}