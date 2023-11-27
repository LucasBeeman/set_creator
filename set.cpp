#include "set.h" 
#include <iostream>
#include <algorithm>
#include <iterator>
template<typename T>
Set<T>::Set(std::set<T> _structureOne, std::set<T> _structureTwo) {
  structureOne = _structureOne;
  structureTwo = _structureTwo;
}
// getter/setter for first set
template<typename T>
void Set<T>::setStructureOne(std::set<T> setOne) {structureOne = setOne;}
template<typename T>
std::set<T> Set<T>::getStructureOne() {return structureOne;}
//getter/setter for second set
template<typename T>
void Set<T>::setStructureTwo(std::set<T> setTwo) {structureTwo = setTwo;}
template<typename T>
std::set<T> Set<T>::getStructureTwo() {return structureTwo;}
//getter for outputSet
template<typename T>
std::set<T> Set<T>::getOutputStructure() {return outputStructure;}
template<typename T>
void Set<T>::printSet(std::set<T> outputSet) {
 std::copy(outputSet.begin(),
   outputSet.end(),
   std::ostream_iterator<T>(std::cout, " "));
