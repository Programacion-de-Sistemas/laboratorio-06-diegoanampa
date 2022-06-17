#include "chess.h"
#include "figures.h"

void display(){
  char** unionGW = join(blackSquare,whiteSquare);
  char** repUnionGW = repeatH(unionGW,4);
  char** unionWG = join(whiteSquare,blackSquare);
  char** repUnionWG = repeatH(unionWG,4);
  char** unionMidFilas= up(repUnionGW,repUnionWG);
  char** unionMitad = repeatV(unionMidFilas,2);
  
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
  
  char** union10 = superImpose(union7,unionMitad);
  
  char** union11 = up(union10,unionMitad);
	  
  interpreter(union10);
  
}
