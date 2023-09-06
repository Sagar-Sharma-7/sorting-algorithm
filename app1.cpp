// Selection Sort

#include <iostream>
using namespace std;

void sorting(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            int dummyElem = arr[i];
            if(arr[j] < arr[i]){
                int dummy2Elem = arr[j];
                arr[i] = dummy2Elem;
                arr[j] = dummyElem;
                for(int y = 0; y < size; y++){
                    cout << arr[y] << " ";
                }
                cout << endl;
            }
        }
    }
    cout << endl << "Sorted Array: ";
    for(int x = 0; x < size; x++){
        cout << arr[x] << " ";
    }
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[1000]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << endl;
    for(int a = 0; a < n; a++){
        cout << arr[a] << " ";
    }
    cout << endl;

    sorting(arr, n);
    return 0;
}