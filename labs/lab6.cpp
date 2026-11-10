
#include <iostream>  // Библиотека ввода и вывода
#include <string>    // Библиотека для работы со строками
#include <vector>    // Библиотека для хранения символов

using namespace std;

// Функция проверки строки на палиндром
bool isPalindrome(string s)
{
    vector<string> symbols; // Массив отдельных символов

    // Разделение строки на символы
    for (int i = 0; i < s.size(); )
    {
        unsigned char c = s[i]; // Получаем текущий байт
        int len; // Количество байтов в символе

        // Определяем длину символа UTF-8
        if (c < 128)
            len = 1;
        else if (c < 224)
            len = 2;
        else if (c < 240)
            len = 3;
        else
            len = 4;

        // Сохраняем целый символ
        symbols.push_back(s.substr(i, len));

        i += len; // Переходим к следующему символу
    }

    int i = 0; // Индекс первого символа
    int j = symbols.size() - 1; // Индекс последнего символа

    // Сравнение символов с двух сторон
    while (i < j)
    {
        if (symbols[i] != symbols[j])
        {
            return false; // Символы не совпали
        }

        i++; // Переход вправо
        j--; // Переход влево
    }

    return true; // Строка является палиндромом
}

int main()
{
    setlocale(LC_ALL, "Russian");

    string s; // Переменная для хранения строки

    cout << "Введите строку: ";
    getline(cin, s); // Ввод всей строки

    // Проверка длины строки
    int count = 0;

    for (int i = 0; i < s.size(); )
    {
        unsigned char c = s[i];

        if (c < 128)
            i++;
        else if (c < 224)
            i += 2;
        else if (c < 240)
            i += 3;
        else
            i += 4;

        count++;
    }

    if (count > 255)
    {
        cout << "Ошибка! Строка содержит больше 255 символов.";
        return 0;
    }

    // Вызов функции проверки
    if (isPalindrome(s))
    {
        cout << "Строка является палиндромом.";
    }
    else
    {
        cout << "Строка не является палиндромом.";
    }

    return 0;
}
