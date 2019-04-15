#include "template_color_template_point.cpp"

template <typename T, typename L, typename W>
class weight_point : public template_color_template_point<T, L> {
    W weight;
};

int main(){}
