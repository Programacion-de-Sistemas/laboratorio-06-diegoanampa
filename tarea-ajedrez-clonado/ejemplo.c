#include "chess.h"
#include "figures.h"

void display(){
  char** unionBW = join(blackSquare,whiteSquare);
  char** repetirUBW = repeatH(unionBW,4);
  char** unionWB = join(whiteSquare,blackSquare);
  char** repetirUWB = repeatH(unionWB,4);
  char** unionF1F2 = up(repetirUBW,repetirUWB);
  char** repetirUF1F2 = repeatV(unionF1F2,2);
	  
  interpreter(repetirUF1F2);
  
}
