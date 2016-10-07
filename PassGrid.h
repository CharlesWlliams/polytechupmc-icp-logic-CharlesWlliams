#ifndef PASSGRID_H
#define PASSGRID_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "Path.h"

using namespace std;

class PassGrid{
	
	private: 
	 int taille;
	 char ** grille;
	 string mdp ;
	 
	public:
	 
	 PassGrid ( int);
	 
	 void supress();
	 
	 string generate ( Path );
	
	 void print ();
	
	 void reset();
		
	 int get_taille();
	 
	 char ** get_grille();
	
};
#endif
