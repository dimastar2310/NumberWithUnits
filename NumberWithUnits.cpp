#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>
using namespace std;

 namespace ariel{


  bool NumberWithUnits::read_units(ifstream& ifs){
  return true;
 }
  //ze ani yaase be cpp
 ostream & operator << (ostream& os, const NumberWithUnits& nwu)
{				//le nirze leshanot et haze mi yamin
  return os;
  // equivalent to:
  // os << c._re << '+' << c._im << 'i';
  // return os;
}

istream & operator >> (istream& is, NumberWithUnits& nwu)
{
  return is;
}

 }
