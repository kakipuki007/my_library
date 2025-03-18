// src/my_function.h
#ifndef MY_FUNCTION_H
#define MY_FUNCTION_H

struct Date {
    int day;
    int month;
    int year;
};

int calculateAge(struct Date birthdate, struct Date currentDate) {
    int age = currentDate.year - birthdate.year;

    if (currentDate.month < birthdate.month ||
        (currentDate.month == birthdate.month && currentDate.day < birthdate.day)) {
        age--;
    }

    return age;
}

#endif