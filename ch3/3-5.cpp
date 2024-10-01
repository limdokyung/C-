#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
public:
    Random();
    int next();
    int nextInRange(int a, int b);
};

Random::Random() {

}

int Random::next() {
    srand((unsigned)time(0));
    int n = rand();
    return n;
}

int Random::nextInRange(int a, int b) {
    n = rand() % (max - min + 1) + min;
    return n;
}

int main() {
    Random r;
    cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10개--" << endl;
    for (int i = 0; i ...