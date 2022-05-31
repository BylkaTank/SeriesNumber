#include <iostream>
using namespace std;
int main() {
    int number[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};

    int x = number[0], sum = 0, sumWithRepeat = 0;

    for (int i = 0; i < 15; i++){
        if (number[i] < x) x = number[i];
        sumWithRepeat += number[i];
    }

    for (int i = x; i < x + 14; i++){
        sum += i;
    }

    cout << "x = " << x << endl << "Repeating number = " << sumWithRepeat - sum;
}
