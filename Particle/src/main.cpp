#include <iostream>
#include <chrono>
#include "Emitter.h"

int main()
{
  std::cout<<"Particle System\n";
  Emitter e({0,0,0},10);
  for(int i=0; i<10; ++i)
    {
     e.update(0.01f);
     e.saveFrame(i);
    }
  return EXIT_SUCCESS;
}
