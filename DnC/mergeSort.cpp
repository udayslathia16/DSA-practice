#include <iostream>
using namespace std;

void merge(int arr[],int s,int e,int mid){

    int lenLeft=mid-s+1;
    int lenRight=e-mid;

    //create left and right array
    int *left=new int[lenLeft];
    int *right=new int [lenRight];

    //copy values from original array to left array
    int k=s;
    //k-> starting index of left array values to original array
    for(int i=0;i<lenLeft;i++){
        left[i]=arr[k];
        k++;
    }

    //copy values from original array to right array
    k=mid+1;
    //k-> starting index of right array values to original array
    for(int i=0;i<lenRight;i++){
        right[i]=arr[k];
        k++;
    }

    //actual merge logic here
    //left array is already sorted
    //right array is already sorted
    int leftIndex=0;
    int rightIndex=0;
    //yaho par galti hogi
    int mainArrayIndex=s;

    while(leftIndex <lenLeft && rightIndex <lenRight){
        if(left[leftIndex] <right[rightIndex]){
            arr[mainArrayIndex]=left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex]=right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }

        //2 more cases
        //1 case -> left array exhaust but right array me element abhi bhi bache hue hai
        while(rightIndex<lenRight){
            arr[mainArrayIndex]=right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
        //2 case->right array exhaust part left me abhi bhi element bache hue hai
        while(leftIndex<lenLeft){
            arr[mainArrayIndex]=left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        //last step
        delete[] left;
        delete[] right;
    }


}

void mergeSort(int arr[],int s,int e){
    //base case
    if(s>e){
        return ;
    }
    if(s==e){
        return;
    }
    //break
    int mid=s+(e-s)/2;
    //s->mid is left part
    //mid+1->e is right part

    //recursion bulao
    //left and right array sort karo
    //RE for left array
    mergeSort(arr,s,mid);
    //RE for right array
    mergeSort(arr,mid+1,e);

    //merge two sorted array
    merge(arr,s,e,mid);

}

int main(){
    int arr[]={2,1,6,9,4,5};
    int size=6;
    int s=0;
    int e=size-1;

    cout<<"before merge sort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }
    mergeSort(arr,s,e);

    cout<<"after merge sort: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}