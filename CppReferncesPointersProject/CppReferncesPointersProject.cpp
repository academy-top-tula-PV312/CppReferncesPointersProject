#include <iostream>

int& func()
{
    int x = 100;
    int y = 200;
    x += y;
    return x;
}

int& value(int& x)
{
    return x;
}

void Swap(int& a, int& b)
{
    int temp{ a };
    a = b;
    b = temp;
}

void newArray()
{
    int* arr = new int[100];
    ///

    delete[] arr;

    arr = new int[50];

}


int main()
{
    //newArray();

    //int z = 100;
    //value(z) = 200;
    //std::cout << z << "\n";



    //int array[10];

    //std::cout << array << " " << &array[0] << "\n";
    //std::cout << func << "\n";

    //int n{ 20 };
    //
    ///*std::cout << n << "\n";
    //std::cout << &n << "\n";*/

    ///*int* iptr = &n;
    //iptr = array;*/

    //const int& iref{n};
    //std::cout << iref << "\n";
    //n = 123;
    //std::cout << n << "\n";

    //int* iptr = &n;
    //std::cout << &n << " " << iptr << "\n";
    //std::cout << &iptr << "\n";
    //std::cout << *iptr << "\n";

    //*iptr = 123;
    //std::cout << n << "\n";


    //int x{ 30 };
    //int y{ 50 };
    //std::cout << x << " " << y << "\n";

    //Swap(x, y);

    //std::cout << x << " " << y << "\n";

    //int size{ 10 };
    //iptr = new int[size];

    //iptr[0] = 10;
    //for (int i{}; i < size; i++)
    //    iptr[i] = (i + 1);

    //for (int i{}; i < size; i++)
    //    std::cout << *(iptr + i) << " ";
    //std::cout << "\n";

    //std::cout << iptr << " " << iptr + 2 << " " << iptr - 2 << "\n";


    //int number{};
    //int* pointer{};
    //
    //const int* const superconst{ &number };

    /*int n;
    float x = 12;
    
    int* iptr;
    float* fptr;

    fptr = &x;

    void* vptr = &x;

    iptr = (int*)vptr;
    std::cout << *iptr << "\n";*/

    int n{ 123 };

    int* iptr{ &n };

    int** pptr{ &iptr };
}
