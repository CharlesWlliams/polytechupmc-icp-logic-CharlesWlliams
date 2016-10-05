#pragma once
#include<string>


class ExpLog{
public:
  virtual std::string toString() const  = 0;
  virtual ThreeVal::ThreeVal_t evaluate()const = 0;
};


