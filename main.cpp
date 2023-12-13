#include "set.h"

int main() {

 // 2 classes of int sets
 Set<int> set({1, 2, 4});
 Set<int> setTwo({2, 4 ,6});

 //2 classes of char sets
 Set<char> charSet({'a', 'V', '9'});
 Set<char> charSetTwo({'3', '5' , 'a'});

 //overloading operations in action
 std::set<char> unionChar = charSet + charSetTwo;
 std::set<int> unionSet = set + setTwo; 
 std::set<int> intersectSet = set / setTwo;
 std::set<int> differenceOneSet = set - setTwo;
 std::set<int> differneceTwoSet = setTwo - set;

 //print functions
 std:: cout<< "This is a union of 2 int sets: ";
 set.printSet(unionSet);
 std::cout << "This is an intersection of 2 int sets: ";
 set.printSet(intersectSet);
 std::cout << "This is a difference between int sets 1 and 2: ";
 set.printSet(differenceOneSet);
 std::cout << "This is a difference between int sets 2 and 1: ";
 set.printSet(differneceTwoSet);
 std::cout << "This is a union of char sets: ";
 charSet.printSet(unionChar);
 
 return 0;
}
