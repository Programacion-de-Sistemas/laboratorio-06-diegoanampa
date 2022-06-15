#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = join(whiteSquare,blackSquare);
  char** blackKnight2 = repeatH(blackKnight,4);
  interpreter(blackKnight2);
}
