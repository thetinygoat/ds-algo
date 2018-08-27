#include<iostream>

using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubblesort(int *arr, int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {21,3,0,-1,555,20,5};
    bubblesort(arr,6);
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
