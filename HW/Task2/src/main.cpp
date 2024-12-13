#include <iostream>
using namespace std;

void reversed(int* arr){
    int l = 0;
    int r = 9;

    while(l < r){
        swap(*(arr + l), *(arr + r));
    l++;
    r--;
    }
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reversed(arr);

    int i = 0;
    while(i < 10){
        cout << *(arr + i) << " ";
        ++i;
    }

}