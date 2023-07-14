#include <unistd.h>

int main() {
  char c;
  while(read(STDIN_FILENO, &c, 1) == 1 && c != 'q'); // Read 1 byte from standard input into variable c until no more bytes remain, which will return a 0
  return 0;
}

// Next up is step 5