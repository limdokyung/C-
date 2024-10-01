#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << endl;
    
    char name[100];
    cin.getline(name, 100, ';');

    for(i = 0; i<5; i++){
        cout << i+1 << ':'<< name[i]<< endl;
    }
    
    longest word = name[0];
    
    for (i = 1 ; i < 4 ; i++){
        if (name[i-1].length() < name[i].length()){
            longest word = name[i];
        }
    }

    cout << "가장 긴 이름은" << longest word << endl;
}