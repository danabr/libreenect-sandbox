#ifndef LANDSCAPE_H
#define LANDSCAPE_H

struct Landpoint {
  float height; // 0.0f - 1.0f
  float dryness; // 0.0f - 1.0f
};

typedef Landpoint Landscape[512*424];

void update_elevation(Landpoint&, float, float);

#endif
