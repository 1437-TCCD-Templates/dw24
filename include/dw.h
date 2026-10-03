#ifndef DW_H
#define DW_H

class Employee {
public:
  Employee(double base_salary);
  virtual double calculate_pay() const = 0;
  virtual ~Employee();

protected:
  double base_salary_;
};

class Salaried_employee : public Employee {
public:
  Salaried_employee(double base_salary);
  double calculate_pay() const override;
};

#endif
