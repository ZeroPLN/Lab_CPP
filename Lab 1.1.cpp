#include <iostream>

using namespace std;

int lastNumSum(int x) {
    return (x % 10) + ((x / 10) % 10);
}

bool isPositive(int x) {
    return x > 0;
}

bool isUpperCase(char x) {
    return (x >= 'A' && x <= 'Z');
}

bool isDivisor(int a, int b) {
    return ((b != 0) && (a % b == 0)) || ((a != 0) && (b % a == 0));
}

int lastNumSum(int a, int b) {
    return (a % 10) + (b % 10);
}

int main() 
{
    setlocale(LC_ALL, "Russian");

    int num;
    do {
        cout << "Выберете номер метода(2, 4, 6, 8, 10, 0 - выход) -> ";
        cin >> num;
        switch(num){
            case 2:{
            // Метод 2
                int x;
                cout << "Введите число x -> ";
                cin >> x;
                cout << "Введено число x = " << x << endl;
                
                int result = lastNumSum(x);
                cout << "Сумма 2-х последних цифр: " << result << endl;
                break;
            }
            case 4:{
                int x;
                cout << "Введите число x -> ";
            cin >> x;
            if (isPositive(x)){
                cout << "Число " << x << " положительное, т.е - True" << endl;
            } else {
                cout << "Число " << x << " не является положительным, т.е - Flase" << endl;
            }
            break;
        }
        case 6:{
            char x;
            cout << "Введите букву на англ.яз -> ";
            cin >> x;
            
            if (isUpperCase(x)){
                cout << "Символ " << x << " является большой буквой, т.е - True" << endl;
            } else {
                cout << "Символ " << x << " не является большой буквой, т.е - Flase" << endl;
            }
            break;
        }
        case 8: {
            int a, b;
            cout << "Введите число a -> ";
            cin >> a;
            cout << "Введите число b -> ";
            cin >> b;

            if (isDivisor(a, b)){
                cout << "Одно из чисел " << a << " или " << b << " делит другое нацело, т.е - True" << endl;
            } else {
                cout << "Одно из чисел " << a << " или " << b << " не делит другое нацело, т.е - Flase" << endl;
            }
            break;
        }
        case 10: {
            int a, b, result;
            cout << "Введите число a -> ";
            cin >> a;
            cout << "Введите число b -> ";
            cin >> b;

            result = lastNumSum(a, b); // 1,2
            cout << "Введите третье число -> ";
            cin >> b;
            result = lastNumSum(result, b); // 2,3
            cout << "Введите четвертое число -> ";
            cin >> b;
            result = lastNumSum(result, b); // 3,4
            cout << "Введите пятое число -> ";
            cin >> b;
            result = lastNumSum(result, b); // 4,5

            cout << "Итог = " << result << endl;
                break;
            }
            default:
                if (num != 0)
                    cout << "Введен неверный номер! Попробуйте снова." << endl;
                break;
        }
    } while (num != 0);

    return 0;
}
