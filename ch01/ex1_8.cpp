#include <iostream>

int main() {
  std::cout << "/*";  // Correct
  std::cout << "*/";  // Correct
  //std::cout << /* "*/" */;  // Error (illegal quotes)
  std::cout << /*  "*/" /*  "/*"  */;  // Correct
  return 0;
}