
#pragma ones 

#include <iostream>


namespace ariel{

using namespace std;

class NumberWithUnits
{
  int cur_units;
  string type;
public:
  //NumberWithUnits():cur_units(1),type(" "){}
  static bool read_units(ifstream& ost); //le ze ein zoreh be bdika
  NumberWithUnits (int c_units = 0, string t = ""):cur_units (c_units)
  {
    type = " ";
  }
  //return NumberWithUnits(cur_units + other.cur_units,type+other.type);
  //le neshane at this ma shemazbia alav rak nikra le nishane orator she kibalnu 
  //nahzir const obekt (c1+c3) = 5 le efshari
  const NumberWithUnits operator+ (const NumberWithUnits & other) const
  {
    return NumberWithUnits ();
  }
  NumberWithUnits & operator+= (const NumberWithUnits & other)
  {
    return *this;
  }
  //plus unari
  NumberWithUnits & operator+ ()
  {				//le meshane li leshanot unati barur she naase le bdikot
    return *this;
  }
  const NumberWithUnits operator- (const NumberWithUnits & other) const
  {
    return NumberWithUnits ();
  }
  NumberWithUnits & operator-= (const NumberWithUnits & other)
  {
    return *this;
  }
  //minus unari
  NumberWithUnits & operator- ()
  {				//le meshane li leshanot unati barur she naase le bdikot
    return *this;
  }
  bool operator! () const
  {				//rozim rak likro mi this !object
    return true;
  }
  bool operator == (const NumberWithUnits & nwu) const
  {				//noad rak le bdika le neshane klum
    return true;

  }
  bool operator < (const NumberWithUnits & nwu) const
  {
    return true;
  }
  bool operator > (const NumberWithUnits & nwu) const
  {
    return true;
  }
  bool operator >= (const NumberWithUnits) const
  {				//this po meshatef peula 
    return true;
  }
  bool operator <= (const NumberWithUnits & nwu) const
  {
    return true;
  }
  bool operator != (const NumberWithUnits & nwu) const
  {
    return true;
  }
  NumberWithUnits & operator++ ()
  {
    return *this;		//reference al pointer
  }
  const NumberWithUnits operator++ (int dummy)
  {
    NumberWithUnits copy = *this;
    //laasot mashu le this 
    return copy;
  }

NumberWithUnits & operator-- ()
  {
    return *this;		//reference al pointer
  }
  const NumberWithUnits operator-- (int dummy)
  {
    NumberWithUnits copy = *this;
    //laasot mashu le this 
    return copy;
  }

  friend ostream & operator<< (ostream & os, const NumberWithUnits & nwu);	//eshli gisha le sadot pratiim
  //we want < > != <= >=  we already have !object

  friend istream & operator>> (istream & is, NumberWithUnits & nwu);


  friend const NumberWithUnits operator* (double num, NumberWithUnits & nwu);	//hahpala be double ze rvalue

  friend const NumberWithUnits operator* (NumberWithUnits & nwu, double num);	//le roze she ishane li gam et hamakor ken




  

};

const NumberWithUnits
operator* (NumberWithUnits & nwu, double num)
{
  return NumberWithUnits ();
}

const NumberWithUnits
operator* (double num, NumberWithUnits & nwu)
{
  return NumberWithUnits ();
}

  //ze ani yaase be cpp







}