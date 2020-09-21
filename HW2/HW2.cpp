/*
  HW2 source file
  CS201
  Written by : Martin Baird
  Date : 09/20/2020

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
  std::vector<std::string> names;
  for (int i = 0; i < 10; i++)
    {
      std::string name;
      std::cout << "Please enter a name: ";
      std::getline(cin, name);
      names.push_back(name);
    }
    return 0;
}
