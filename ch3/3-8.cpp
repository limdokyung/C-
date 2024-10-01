#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
    number;

    int Integer(int a);
    get();
    set(int b);
    isEven();
};

int Integer::Integer(int a) { number = a; , return number; }

int Integer::get() { number = Integer(); , number = set(); , return number }

int Integer::set(int b) { number = b; , return number; }

int Integer::isEven() { return (get() % 2 == 0); }

int main() {
    Integer n(30);
    cout << n.get() << ' ';
    n.set(50);
    ...