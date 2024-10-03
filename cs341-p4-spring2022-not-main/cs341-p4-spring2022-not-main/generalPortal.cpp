#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;




int main() {

  int minHeight = 1;
  	int maxHeight = 20;
  	//how many pirates to generate
  	int numPirates = 200;

  	ofstream writer("portal.txt"); //create portal.txt and load it into our ofstream object

  	for (int i = 0; i < numPirates; i++)
  	{
  		//sets random height between range and writes that pirate to the file
  		int randHeight = minHeight + rand() % maxHeight;
  		writer << "Poo" << i << " " << randHeight << "\n";
  	}

  	writer.close();
return 0;
}
