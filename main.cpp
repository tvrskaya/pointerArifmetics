#include <iostream>

//Немного экспериментов и развлечений
template <typename T>
class MyType {
    T* x;
public:

    MyType(T* arr) {
        x = arr;
    }

    T* GetPointer() noexcept {
        return x;
    }
};



int main(void) {
    int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Обычный способ
    int* p = arr;
    for (int i = 0; i < 4; ++i) {
        std::cout << *(p + i) << std::endl;
    }

    float farr[10] = { 0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f };
    MyType<float> myarr(farr);

    auto myP = myarr.GetPointer();
    for (int i = 0; i < 4; ++i) {
        std::cout << *(myP + i) << std::endl;
    }

    return 0;
}