/****************************************************
A program in Cpp which receives 2 resistor values from the end user:res1,res2
and then displays these values to the console.ENCAPUSLATION IS OBLIGATORY.
****************************************************/

#include<iostream>
  using namespace std;

  class Circuit
  {
  private:
    float res1,res2;

  public:
    void setResistance(void)
    {
      cout<<"Input your 1st resistor value:";
      cin>>res1;
      cout<<"Input your 2nd resistor value:";
      cin>>res2;

    }
//since a function cannot return to values at a time..
    float getResistance(float a)
    {
      if(a==1)
      {
        return res1;
      }
      else if(a==2)
      {
        return res2;
      }
      else
      return 932.3284;     //Garbage value...
    }
    Circuit()
    {
      res1=0;
      res2=0;
    }
};

int main()
{
  Circuit X;
  X.setResistance();
  cout<<endl<<"res1="<<X.getResistance(1)<<endl;
  cout<<"res2="<<X.getResistance(2)<<endl;

return 0;
}


//    29/06/2021
