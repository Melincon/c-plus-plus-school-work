#include "videogame.h"
#include <iostream>
#include <string>
using namespace std;
int main()				//Travis Claus
{						//lab thirteen
	videogame thisgame;	//12/16/15
	videogame thatgame("that game", 55.45, 7);

	cout << thisgame.getname() << " " << thisgame.getprice() <<
		" " << thisgame.getrating() << " " << endl << endl;

	thisgame.setname("my game");
	thisgame.setprice(60.32);
	thisgame.setrating(8);

	cout << thisgame.getname() << " " << thisgame.getprice() <<
		 " " << thisgame.getrating() << " " << endl << endl;

	videogame *aptr = new videogame[2];

	aptr[0] = thisgame;
	aptr[1] = thatgame;
	
	for (int i = 0; i < 2; i++)
		aptr[i].show();

	return 0;
}