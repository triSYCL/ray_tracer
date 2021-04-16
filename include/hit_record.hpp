#ifndef HIT_RECORD_HPP
#define HIT_RECORD_HPP

#include "primitives.hpp"

namespace raytracer::visitor {
class hit_record {
 public:
  real_t t;
  point p;         // hit point
  vec normal;      // normal at hit point
  bool front_face; // to check if hit point is on the outer surface
  /*local coordinates for rectangles
  and mercator coordinates for spheres */
  real_t u;
  real_t v;

  // To set if the hit point is on the front face
  void set_face_normal(const ray& r, const vec& outward_normal) {
    front_face = dot(r.direction(), outward_normal) < 0;
    normal = front_face ? outward_normal : vec {} - outward_normal;
  }
};
} // namespace raytracer::visitor
#endif