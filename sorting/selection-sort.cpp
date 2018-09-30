#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void selection_sort(int *s, int n){
    int i, j; // counters
    int min; // min index

    for(i = 0; i < n; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(s[j] < s[min]) min = j;
        }
        swap(&s[i], &s[min]);
    }
}

int main(){
    int arr[10];

    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    selection_sort(arr,5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}