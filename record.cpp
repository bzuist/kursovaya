#include "record.h"

record::record()
{

}
record::record(std::string surname, double time, std::string phonenumber, int kategory, std::string patronymic, std::string name, std::string specialist)
{
    this->surname = surname;
    this->name = name;
    this->patronymic = patronymic;
    this->phonenumber = phonenumber;
    this->specialist = specialist;
    this->kategory = kategory;
    this->time = time;
}

std::string record::getSpecialist()
{
    return specialist;
}
int record::getKategory()
{
    return kategory;
}
double record::getTime()
{
    return time;
}

void record::setSurname(std::string surname)
{
    this->surname = surname;
}
void record::setKategory(int kategory)
{
    this->kategory = kategory;
}
void record::setTime(double time)
{
    this->time = time;
}
void record::setName(std::string name)
{
    this->name = name;
}
void record::setPatronymic(std::string patronymic)
{
    this->patronymic = patronymic;
}
void record::setSpecialist(std::string specialist)
{
    this->specialist = specialist;
}
void record::setPhonenumber(std::string phonenumber)
{
    this->phonenumber = phonenumber;
}

void record::input()
{
    std::cout << "Введите фамилию: ";
    std::cin >> surname;
    std::cout << "Введите имя";
    std::cin >> name;
    std::cout << "Введите отчество: ";
    std::cin >> patronymic;
    std::cout << "Введите номер телефона: ";
    std::cin >> phonenumber;
    std::cout << "Введите категорию (1 - детский, 2- взрослый): ";
    std::cin >> kategory;
    while ((kategory != 1) and (kategory != 2))
    {
        std::cout << "\nНеверный ввод! Введите категорию согласно инструкции.\nТип: ";
        std::cin >> kategory;
    }
    std::cout << "Введите специалиста: ";
    std::cin >> specialist;
    std::cout << "Введите время в формате чч.мм";
    std::cin >> time;
    while (std::cin.fail() or time < 0)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "\nНеверный ввод! Введите время в формате чч.мм\n";
        std::cin >> time;
    }
}
void record::print()
{
    std::cout << "Фамилия: " << surname << "\nИмя: " << name << "\nОтчество: " << patronymic << "\nНомер телефона : " << phonenumber;
    std::cout << "\nСпециалист: " << specialist << "\nКатегория : " << kategory << "\nВремя записи : " << time;
    std::cout << '\n' << '\n';
}
record::record(const record& record)
{
    surname = record.surname;
    time = record.time;
    kategory = record.kategory;
    name = record.name;
    patronymic = record.patronymic;
    specialist = record.specialist;

}
