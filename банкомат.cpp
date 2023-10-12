
#include <iostream>
#include<windows.h>
using namespace std;

int main() {
    int a;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите число от 1 до 100000: ";
    cin >> a;
    if (a < 1) cout << "Введите заново";
    else if (a > 100000) cout << "Введите заново";
    else {
        switch (a) {
        case 100000: cout << "сто тысяч рублей";
            return 0;
        case 10000: cout << "десять тысяч рублей";
            return 0;
        case 1000: cout << "тысяча рублей";
            return 0;
        case 10: cout << "десять рублей";
            return 0;
        }

        switch (a / 10000 % 10) {
        case 1:
        {
            switch (a / 1000) {
            case 11: cout << "одиннадцать тысяч ";
                break;
            case 12: cout << "двенадцать тысяч ";
                break;
            case 13: cout << "тринадцать тысяч ";
                break;
            case 14: cout << "четырнадцать тысяч";
                break;
            case 15: cout << "пятнадцать тысяч ";
                break;
            case 16: cout << "шестнадцать тысяч ";
                break;
            case 17: cout << "семнадцать тысяч ";
                break;
            case 18: cout << "восемнадцать тысяч ";
                break;
            case 19: cout << "девятнадцать тысяч ";
                break;
            }
            break;
        }
        case 2: cout << "двадцать ";
            break;
        case 3: cout << "тридцать ";
            break;
        case 4: cout << "сорок ";
            break;
        case 5: cout << "пятьдесят ";
            break;
        case 6: cout << "шестьдесят ";
            break;
        case 7: cout << "семьдесят ";
            break;
        case 8: cout << "восемьдесят ";
            break;
        case 9: cout << "девяносто ";
            break;
            cout << " тысяч рублей";
            break;

        }

        switch (a / 1000 % 10) {
        case 1:
        {
            if ((a / 10000 % 10) != 1)
                cout << "одна тысяча ";
            break;
        }
        case 2:
        {
            if ((a / 10000 % 10) != 1)
                cout << "две тысячи ";
            break;
        }
        case 3: {
            if ((a / 10000 % 10) != 1)
                cout << "три тысячи ";
            break;
        }
        case 4: {
            if ((a / 10000 % 10) != 1)
                cout << "четыре тысячи ";
            break;
        }
        case 5:
        {
            if ((a / 10000 % 10) != 1)
                cout << "пять тысяч ";
            break;
        }
        case 6:
        {
            if ((a / 10000 % 10) != 1)
                cout << "шесть тысяч ";
            break;
        }
        case 7:
        {
            if ((a / 10000 % 10) != 1)
                cout << "семь тысяч ";
            break;
        }
        case 8:
        {
            if ((a / 10000 % 10) != 1)
                cout << "восемь тысяч ";
            break;
        }
        case 9:
        {
            if ((a / 10000 % 10) != 1)
                cout << "девять тысяч ";
            break;
        }
        cout << " тысяч рублей";
        break;
        }

        switch (a % 1000 / 100) {
        case 1: cout << "сто ";
            break;
        case 2: cout << "двести ";
            break;
        case 3: cout << "триста ";
            break;
        case 4: cout << "четыреста ";
            break;
        case 5: cout << "пятьсот ";
            break;
        case 6: cout << "шестьсот ";
            break;
        case 7: cout << "семьсот ";
            break;
        case 8: cout << "восемьсот ";
            break;
        case 9: cout << "девятьсот ";
            break;

        }

            switch (a % 100 / 10)
            {
            case 2: cout << "двадцать ";
                break;
            case 3: cout << "тридцать ";
                break;
            case 4: cout << "сорок ";
                break;
            case 5: cout << "пятьдесят ";
                break;
            case 6: cout << "шестьдесят ";
                break;
            case 7: cout << "семьдесят ";
                break;
            case 8: cout << "восемьдесят ";
                break;
            case 9: cout << "девяносто ";
                break;
            }

        switch (a % 100) {
        case 11: cout << "одиннадцать рубей";
            return 0;
        case 12: cout << "двенадцать рубей";
            return 0;
        case 13: cout << "тринадцать рубей";
            return 0;
        case 14: cout << "четырнадцать рубей";
            return 0;
        case 15: cout << "пятьнадцать рубей";
            return 0;
        case 16: cout << "шестьнадцать рубей";
            return 0;
        case 17: cout << "семьнадцать рубей";
            return 0;
        case 18: cout << "восемьнадцать рубей";
            break;
        case 19: cout << "девятнадцать рубей";
            return 0;
        }

        switch (a % 10) {
        case 1: cout << "один рубль";
            break;
        case 2: cout << "два рубля";
            break;
        case 3: cout << "три рубля";
            break;
        case 4: cout << "четыре рубля";
            break;
        case 5: cout << "пять рублей";
            break;
        case 6: cout << "шесть рублей";
            break;
        case 7: cout << "семь рублей";
            break;
        case 8: cout << "восемь рублей";
            break;
        case 9: cout << "девять рублей";
            break;
        case 0: cout << "рублей";
            break;
        }
    }
}
