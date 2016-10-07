#include "PassGrid.h"

#include <iostream>
#include <ctime>


using namespace std;
int i, j;
PassGrid :: PassGrid (int taille ) {
		
		srand (time (NULL));
		this->taille = taille; 
		grille = new char* [ taille ]; 
		for (i=0; i < taille; i++) {
        grille [i] = new char [taille];
		
		}

		for (i= 0 ; i  <  taille ; i++ ){
			
				for (j = 0; j < taille ; j++ ){
				
						grille [i][j] =  rand ()% (95-33) +33;
					
				}	
		}	
} 

void PassGrid::print( ){
	
		for ( i=0; i < taille; i++) {
 
			for ( j=0; j < taille; j++)
			
			{	
				cout << grille[i][j] << " ";	
			}
			cout <<endl;
		}	
}



void PassGrid:: reset (){
	
	for (i= 0 ; i  <  taille ; i++ ){
		 
				for (j = 0; j < taille ; j++ ){
				
						grille [i][j] = rand ()% (95-33) +33;
					
				}	
		}
}


string PassGrid:: generate ( Path ph ){
	
	
	mdp = "MOT DE PASSE : ";
	cout << endl;
	cout << endl;
	 for (int m = 0; m <  2*ph.get_n();  m+=2) {
	
		mdp += grille [ph.get_position()[m] ][ph.get_position()[m+1]]; 	
	}
	
	return mdp;

}

int PassGrid:: get_taille(){

		return taille;
}

char ** PassGrid:: get_grille(){
	

		return grille;
	
}

void PassGrid:: supress () {

		for ( int p = 0 ; p < taille ; p++ ){
			
				delete [] grille[p];
			
		} 
		delete [] grille;
	
	
}
/*
PassGrid:: ~PassGrid(){
	
	delete [] grille;
	
	
	
}

*/


	
