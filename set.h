#ifndef SET_H
#define SET_H

#include <set>

template <typename T>
class Set {
  private:
    std::set<T> structureOne;
    std::set<T> structureTwo;
    //std::set<T> outputStructure;
  public:
    Set(std::set<T> _structureOne, std::set<T> _structureTwo);
    void setStructureOne(std::set<T> setOne);
    std::set<T> getStructureOne();
    void setStructureTwo(std::set<T> setTwo);
    std::set<T> getStructureTwo();
    std::set<T> getOutputStructure();
    void printSet(std::set<T> outputSet);
};

#include "set.cpp"
#endif 
