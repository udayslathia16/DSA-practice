class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int e=n;
        while(s<e){  //(s<=e)
            int mid=s+(e-s)/2;
            if(arr[mid]<arr[mid+1]){
                //A wali line pe hun
                //peak right me hai
                s=mid+1;
            }
            else{
                //yaa toh me B pe hun
                //ya toh peak pe hun
                e=mid;//important
            }
        }
        return s;
    }
};