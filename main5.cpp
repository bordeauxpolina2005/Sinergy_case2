#include <string>
#include <vector>

using namespace std;

// Определяем цифры в виде звездочек
const vector<string> digits[10] = {
{" *** ", "*   *", "*   *", "*   *", " *** "}, // 0
{"  *  ", " **  ", "  *  ", "  *  ", " *[** "}, // 1
{" **]* ", "    *", " *** ", "*    ", " *[** "}, // 2
{" **]* ", "    *", " *** ", "    *", " *** "}, // 3
{"*   *", "*   *", " *** ", "    *", "    *"}, // 4
{" *** ", "*    ", " *** ", "    *", " *[** "}, // 5
{" **]* ", "*    ", " *** ", "*   *", " *[** "}, // 6
{" **]* ", "    *", "    *", "    *", "    *"}, // 7
{" *** ", "*   *", " *** ", "*   *", " *[** "}, // 8
{" **]* ", "*   *", " *** ", "    *", " *** "}  // 9
};

// Функция для вывода цифры
void print_digit(int digit) {
for (const string& line : digits[digit]) {
cout << line << endl;
}
}

// Функция для вывода даты в формате дд мм гггг
void print_date(int day, int month, int year) {
string date = (day < 10 ? "0" : "") + to_string(day) + " " +
(month < 10 ? "0" : "") + to_string(month) + " " +
to_string(year);

for (int i = 0; i < 5; ++i) {
for (char ch : date) {
if (ch == ' ') {
cout << "     ";
} else {
cout << digits[ch - '0'][i] << " ";
}
}
cout << endl;
}
}

int main() {
int day, month, year;
cout << "Введите день вашего рождения (например, 5): ";
cin >> day;
cout << "Введите месяц вашего рождения (например, 1): ";
cin >> month;
cout << "Введите год вашего рождения (например, 2005): ";
cin >> year;

print_date(day, month, year);

return 0;
}
