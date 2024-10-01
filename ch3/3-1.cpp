#include <iostream>

using namespace std;

class Tower {
    int a;
    int getHeight();
}

int main() {
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는" << myTower.getHeihgt() << '미터' << endl;
    cout << "높이는" << seoulTower.getHeihgt() << '미터' << endl;
}

int getHeight(a) {
    return a;
}