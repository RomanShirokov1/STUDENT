#include <iostream>
#include <string>

using namespace std;

class EMPLOYEE
{
private:
    string organization;
    string position;
    double experience;
    string name;
    char gender;
    int age;
    double salary;
    static int count;

public:

    EMPLOYEE(string uname, int uage, string uorganization, string uposition, double usalary, double uexperience, char ugender) : name(uname), age(uage), organization(uorganization), position(uposition), salary(usalary), experience(uexperience), gender(ugender)
    {
        count++;
    }// Конструктор создания объекта

    void GetWorkInfo()
    {
        cout << "Место работы: " << organization << endl;
        cout << "Должность: " << position << endl;
        cout << "Стаж работы: " << experience << endl;
        cout << "Заработная плата: " << salary << endl;
    }

    void SetPosition(string position)
    {
        this->position = position;
    }

    void SetSalary(double plus_salary)
    {
        salary = salary + plus_salary;

    }

    void GetPersonalInfo()
    {
        cout << "Ф.И.О: " << name << endl;
        cout << "Пол: " << gender << endl;
        cout << "Возраст: " << age << endl;
    }

    bool operator < (EMPLOYEE const& other) // Перегрузка оператора <
    {
        return this->experience < other.experience;
    }

    bool operator == (EMPLOYEE const& other)    // Перегрузка оператора ==
    {
        return this->experience == other.experience;
    }

    EMPLOYEE& operator = (EMPLOYEE const& other)    // Перегрузка оператора =
    {
        this->position = other.position;
        return *this;
    }

    void ExpComparsion(EMPLOYEE& second)    // Сравнение опыта двух сотрудников
    {
        if (*this < second)
        {
            cout << second.name << " имеет больше опыта, чем " << this->name << endl;
        }
        else if (*this == second)
        {
            cout << second.name << " имеет одинаковый опыт c " << this->name << endl;
        }
        else
        {
            cout << this->name << " имеет больше опыта, чем " << second.name << endl;
        }
    }

    void ObjectAssigment(EMPLOYEE& second)  // Смена должности одного сотрудника на другую
    {
        this->position = second.position;
    }

    static int GetCount()
    {
        return count;
    }

    ~EMPLOYEE() {   // Деструктор
        count--;
    }
};

int EMPLOYEE::count = 0;

int main()
{
    setlocale(LC_ALL, "ru");
    EMPLOYEE object1("Ivanov_Ivan", 40, "Gasprom", "Director", 100000, 10, 'M');
    EMPLOYEE object2("Shirokov_Roman", 19, "REU", "Student", 9000, 1, 'M');
    EMPLOYEE object3("Rybnikova_Kate", 18, "REU", "Student", 8000, 1, 'F');

    EMPLOYEE employees[3] = { object1, object2, object3 };

    cout << "Насчитывается " << EMPLOYEE::GetCount() << " сотрудника." << endl << endl;
    for (int i = 0; i < 3; i++) 
    {
        employees[i].GetPersonalInfo();
        employees[i].GetWorkInfo();
        cout << endl;
    }
    cout << endl;
    employees[2].SetSalary(50000);  // Повышаем зарплату третьего сотрудника на 50000
    cout << endl;
    employees[0].ExpComparsion(employees[1]);   // Сравниваем опыт двух сотрудников
    cout << endl;
    employees[2].ObjectAssigment(employees[0]);     // Присваиваем должность первого сотрудника третьему
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        employees[i].GetPersonalInfo();
        employees[i].GetWorkInfo();
        cout << endl;
    }
}