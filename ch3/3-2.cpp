#include <iostream>
#include <string>
using namespace std;

class Date {
    Date(int a, int b, int c);
    show();
    getYear();
};

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

}

Date::Date() {

}
int Date::getYear() {

}
//쇼는 프린트함수, 쇼는 프린트에서 겟을 매개로 씀, 생성자는 옮긴뒤에 리턴