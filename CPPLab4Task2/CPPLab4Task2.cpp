// CPPLab4Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Array
{
private:
    int _size;
    int* _massive;
public:
    Array() 
    {
        _size = 25;
        _massive = new int[_size];
    }
    Array(int size)
    {
        _size = size;
        _massive = new int[_size];
    }

    void ResizeArray(int size)
    {
        _size = size;
        _massive = new int[_size];
    }

    void FullMassive()
    {
        for (int i = 0; i < _size; i++)
        {
            _massive[i] = rand() % 100 + 1;
        }
    }

    void Print()
    {
        for (int i = 0; i < _size; i++)
        {
            std::cout << _massive[i] << ' ';
        }
        std::cout << "\n";
    }
};
int main()
{
    Array myarr;
    myarr.FullMassive();
    myarr.Print();
    Array myarr2(10);
    myarr2.FullMassive();
    myarr2.Print();
    Array myarr3(20);
    myarr3.FullMassive();
    myarr3.Print();
    myarr2.ResizeArray(30);
    myarr2.FullMassive();
    myarr2.Print();

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
