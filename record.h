#ifndef RECORD_H
#define RECORD_H
#include <QString>
#include <vector>
#include <iostream>


class record
{
private:
    std::string surname;
    std::string name;
    std::string patronymic;
    std::string phonenumber;
    double time;
    std::string specialist;
    int kategory;
    record();
    record(std::string surname, double time, std::string phonenumber, int kategory, std::string patronymic, std::string name, std::string specialist);
        std::string getSpecialist();
        double getTime();
        int getKategory();
        void setSurname(std::string surname);
        void setName(std::string name);
        void setPatronymic(std::string patronymic);
        void setKategory(int kategoriya);
        void setTime(double time);
        void setSpecialist(std::string specialist);
        void setPhonenumber(std::string phonenumber);

        void input();
        void print();
        record(const record & record);
        ~record();
};

#endif // RECORD_H
