#include "Class.h"
#include "Worker.h"
#include <vector>
#include <limits>

int main() {
    std::vector<Class> classes;

    // Додавання наперед визначених класів
    for (int i = 1; i <= 5; ++i) {
        Worker teacher("Teacher" + std::to_string(i), 5000 + i * 100, i, true);
        classes.emplace_back(i, i * 10, i * 100, 20 + i, 'A' + i, 2023, 2015 + i, teacher);
    }

    // Додавання класу без викладача
    Class newClass;
    std::cout << "Adding a class without a teacher:\n";
    newClass.inputClassInfo();
    classes.push_back(newClass);
    
    std::cout << "------------------\n";

    // Вивід і модифікація класів
    for (auto& cls : classes) {
        cls.display();

        // Запит на видалення викладача
        char removeTeacher;
        std::cout << "Would you like to remove this teacher from active staff? (y/n): ";
        std::cin >> removeTeacher;

        if (removeTeacher == 'y' || removeTeacher == 'Y') {
            Worker teacher = cls.getTeacher();
            teacher.setStatus(false); // Змінюємо статус викладача на "попередній"
            cls.setTeacher(teacher);

            std::cout << "Teacher removed from active staff but remains in the system as 'past'.\n";
        }

        // Запит на зміну зарплати
        else{
		char changeSalary;
		std::cout << "Would you like to change the teacher's salary? (y/n): ";
		std::cin >> changeSalary;

		if (changeSalary == 'y' || changeSalary == 'Y') {
		    double newSalary;
		    std::cout << "Enter new salary: ";
		    std::cin >> newSalary;

		    // Оновлюємо зарплату викладача
		    Worker teacher = cls.getTeacher();
		    teacher.setSalary(newSalary);
		    cls.setTeacher(teacher);
		}
	}

        std::cout << "------------------\n";
    }

    // Вивід усіх викладачів, включаючи "попередніх"
    std::cout << "\nFinal list of all teachers:\n";
    for (const auto& cls : classes) {
        Worker teacher = cls.getTeacher();
        teacher.display();
        std::cout << "------------------\n";
    }

    return 0;
}

