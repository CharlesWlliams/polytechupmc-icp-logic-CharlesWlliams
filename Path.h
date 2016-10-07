#ifndef PATH_H
#define PATH_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;

class Path {
	
	
		private :
		
			int n,x_dep, y_dep;
			size_t hmax;
			size_t wmax;
			string *chemin;
			int *position;
		public:
			int* get_position();
			int get_n();
			int get_x_dep();
			int get_y_dep();
			string* get_chemin();
			Path (int , std::size_t, std:: size_t);
			void print();
			void supress();
			
			

	
};



#endif
