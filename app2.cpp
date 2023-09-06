// Bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - (1+i); j++){
            int dummyElem = arr[j];
            int dummy2Elem = arr[j+1];
            if(arr[j] > arr[j+1]){
                arr[j] = dummy2Elem;
                arr[j+1] = dummyElem;

            }
            for(int y = 0; y < size; y++){
                    cout << arr[y] << " ";
            }
            cout << endl;

        }
    }

    cout << "Sorted Array: ";
    for(int x = 0; x < size; x ++){
        cout << arr[x] << " ";
    }
}

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int array[10000];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout << endl;
    for(int a = 0; a < n; a++){
        cout << array[a] << " ";
    }
     
    cout << endl;
    bubbleSort(array, n);
    return 0;
}