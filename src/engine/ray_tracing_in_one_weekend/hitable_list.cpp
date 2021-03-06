#include "hitable_list.hpp"

bool hitable_list::hit(const ray &r, float t_min, float t_max, hit_record &record) const {
  hit_record temp_record;
  bool hit_anything = false;
  double closest_so_far = t_max;
  for (int i = 0; i < _size; ++i) {
    if (_list[i]->hit(r, t_min, closest_so_far, temp_record)) {
      hit_anything = true;
      closest_so_far = temp_record.t;
      record = temp_record;
    }
  }
  return hit_anything;
}