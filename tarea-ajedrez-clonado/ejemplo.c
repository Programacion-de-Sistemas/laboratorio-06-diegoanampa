#include "chess.h"
#include "figures.h"

void display(){
  char** blackKnight = repeatH(blackSquare,4);
  interpreter(blackKnight);
}
