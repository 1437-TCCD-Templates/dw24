#include "dw.h"
#include <gtest/gtest.h>

TEST(SalariedEmployee, ReturnsBaseSalaryAsPay) {
  Salaried_employee emp(3000.0);
  EXPECT_DOUBLE_EQ(emp.calculate_pay(), 3000.0);
}

TEST(SalariedEmployee, PolymorphicCallThroughBasePointer) {
  Salaried_employee emp(1500.0);
  Employee *base = &emp;
  EXPECT_DOUBLE_EQ(base->calculate_pay(), 1500.0);
}
