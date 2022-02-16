#include <iostream>

using namespace std;

const int LNAME = 25;

class STUDENT 
{

private:    //принцип инкапсуляции
    
    char name[LNAME];
    int age;
    float grade;

public:

    STUDENT() 
    {
        for (int a = 0; a < 25; a++) 
        {
            name[a] = 0;       //конструктор класса
        }
        age = 0;
        grade = 0;
    }

    char* GetName()     //получаем имя
    {   
        return name;
    }
        
    int GetAge() const      //получаем возраст
    {    
        return age;
    }

    float GetGrade() const      //получаем рейтинг
    {   
        return grade;
    }

    void SetName(char* name)       //устанавливаем имя
    {  
        int c = 0;
        while (*name != '\0')   //перебираем имя посимвольно, пока слово не кончится
        {
           this-> name[c] = *name;      //присваиваем массиву char каждый символ
            name++;                     //перемещаем указатель на следующий символ
            c++;
        }
    }

    void SetAge(int age)    //устанавливаем возраст 
    {  
        this->age = age;
    }

    void SetGrade(float grade)      //устанавливаем рейтинг
    {    
        this->grade = grade;
    }

    void Set(char* name, int age, float grade)      //устанавливаем имя, возраст и рейтинг
    {    
        int c = 0;
        while (*name != '\0') 
        {
            this->name[c] = *name;
            name++;
            c++;
        }
        this->age = age;
        this->grade = grade;
    }

    void Show()     //выводим имя, возраст и рейтинг
    {   
        cout << "Имя студента: " << name << endl;
        cout << "Возраст студента: " << age << endl;
        cout << "Рейтинг студента: " << grade << endl;
    }

};

int main()
{
    setlocale(LC_ALL, "Russian");
    STUDENT human;      //создаем объект класса STUDENT
    char name[25];
    int age;
    float grade;
    cout << "Введите имя студента(используйте латиницу, не более 24 символов): ";
    cin >> name;
    cout << endl << "Введите возраст студента: ";
    cin >> age;
    cout << endl << "Введите рейтинг студента: ";
    cin >> grade;
    human.SetName(name);
    cout << endl << human.GetName() << endl;
    human.SetAge(age);
    cout << human.GetAge() << endl;
    human.SetGrade(grade);
    cout << human.GetGrade() << endl << endl;
    cout << "Общий вывод данных о студенте: " << endl;
    human.Set(name, age, grade);
    human.Show();
    return 0;
}
