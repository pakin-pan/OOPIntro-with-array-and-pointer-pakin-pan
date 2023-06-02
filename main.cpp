#include <iostream>
using namespace std;

#include "student.h"

int main(int argc, char* argv[]) {
 
  int n= (argc-1)/3;
  student *pt_std=new student[n];
int i;
  //./aout monkey 20 3.5 Art 15 2.5
  for(i=1;i<argc;i+=3)
  {
    (*pt_std).set_all(argv[i],atoi(argv[i+1]),atof(argv[i+2]));
    pt_std++;
  }
  /*put them in 2 different loops*/
  pt_std -= n;

  for(i=0;i<n;i++){  
    (*pt_std).print_all();
      pt_std++;
  }  
  pt_std -= n;

  int j;
  float high_score=0;
  for(i=0;i<n;i++)
  {
    if((*pt_std).get_score() > high_score)
    {
      high_score = (*pt_std).get_score();
      j=i;
    }
    pt_std++;
  }
  pt_std -= n;
  cout<<endl<<"*******************"<<endl<<"    Higest GPA"<<endl<<"*******************"<<endl;
  (pt_std+j)->print_all();
  delete[] pt_std;
  //name =oat
  //age =21
  //score=55
  //print all info
  }