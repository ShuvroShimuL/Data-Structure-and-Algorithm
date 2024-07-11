#include <iostream>
using namespace std;

void swap ( int *xp, int *yp ){

    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}

void BubbleSort (int arr[], int n){

    int i,j;
    bool swapped;
    for ( i=0; i<n-1; i++ ){

        swapped = false;
        for ( j=0; j<n-i-1; j++ ){

            if ( arr[j]> arr[j+1]){

                swap (&arr[j], &arr[j+1]);
                swapped = true;
            }

        }

        if ( swapped == false )
            break;
    }

}

int main(){

    int Arr[] = {64,34,25,12,2,10,11};
    int n = sizeof(Arr)/ sizeof(Arr[0]);
    BubbleSort (Arr,n);

    cout << "Sorted Array is : \n";
    for (int i=0; i<n; i++){
        cout << Arr[i] << " ";
    }
    return 0;
}
