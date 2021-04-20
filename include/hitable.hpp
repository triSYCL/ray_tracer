#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.hpp"
#include "sphere.hpp"
#include "triangle.hpp"

using hittable_t = std::variant<std::monostate, sphere, triangle>;
#endif
