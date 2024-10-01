#include <iostream>
#include <cstlib>
using namespace std;

class EvenRandom {
public:
    evennext();
    evennextInRange();
};

EvenRandom::evennext() {

    srand((unsigned)time(0));

    cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
    for (int i = 0; i < 10; i++) {

        do {
            int n = rand();
            cout << n << ' ';
        } while (n % 2 == 0) {
            cout << n << ' ';
        }
    }
}

EvenRandom::evennextInRange() {

    srand((unsigned)time(0));

    ...