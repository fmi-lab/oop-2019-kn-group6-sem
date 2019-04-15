#pragma once
#include "template_point.cpp"

template <typename T, typename L>
class template_color_template_point : public template_point<T> {
    L color;
};

