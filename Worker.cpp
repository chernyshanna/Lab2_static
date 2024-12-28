#include "Worker.h"

Worker::Worker() : name(""), salary(0.0), id(0), isActive(false) {}

Worker::Worker(const std::string& name, double salary, int id, bool isActive)
    : name(name), salary(salary), id(id), isActive(isActive) {}

void Worker::setName(const std::string& name) { this->name = name; }
std::string Worker::getName() const { return name; }

void Worker::setSalary(double salary) { this->salary = salary; }
double Worker::getSalary() const { return salary; }

void Worker::setId(int id) { this->id = id; }
int Worker::getId() const { return id; }

void Worker::setStatus(bool isActive) { this->isActive = isActive; }
bool Worker::getStatus() const { return isActive; }

void Worker::display() const {
    std::cout << "Name: " << name << "\n"
              << "Salary: " << salary << "\n"
              << "ID: " << id << "\n"
              << "Status: " << (isActive ? "Active" : "Past") << "\n";
}

void Worker::inputWorkerInfo() {
    std::cout << "Enter worker name: ";
    std::cin >> name;
    std::cout << "Enter worker salary: ";
    std::cin >> salary;
    std::cout << "Enter worker ID: ";
    std::cin >> id;
    std::cout << "Is the worker active? (1 for yes, 0 for no): ";
    std::cin >> isActive;
}
