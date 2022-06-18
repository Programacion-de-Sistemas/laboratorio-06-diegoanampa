#include "chess.h"
#include "figures.h"

void display(){
  
  //fondo gris y blanco
  char** unionGW = join(blackSquare,whiteSquare);
  char** repUnionGW = repeatH(unionGW,4);
  char** unionWG = join(whiteSquare,blackSquare);
  char** repUnionWG = repeatH(unionWG,4);
  char** unionMidFilas= up(repUnionGW,repUnionWG);
  char** unionMitad = repeatV(unionMidFilas,2);
  
  //primera fila blancos
  char** union1 = join(rook,knight);
  char** union2 = join(union1,bishop);
  char** union3 = join(union2,queen);
  char** union4 = join(union3,king);
  char** union5 = join(union4,bishop);
  char** union6 = join(union5,knight);
  char** union7 = join(union6,rook);
  
  //ultima fila negros
  char** union01 = join(blackrook,blackknight);
  char** union02 = join(union01,blackbishop);
  char** union03 = join(union02,blackqueen);
  char** union04 = join(union03,blackking);
  char** union05 = join(union04,blackbishop);
  char** union06 = join(union05,blackknight);
  char** union07 = join(union06,blackrook);
  
  //fila de peones
  char** peonesBlancos = repeatH(pawn,8);
  char** peonesNegros = repeatH(blackpawn,8);
  
  //figuras relleno blanco
  char** union9 = up(union7,peonesBlancos);
  char** union10 = superImpose(union9,unionMitad);
  
  //union de las figuras mas el tablero vacio del medio
  char** union11 = up(union10,unionMitad);
  
  //figuras relleno negro
  char** union12 = up(peonesNegros,union07);
  char** union13 = superImpose(union12,unionMitad);
  
  //char** union14 = flipV(rotateL(rotateL(union13)));
  //char** union15 = flipH(union14);
  
  //union final
  char** union16 = up(union11,union13);
  
  interpreter(union16);
  
}
