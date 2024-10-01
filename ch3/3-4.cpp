#include <iostream>

using namespace std;

class CoffeeMachine {
public:
    CoffeeMachine(int a, int b, int c);
    int coffee;
    int water;
    int sugar;

    drinkEspresso();
    drinkAmericano();
    drinkSugarCoffee();

    show();
    fill();
};

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
    coffee += a;
    water += b;
    sugar += c;
}

CoffeeMachine::drinkEspresso() {
    coffee = coffee - 1;
    water = water - 1;
    show();

}

Co...