#include <cstdlib>
#include <iostream>
#include <GLES/gl.h>
#include <GLES/egl.h>

#include <gf/gf.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
  gf_dev_t    gfdev;
  gf_dev_info_t       info;
  int res = gf_dev_attach(&gfdev, NULL, &info);
  if (res != GF_ERR_OK)
  {
     printf("gf_dev_attach() failed %d\n", res);
     return -1;
  }
  printf("gf_dev_attach() passed %d\n", res);
  std::cout << "Welcome to the QNX Momentics IDE" << std::endl;
  return EXIT_SUCCESS;
}
