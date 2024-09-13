#include <iostream>
#include <ctime>

using namespace std;

string get_dayofweek(int day, int month, int year) {
// Структура для хранения даты
tm date = {};
date.tm_mday = day;
date.tm_mon = month - 1; // Месяцы в структуре tm начинаются с 0
date.tm_year = year - 1900; // Годы в структуре tm начинаются с 1900

// Преобразуем в time_t и получаем день недели
mktime(&date);
int dayofweek_number = date.tm_wday;

// Перечислим дни недели
string dayofweeks[] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};

// Возвращаем название дня недели
return dayofweeks[dayofweek_number];
}

int main() {
int day, month, year;
cout << " день вашего рождения (к примеру 5): ";
cin >> day;
cout << "месяц вашего рождения (к примеру 1): ";
cin >> month;
cout << "год вашего рождения (к примеру 2005): ";
cin >> year;

string dayofweek = get_dayofweek(day, month, year);
cout << " Вы родились в " << dayofweek << "." << endl;

return 0;
}
