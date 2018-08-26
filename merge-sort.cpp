#include<iostream>

using namespace std;

void merge(int *arr, int l, int m, int h){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = h - m;
    // create temp arrays
    int t1[n1], t2[n2];
    // copy values into two temp. arrays
    for(i =0; i < n1;i++){
        t1[i] = arr[l + i];
    } 
    for(j = 0; j < n2; j++){
        t2[j] = arr[m+1+j];
    }
    // merge two arrays into the sorted one
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2){
        if(t1[i] <= t2[j]){
            arr[k] = t1[i];
            i++;
        }
        else{
            arr[k] = t2[j];
            j++;
        }
        k++;
    }
    // copy remaining elements
    while(i < n1){
        arr[k++] = t1[i++]; 
    }
    while(j < n2){
        arr[k++] = t2[j++];
    }

}

void mergesort(int *arr, int l, int h){
    int mid = (l+h)/2;
    if(l < h){
        mergesort(arr,l,mid);
        mergesort(arr,mid + 1, h);
        merge(arr,l,mid,h);
    }
}


int main(int argc, char const *argv[])
{
    int arr[] = {21,3,0,-1,555,20,5};
    mergesort(arr,0,6);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
