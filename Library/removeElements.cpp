// removeElements.cpp

#include <algorithm>
#include <iostream>
#include <vector>

int main() {

   std::cout << '\n';

   std::vector myVec{-2, 3, -5, 10, 3, 0, -5};

   for (auto ele: myVec) std::cout << ele << " ";
   std::cout << "\n\n";
   /**
    * What std::remove_if does is to reorder the elements in the range
    * [myVec.begin(), myVec.end()] in such a way that all the elements
    * for which the lambda function returns true are put at the end of
    * the range. It does not physically remove them from the vector.
    */
   std::remove_if(myVec.begin(), myVec.end(), [](int ele) { return ele < 0; }); // (1)

   for (auto ele: myVec) std::cout << ele << " ";

   std::cout << "\n\n";

}