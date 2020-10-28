#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.hpp"
#include "rtweekend.hpp"
#include "texture.hpp"
#include "vec3.hpp"

class hit_record {
public:
    double t;
    point3 p;
    vec3 normal;
    bool front_face;
    double u;
    double v;

    void set_face_normal(const ray& r, const vec3& outward_normal){
        front_face = dot(r.direction(),outward_normal)<0;
        normal = front_face ? outward_normal : -outward_normal;
    }
};

#endif
