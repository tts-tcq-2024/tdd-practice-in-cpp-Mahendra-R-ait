#define STRINGCALCULATOR_H
#define STRINGCALCULATOR_H
 
#include <string>
#include <cctype>
#include <iostream>

namespace std
 
class StringCalculator
{
  public:
    int less_than_thousand(int num);
    int get_positive_number(int num);
    string processed_String_for_delimiters(string input);
    int exception_handling_for_whitespce(string token);
    int add(string input);
};
