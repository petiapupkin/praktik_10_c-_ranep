#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string surname;
    string name;
    int score;
};

int main() {
    vector<Student> students;
    Student s;

    int sum = 0;
    int maxLength = 0;

    while (true) {
        cout << "Введите фамилию (0 для окончания): ";
        cin >> s.surname;

        if (s.surname == "0")
            break;

        cout << "Введите имя: ";
        cin >> s.name;

        cout << "Введите балл: ";
        cin >> s.score;

        students.push_back(s);

        sum += s.score;

        int length = s.surname.length() + s.name.length() + 1;

        if (length > maxLength)
            maxLength = length;
    }

    if (students.empty())
        return 0;

    double average = (double)sum / students.size();

    cout << "\nФамилия Имя";
    cout << string(maxLength - 11 + 2, ' ') << "Балл\n";

    for (int i = 0; i < students.size(); i++) {
        cout << students[i].surname << " " << students[i].name;

        int length = students[i].surname.length()
                   + students[i].name.length() + 1;

        cout << string(maxLength - length + 2, ' ');
        cout << students[i].score << endl;
    }

    cout << "\nСредний балл по группе: " << average << endl;

    return 0;
}
