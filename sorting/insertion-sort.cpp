#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void insertion_sort(int *s, int n){
    int i, j; // counters
    for(int i = 1; i < n; i++){
        j = i;
        while(j > 0 && s[j] < s[j - 1]){
            swap(&s[j], &s[j - 1]);
            j = j-1;
        }
    }
}

int main(){
    int arr[10];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    insertion_sort(arr,5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}