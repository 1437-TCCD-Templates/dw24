#include "dw.h"

Employee::Employee(double base_salary){base_salary_ = base_salary}

Employee::~Employee() {}

Salaried_employee::Salaried_employee(double base_salary)
    : Employee(base_salary) {

  double Salaried_employee::calculate_pay() { return base_salary_ }
