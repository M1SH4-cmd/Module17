#include <iostream>
using namespace std;

void reversed(int* arr){
    int i = 9;
    while(i >= 0){
        cout << *(arr + i) << " ";
        i--;
    }
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reversed(arr);
}