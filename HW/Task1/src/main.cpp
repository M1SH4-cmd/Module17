#include <iostream>
using namespace std;

void swapNums(int* a, int* b){
    int buffer = *a;
    a = b;
    b = &buffer;
    cout << "a:\t" << *a << endl << "b:\t" << *b << "\0";
}


int main(){

    int a = 10;
    int b = 20;

    swapNums(&a, &b);

}
