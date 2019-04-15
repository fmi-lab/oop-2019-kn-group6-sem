#include "template_point.cpp"

template <typename T>
class color_template_point : public template_point<T>{
    float color;
};

int main(){
    color_template_point<float> c;
}
