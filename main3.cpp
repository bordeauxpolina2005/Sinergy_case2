#include <iostream>

using namespace std;

bool vis_year(int year) {
// Год является високосным, если он делится на 4, но не делится на 100,
// за исключением тех годов, которые делятся на 400
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
return true;
} else {
return false;
}
}

int main() {
int year;
cout << "Введите год (например, 2024): ";
cin >> year;

if (vis_year(year)) {
cout << year << " год является високосным." << endl;
} else {
cout << year << " год не является високосным." << endl;
}

return 0;
}
