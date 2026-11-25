
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string email;

    // Регулярное выражение для проверки адреса электронной почты
    regex pattern(
        R"(^[A-Za-z0-9]+([._%+-][A-Za-z0-9]+)*@([A-Za-z0-9]([A-Za-z0-9-]{0,61}[A-Za-z0-9])?\.)+[A-Za-z]{2,}$)"
    );

    cout << "Enter email: ";
    cin >> email;

    // Проверяем соответствие всей строки шаблону
    if (regex_match(email, pattern))
    {
        cout << "Email is correct." << endl;
    }
    else
    {
        cout << "Email is incorrect." << endl;
    }

    return 0;
}
