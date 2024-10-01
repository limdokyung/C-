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
    cout << "--0���� " << RAND_MAX << "������ ���� ���� 10��--" << endl;
    for (int i = 0; i ...