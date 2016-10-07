#include "Path.h"

#include <iostream>
#include <ctime>

using namespace std;

int x, y,alea, iter, compt,compt2;

Path :: Path ( int n , size_t hmax, size_t wmax ) {
			
			srand (time (NULL));
			
			this->n = n;
			this->hmax = hmax;
			this->wmax = wmax;
			
			chemin = new string [ n - 1];
			position = new int [n*2]; // tableau qui enregistre les coordonnées des points qui constituent le chemin
			compt = 0;
			compt2 = 2;
			
			
			// positionnement aléatoire  du point de départ
			
			x_dep =  rand ()% (wmax) ;
			y_dep = rand()% (hmax);
			position [0] = x_dep;
			position [1] = y_dep;
			x= x_dep;
			y= y_dep;
		
			iter = 1;
			while (iter < n){
				
					alea = ( rand() % (8 - 1 + 1)) + 1; // alea prend des valeurs ebtre 1 et 8
					
					switch (alea) {
						
						case 1:{ // EST
							
							if ( (y+1) < hmax){ 
							
									y++; 
									chemin[compt] = "E"; 
									compt++;
									iter++;
									position[compt2] = x;
									position[++compt2] = y;
									compt2++;
							}
						break;	
						}
						
						case 2:{ // OUEST
							
							if( (y-1) >= 0){
							
									y--;
									chemin[compt] = "W";
									compt ++ ;
									iter++;	
									position[compt2] = x;
									position[++compt2] = y;
									compt2++;							
							}
						break;	
						}
						
						case 3:{ // NORD
							
							if( (x-1) >= 0 ){
							
								x--;
								chemin[compt] = "N";
								compt ++;
								iter++;
								position[compt2] = x;
								position[++compt2] = y;
								compt2++;
								
							}
						
						break;	
						}
						
						case 4:{ // SUD
							
							if( (x+1) < wmax){
								
								x++;
								chemin[compt] = "S";
								compt ++;
								iter++;	
								position[compt2] = x;
								position[++compt2] = y;
								compt2++;
							}
						break;	
						}
						
						case 5:{ // SUD EST
							
							if( (x+1) < wmax && ( y+1) < hmax){
							
								x++;
								y++;
								chemin[compt] = "SE";
								compt ++;
								iter++;
								position[compt2] = x;
								position[++compt2] = y;
								compt2++;
							}
						break;	
						}
						
						case 6:{ // NORD EST
							
							if( (x-1) >= 0 &&  (y+1) < hmax ){
								
								x--;
								y++;
								chemin[compt] = "NE";
								compt ++;
								iter++;
								position[compt2] = x;
								position[++compt2] = y;
								compt2++;
							}		
						break;	
						}
						
						case 7:{ // NORD OUEST
							
							if( (y-1) >= 0 && (x-1) >=0 ){
								
								y--;
								x--;
								chemin[compt] = "NW";
								compt ++;
								iter++;
								position[compt2] = x;
								position[++compt2] = y;
								compt2++;
							}
						
						break;	
						}
						case 8:{ // SUD OUEST
							
							if( (y -1) >= 0 && (x+1) < wmax){
								
								y--;
								x++;
								chemin[compt] = "SW";
								compt ++;
								iter++;
								position[compt2] = x;
								position[++compt2] = y;
								compt2++;
							}
							
						}
					}				
			}
}	


void Path:: print (){
		
		cout << endl;
		
		cout << "(" << y_dep << ";" << x_dep << ")  | ";
		for ( int k = 0; k < compt; k ++ ){
		
				cout << chemin[k] << " | ";
			
			
		}
		cout << endl;	
}


int Path:: get_n(){
	
		return n;
	
}

int* Path :: get_position(){

		return position;
	
	
}

int Path :: get_x_dep(){
	
	return x_dep;
	
}

int Path :: get_y_dep(){
	
	return y_dep;
	
}


string* Path:: get_chemin(){

		return chemin;
	
	
	
}

void Path:: supress(){
	
  delete [] chemin;
  
  delete [] position;


}


