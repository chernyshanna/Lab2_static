#ifndef WORKER_H
#define WORKER_H

#include <string>
#include <iostream>

class Worker {
private:
    std::string name;
    double salary;
    int id;
    bool isActive;

public:
    Worker();
    Worker(const std::string& name, double salary, int id, bool isActive);

    void setName(const std::string& name);
    std::string getName() const;

    void setSalary(double salary);
    double getSalary() const;

    void setId(int id);
    int getId() const;

    void setStatus(bool isActive);
    bool getStatus() const;

    void display() const;
    void inputWorkerInfo();
};

#endif // WORKER_H
