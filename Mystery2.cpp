// Exercise 4.21: Mystery2.cpp
#include <iostream>
using namespace std;

int main() {
   unsigned int count{1};

   while (count <= 10) {  //chainging > to < because the code would never run
      cout << (count % 2 == 1 ? "****" : "++++++++") << endl;
      ++count;
   }
}