#include <iostream>
#include <ctime>

using namespace std;

// Структура для даты
struct Date {
    int year;
    int month;
    int day;
};

// Функция проверки високосного года (из ЛР 15)
bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Функция определения длины месяца (из ЛР 15)
int monthLength(int year, int month) {
    if (month < 1 || month > 12) return 0;
    int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeap(year)) {
        return 29;
    }
    return days[month];
}

// Функция получения текущей даты с помощью библиотечных функций time и localtime
Date today(void) {
    time_t t = time(NULL);
    tm *tl = localtime(&t);
    Date current;
    current.year = tl->tm_year + 1900;
    current.month = tl->tm_mon + 1;
    current.day = tl->tm_mday;
    return current;
}

// Функция подсчета общего количества дней от начала нашей эры до заданной даты
long countDays(Date d) {
    long days = 0;
    for (int y = 1; y < d.year; y++) {
        days += isLeap(y) ? 366 : 365;
    }
    for (int m = 1; m < d.month; m++) {
        days += monthLength(d.year, m);
    }
    days += d.day;
    return days;
}

int main(void) {
    // Дата рождения (16.06.2008)
    Date birthDate = {2008, 6, 16};
    
    // Получение текущей даты
    Date currentDate = today();

    long totalDays = countDays(currentDate) - countDays(birthDate);

    cout << "Кількість днів від дня народження до поточної дати: " << totalDays << endl;

    return 0;
}
