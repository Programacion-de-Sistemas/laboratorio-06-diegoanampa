#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = join(blackSquare,whiteSquare);
  char** blackKnight2 = repeatH(blackKnight,4);
  interpreter(blackKnight2);
}
