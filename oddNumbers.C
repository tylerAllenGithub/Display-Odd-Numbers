/*Tyler Allen
CS111
lab6-2
2-26-2015
This program will display the double and triple for all odd numbers from 99 down 10 1.//////////////////////////////////*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  cout<<setw(10)<<"Number"<<setw(10)<<"Double"<<setw(10)<<"Triple"<<endl;
  for(int i=99; i>=1; i-=2)
  {
    cout<<setw(10)<<i<<setw(10)<<i*2<<setw(10)<<i*3<<endl;
    //display number, double and triple of number
  }


  return 0;
}
