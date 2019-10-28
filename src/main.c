#include <kernel/kernel.h>

#include <standard/terminal.h>

void amberMain() {
  amberInitState(amberGet());

  puts("Hello World.");
}
