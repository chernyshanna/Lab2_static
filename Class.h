#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include "Worker.h"

class Class {
private:
    int classCode;
    int teacherCode;
    int typeCode;
    int studentCount;
    char letter;
    int studyYear;
    int creationYear;
    Worker teacher;

public:
    Class();
    Class(int classCode, int teacherCode, int typeCode, int studentCount,
          char letter, int studyYear, int creationYear, const Worker& teacher);

    void setClassCode(int code);
    int getClassCode() const;

    void setTeacherCode(int code);
    int getTeacherCode() const;

    void setTypeCode(int code);
    int getTypeCode() const;

    void setStudentCount(int count);
    int getStudentCount() const;

    void setLetter(char letter);
    char getLetter() const;

    void setStudyYear(int year);
    int getStudyYear() const;

    void setCreationYear(int year);
    int getCreationYear() const;

    void setTeacher(const Worker& newTeacher);
    Worker getTeacher() const;

    // Інші методи
    void display() const;             // Вивід інформації про клас
    void displayBehavior() const;     // Поведінка залежно від стану класу
    bool isSeniorClass() const;       // Перевірка, чи це старший клас
    void inputClassInfo();            // Введення даних для класу
};

#endif // CLASS_H
