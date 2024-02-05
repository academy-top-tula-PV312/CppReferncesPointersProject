#include <iostream>

int func()
{
    return 100;
}

void Swap(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}


int main()
{
    int array[10];

    std::cout << array << " " << &array[0] << "\n";
    std::cout << func << "\n";

    int n{ 20 };
    
    /*std::cout << n << "\n";
    std::cout << &n << "\n";*/

    /*int* iptr = &n;
    iptr = array;*/

    const int& iref{n};
    std::cout << iref << "\n";
    n = 123;
    std::cout << n << "\n";

    int* iptr = &n;
    std::cout << &n << " " << iptr << "\n";
    std::cout << &iptr << "\n";
    std::cout << *iptr << "\n";

    *iptr = 123;
    std::cout << n << "\n";


    int x{ 30 };
    int y{ 50 };
    std::cout << x << " " << y << "\n";

    Swap(x, y);

    std::cout << x << " " << y << "\n";

    int size{ 10 };
    iptr = new int[size];

    iptr[0] = 10;
    for (int i{}; i < size; i++)
        iptr[i] = (i + 1);

    for (int i{}; i < size; i++)
        std::cout << *(iptr + i) << " ";
    std::cout << "\n";

    std::cout << iptr << " " << iptr + 2 << " " << iptr - 2 << "\n";
}
