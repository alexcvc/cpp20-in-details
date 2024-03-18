// eraseRemoveElements.cpp

#include <algorithm>
#include <iostream>
#include <vector>

int main() {

   std::cout << '\n';

   {
      std::vector myVec{-2, 3, -5, 10, 3, 0, -5};

      for (auto ele: myVec) std::cout << ele << " ";
      std::cout << "\n\n";

      /**
       * This statement initiates the std::remove_if function, using myVec.begin()
       * and myVec.end() to define the range of elements over which the function
       * operates (i.e., the entire vector myVec).
       * The function traverses this range and rearranges the elements of the vector
       * such that all elements for which the provided predicate
       * (the lambda expression [](int ele){ return ele < 0; }) is true, are moved to
       * the end of the range. The lambda function simply checks whether a given
       * element ele is less than 0.
       * The std::remove_if function does not actually remove elements from the container
       * - it just rearranges them. So, it returns an iterator pointing to the end of the
       * range for the remaining useful elements (i.e., the non-negative integers). This
       * iterator is then assigned to newEnd.
       * However, negative numbers are still part of the vector myVec. If you want to
       * completely remove negative numbers, you need to erase them. This is done using
       * the erase member function of the vector:
       */
      auto newEnd = std::remove_if(myVec.begin(), myVec.end(),
                                   [](int ele) { return ele < 0; });

      /**
       * This completely removes the negative numbers from myVec, leaving behind only the
       * non-negative numbers. Thus, after this code executes, myVec contains only the
       * non-negative numbers from its original set of elements. The resulting vector is
       * then printed to the console.
       * The entire operation of removing elements that satisfy a certain condition and actually
       * erasing them from a container, is commonly called "Erase-Remove Idiom" in C++. It's
       * typically done in a single line as shown in the commented line.
       */
      myVec.erase(newEnd, myVec.end());

      for (auto ele: myVec) std::cout << ele << " ";
      std::cout << "\n\n";
   }
   {
      std::vector myVec{-2, 3, -5, 10, 3, 0, -5};

      for (auto ele: myVec) std::cout << ele << " ";
      std::cout << "\n\n";

      /**
        * short form
        */
      myVec.erase(std::remove_if(myVec.begin(), myVec.end(), [](int ele) { return ele < 0; }), myVec.end());

      for (auto ele: myVec) std::cout << ele << " ";
      std::cout << "\n\n";
   }
}