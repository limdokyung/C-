#include <iostream>
using namespace std;

int main(){
    sum = 0;

    while(sum<20000){
        cout << '에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.'<< endl;
        cout << '주문>>' << endl;
        cin >> c >> n;
        switch(c){
            case '에스프레소':
                price = 2000*n;
                cout << price << '원입니다. 맛있게 드세요' << endl;
            case '아메리카노':
                price = 2300*n;
                cout << price << '원입니다. 맛있게 드세요' << endl;
            case '카푸치노':
                price = 2500*n;
                cout << price << '원입니다. 맛있게 드세요' << endl;    
    }
        sum += price;
    }
    
    cout << '오늘' << sum << '원을 판매하여 카페를 닫습니다. 내일 봐요~~~';
    return 0;
    
}