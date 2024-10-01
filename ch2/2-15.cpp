#include <iostream>

using namespace std;

int main(){

    char calc[100];

    cout << '?';

    cin.getline(calc, 100, ' ');

    switch(calc[1]){
        case '+':
            result = calc[0] + calc[2];
            break;
        case '-':
            result = calc[0] - calc[2];
            break;
        case '*':
            result = calc[0] * calc[2];
            break;
        case '/':
            result = calc[0] / calc[2];
            break;
        case '%':
            result = calc[0] % calc[2];
            break;
            }

    cout << calc[0] << calc[1] << calc[2] << '=' << result << endl;

    return 0;
}