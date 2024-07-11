#include <iostream>
using namespace std;

int findMin(int a[],int size){
    int min = a[0];
    for(int i=0; i<size; i++){
        if(a[i]<min)
            min = a[i];
    }
    return min;
}

int main(){

   int a[10] = {7,8,9,1,4,5,6,3,2,10};
   cout << findMin(a, 10);

    return 0;
}
