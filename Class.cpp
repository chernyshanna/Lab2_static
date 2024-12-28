#include "Class.h"
#include <limits>

// Конструктор за замовчуванням
Class::Class()
    : classCode(0), teacherCode(0), typeCode(0), studentCount(0),
      letter('A'), studyYear(0), creationYear(0), teacher(Worker()) {}

// Перевантажений конструктор
Class::Class(int classCode, int teacherCode, int typeCode, int studentCount,
             char letter, int studyYear, int creationYear, const Worker& teacher)
    : classCode(classCode), teacherCode(teacherCode), typeCode(typeCode),
      studentCount(studentCount), letter(letter), studyYear(studyYear),
      creationYear(creationYear), teacher(teacher) {}

void Class::setClassCode(int code) { classCode = code; }
int Class::getClassCode() const { return classCode; }

void Class::setTeacherCode(int code) { teacherCode = code; }
int Class::getTeacherCode() const { return teacherCode; }

void Class::setTypeCode(int code) { typeCode = code; }
int Class::getTypeCode() const { return typeCode; }

void Class::setStudentCount(int count) { studentCount = count; }
int Class::getStudentCount() const { return studentCount; }

void Class::setLetter(char letter) { this->letter = letter; }
char Class::getLetter() const { return letter; }

void Class::setStudyYear(int year) { studyYear = year; }
int Class::getStudyYear() const { return studyYear; }

void Class::setCreationYear(int year) { creationYear = year; }
int Class::getCreationYear() const { return creationYear; }

void Class::setTeacher(const Worker& newTeacher) { teacher = newTeacher; }
Worker Class::getTeacher() const { return teacher; }

void Class::display() const {
    std::cout << "Class Code: " << classCode << "\n"
              << "Teacher Code: " << teacherCode << "\n"
              << "Type Code: " << typeCode << "\n"
              << "Student Count: " << studentCount << "\n"
              << "Letter: " << letter << "\n"
              << "Study Year: " << studyYear << "\n"
              << "Creation Year: " << creationYear << "\n"
              << "Teacher Information:\n";
    teacher.display();
}

void Class::displayBehavior() const {
    if (studentCount > 30) {
        std::cout << "This is a large class.\n";
    } else {
        std::cout << "This is a small class.\n";
    }
}

bool Class::isSeniorClass() const {
    return studyYear >= 10;
}

void Class::inputClassInfo() {
    std::cout << "Enter class information:\n";

    std::cout << "Class Code: ";
    std::cin >> classCode;

    std::cout << "Teacher Code: ";
    std::cin >> teacherCode;

    std::cout << "Type Code: ";
    std::cin >> typeCode;

    std::cout << "Student Count: ";
    std::cin >> studentCount;

    std::cout << "Letter: ";
    std::cin >> letter;

    std::cout << "Study Year: ";
    std::cin >> studyYear;

    std::cout << "Creation Year: ";
    std::cin >> creationYear;

    std::cout << "Enter teacher information:\n";
    teacher.inputWorkerInfo();

    // Очищення потоку для уникнення проблем із введенням
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
