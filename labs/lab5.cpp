
#include <iostream>  // Библиотека ввода и вывода
#include <clocale>   // Библиотека для русского языка

using namespace std;

// Функция извлечения слова из строки
bool getWord(const char row[], int &pos, char word[])
{
    int j = 0; // Индекс символа в слове

    // Пропускаем разделители
    while (row[pos] == '0')
    {
        pos++;
    }

    // Если строка закончилась, слов больше нет
    if (row[pos] == '\0')
    {
        return false;
    }

    // Считываем символы до нуля
    while (row[pos] != '0' && row[pos] != '\0')
    {
        word[j] = row[pos];
        j++;
        pos++;
    }

    word[j] = '\0'; // Завершаем слово

    // Переходим через разделитель
    if (row[pos] == '0')
    {
        pos++;
    }

    return true; // Слово успешно извлечено
}

// Функция добавления текста в результат
bool addText(char result[], int &len,
             const char text[], int maxLen)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (len >= maxLen)
        {
            return false;
        }

        result[len] = text[i];
        len++;
        result[len] = '\0';
    }

    return true;
}

// Функция обработки двумерного массива
bool processArray(char a[][60], int rows,
                  char result[], int maxLen)
{
    int len = 0; // Длина итоговой строки

    result[0] = '\0'; // Начало пустой строки

    // Обработка каждой строки массива
    for (int i = 0; i < rows; i++)
    {
        int pos = 0; // Начальная позиция в строке
        char word[60]; // Массив для слова

        // Добавляем открывающую скобку
        if (!addText(result, len, "(", maxLen))
            return false;

        bool first = true; // Первое ли это слово

        // Извлекаем слова из строки
        while (getWord(a[i], pos, word))
        {
            // Добавляем запятую перед следующим словом
            if (!first)
            {
                if (!addText(result, len, ",", maxLen))
                    return false;
            }

            // Добавляем извлечённое слово
            if (!addText(result, len, word, maxLen))
                return false;

            first = false;
        }

        // Добавляем закрывающую скобку
        if (!addText(result, len, ")", maxLen))
            return false;
    }

    return true;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    char a[3][60]; // Двумерный массив из трёх строк

    // Ввод исходных данных
    cout << "Введите три строки цифр (слова разделены нулями):\n";

    for (int i = 0; i < 3; i++)
    {
        cin.width(60);
        cin >> a[i];
    }

    char result[61]; // Итоговая строка на 60 символов

    // Вызов функции обработки массива
    if (processArray(a, 3, result, 60))
    {
        cout << "Результат: " << result << endl;
    }
    else
    {
        cout << "Ошибка: длина строки превышает 60 символов!";
    }

    return 0;
}
