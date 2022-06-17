#include "chess.h"
#include "figures.h"

void display(){
  char** unionBW = join(blackSquare,whiteSquare);
  char** repetirUBW = repeatH(unionBW,4);
  char** unionWB = join(whiteSquare,blackSquare);
  char** repetirUWB = repeatH(unionWB,4);
  char** unionF1F2 = up(repetirUBW,repetirUWB);
  char** repetirUF1F2 = repeatV(unionF1F2,2);
  
  char** union1 = join(greyBGrook,knight);
  char** union2 = join(union1,greyBGbishop);
  char** union3 = join(union2,queen);
  char** union4 = join(union3,greyBGking);
  char** union5 = join(union4,bishop);
  char** union6 = join(union5,greyBGknight);
  char** union7 = join(union6,rook);
  
  char** union8 = join(pawn,greyBGpawn);
  char** peonesBlancos = repeatH(union8,4);
  char** union9 = up(union7,peonesBlancos);
  
  char** union10 = up(union9,repetirUF1F2);
	  
  interpreter(union10);
  
}
