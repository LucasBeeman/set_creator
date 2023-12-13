#ifndef SET_H
#define SET_H

#include <set>

template <typename T>
class Set {
  private:
    std::set<T> structure;
    std::set<T> outputStructure;
  public:
    Set(std::set<T> _structure);
    void setStructure(std::set<T> set);
    std::set<T> getStructure();
    std::set<T> getOutputStructure();
    void printSet(std::set<T> const &outputSet);
    std::set<T> operator+(Set<T> s2);
    std::set<T> operator-(Set<T> s2);
    std::set<T> operator/(Set<T> s2);
};

#include "set.cpp"
#endif 
