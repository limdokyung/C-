#include <iostream>
using namespace std;

int main(){
    cout << '***** 승리장에 오신 것을 환영합니다. *****' << endl;
    while(n != 4){
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4" << endl;
        cin << n;
        cout << '몇인분?';
        cin << p;
        while(n<1 || n>4){
            cout << '다시 주문하세요!!'; << endl;
        }
        switch(n){
            case 1:
               cout << '짬뽕' << p << '인분 나왔습니다' << endl;
               break;
            case 2:
                cout << '짜장' << p << '인분 나왔습니다' << endl;
                break;
            case 3:
                cout << '군만두' << p << '인분 나왔습니다' << endl;
                break;
            default:
                cout << '오늘 영업은 끝났습니다.'<< endl;
                }
 }
}