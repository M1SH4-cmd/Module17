#include <iostream>
using namespace std;

bool substr(const char* str1, const char* str2){
    int len1 = 0;
    while (str1[len1] != '\0'){
        len1++;
    }

    int len2 = 0;
    while (str2[len2] != '\0'){
        len2++;
    }

    if (len2 > len1){
        return false;
    }

    for(int i = 0; i <= len1 - len2; ++i){
        bool match = true;
        for(int j = 0; j < len2; ++j){
            if (str1[i + j] != str2[j]) {
            match = false;
            break;
            }
        }
        if(match){
            return true;
        }
    }
    return false;
}

int main(){
    const char* a = "Volkswagen, Das Auto";
    const char* b = "Parkplatz";
    const char* c = "Das Auto";

    cout << substr(a, b) << " " << substr(a, c) << endl;
    return 0;
}