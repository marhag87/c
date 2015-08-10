#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas", "Ohio"
  };
  int num_states = 5;

  int i = 0;
  while(i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    if(i < num_states) {
      states[i] = argv[i];
    }
    i++;
  }

  i = 0; // watch for this
  while(i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}
