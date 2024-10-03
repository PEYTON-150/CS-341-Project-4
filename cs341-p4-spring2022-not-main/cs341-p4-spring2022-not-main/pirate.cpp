#include "pirate.h"
int Pirate::numDead = 0;


Pirate ::Pirate() {



}

Pirate :: ~Pirate() {


}

void Pirate :: print() {

  ifstream infile;
  infile.open("portal.txt");
  if(!infile) {
    cout << "portal.txt not opened" << endl;
  }// end if

  for(int i = 0; i < 10; i++) {
      infile >> name;
      infile >> height;
      cout << name << " " << height << " " <<endl;
      }
}
