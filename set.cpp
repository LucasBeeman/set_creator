#include "set.h" 
#include <iostream>
#include <algorithm>
#include <iterator>

//constructor for the Set class
template<typename T>
Set<T>::Set(std::set<T> _structure) {
  structure = _structure;
}
// getter/setter for first set
template<typename T>
void Set<T>::setStructure(std::set<T> set) {structure = set;}
template<typename T>
std::set<T> Set<T>::getStructure() {return structure;}
template<typename T>
std::set<T> Set<T>::getOutputStructure() {return outputStructure;}

//printSet function gets an "ostreme_iterator", which allows the printing of any data set;
template<typename T>
void Set<T>::printSet(std::set<T> const &outputSet) {
 std::copy(outputSet.begin(),
   outputSet.end(),
   std::ostream_iterator<T>(std::cout, " "));
 std::cout << std::endl << "--------------------" << std::endl;
}


//a + overload operator that finds the union of 2 sets
//it makes 2 iterators and iterates through both data sets, the set type removes
//any dupes automatically and automatically sorts it.
template<typename T>
std::set<T> Set<T>::operator+(Set<T> s2){
  std::set<T> newSet;
  typename std::set<T>::iterator itOne;
  typename std::set<T>::iterator itTwo;
  //c++ sets automatically remove dupes, so no need to worry about that
  for(itOne = structure.begin(); itOne != structure.end(); ++itOne){
    newSet.insert(*itOne);
  }
  for (itTwo = s2.structure.begin(); itTwo != s2.structure.end(); ++itTwo)
    newSet.insert(*itTwo);
  return newSet;
}
// a - overload that returns the difference between 2 sets.
// it gets 2 iterators and goes through an embedded loop
// it inserts set1 from the return set, but will delete the
// variable if there are any intesecting variable between the 2
template<typename T>
std::set<T> Set<T>::operator-(Set<T> s2) {
  std::set<T> newSet;
  typename std::set<T>::iterator itOne;
  typename std::set<T>::iterator itTwo;
  for (itOne = structure.begin(); itOne != structure.end(); ++itOne){
    newSet.insert(*itOne);
    for (itTwo = s2.structure.begin(); itTwo != s2.structure.end(); ++itTwo){
      if (*itOne == *itTwo) {
        newSet.erase(*itOne);
      }
    }
  }
  return newSet;
}
// a / overload function that returns an intersection between 2 sets.
// it take 2 iterators and inserts them to the return set
// only if there are 2 matching variables in the set.
template<typename T>
std::set<T> Set<T>::operator/(Set<T> s2) {
  std::set<T> newSet;
  typename std::set<T>::iterator itOne;
  typename std::set<T>::iterator itTwo;
  for (itOne = structure.begin(); itOne != structure.end(); ++itOne) {
    for (itTwo = s2.structure.begin(); itTwo != s2.structure.end(); ++itTwo) {
      if (*itOne == *itTwo){
        newSet.insert(*itOne);
      }
    }
  }
  return newSet;
}
