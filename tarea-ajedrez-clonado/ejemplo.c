#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = repeatH(blackSquare,1)+repeatH(whiteSquare,1);
  interpreter(blackKnight);
}
