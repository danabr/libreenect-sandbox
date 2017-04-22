#include "landscape.h"

void update_elevation(Landpoint& p, float height, float rate) {
  p.height -= p.height/rate; 
  p.height += height/rate;
}
