//Напишите рекурсивную функцию, которая раскладывает число на простые сомножители.
#include <iostream>
using namespace std;

void f3(int k, int div) {
    if (k == 1) return;
    if (k % div == 0){
        cout << div << " ";
        f3(k / div, div);
    }
    else
        if (div == 2)
            f3(k, div + 1);
        else
            f3(k, div + 2);
}
int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите число ";
    cin >> n;
    f3(n, 2);
}