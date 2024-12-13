#include <iostream>
using namespace std;

void bigChar(char* s){
    int i = 0;
    while(*(s + i) != '\0'){
        if(*(s + i) == 'a'){
            *(s + i) = 'A';
        }
        ++i;
    }

    i = 0;
    while(*(s + i) != '\0'){
        cout << *(s + i);
        ++i;
    }
    cout << endl;
    
}


int main(){
    // int i = 10;

    // int* pi = &i;

    // *pi = 20;

    
    // double ar[5] = {1, 2, 3, 4, 5};

    // for(int i = 0; i < 5; i++){
    //     *(ar + i) *= 2;
    // }

    // for(int i = 0; i < 5; i++){
    //     cout << *(ar + i) << " ";
    // }

    // const char* s = "Hello World!";


    // char* y = x + 1;

    // for(char c : x){
    //     cout << c;
    //     if(c == '\0'){
    //         cout << endl;
    //         break;
    //     }
    // }
    
    
    // int i = 0;
    // while(*(x + i) != '\0'){
    //     cout << *(x + i);
    //     i++;
    // }
    // cout << endl;



    char x[] = "A a a AAAAA AaAAaaAaaAAAAAa";
    bigChar(x);
}