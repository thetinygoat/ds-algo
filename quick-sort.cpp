#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *arr, int l, int h){
    int i;
    int p;
    int firsthigh;

    p = h;
    firsthigh = l;
    for(i = l; i < h; i++){
        if(arr[i] < arr[p]){
            swap(&arr[i], &arr[firsthigh]);
            firsthigh++;
        }
    }
    swap(&arr[p], &arr[firsthigh]);
    return firsthigh;
}

void quicksort(int *arr, int l, int h){
    int p;
    if((h-l)>0){
        p = partition(arr, l, h);
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,h);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {21,3,0,-1,555,20,5};
    quicksort(arr,0,6);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}