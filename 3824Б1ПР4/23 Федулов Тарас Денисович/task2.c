// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  if (a > 0 && b > UINT_MAX / a) return UINT_MAX;
  return a * b;
}
  return 0;
}



Пример:
#include <limits.h>
#include <stdio.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  
  if (a > 0 && b > UINT_MAX / a) return UINT_MAX; 
  return a * b; 
}
int main() {
    unsigned int a = 100, b = 20;
    unsigned int result = product_of_two_numbers(a, b);
    printf(" %u\n",product_of_two_numbers (a, b));
    return 0;
}
