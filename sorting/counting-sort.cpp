#include <iostream>
#include <climits>

using namespace std;

int *countingsort(int *arr, int n,int *sorted){
    int range = 0;
    for(int i= 0; i < n;i++){
        range = max(range,arr[i]);
    }
    int aux[range];
    for(int i = 0; i <= range; i++){
        aux[i] = 0;
    }
    for(int i = 0;i < n; i++){
        aux[arr[i]]++;
    }
    int j = 0;
    for(int i = 0; i <= range; i++){
        int temp = aux[i];
        while(temp--){
            sorted[j] = i;
            j++;
        }
    }
    return sorted;
}

int main(int argc, char const *argv[])
{
    int arr[] = {21,3,0,-1,555,20,5};
    int sorted[6];
    int *res = countingsort(arr,6,sorted);
    for(int i = 0; i < 7; i++){
        cout << res[i] << " ";
    }
    return 0;
}