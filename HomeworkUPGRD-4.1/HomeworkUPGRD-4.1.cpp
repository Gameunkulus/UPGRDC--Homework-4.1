// HomeworkUPGRD-4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


template<class T>
T square_mult(T num) {
   return num * num;
};

template<class T>
vector<T> square_mult(vector<T> vec) {
    T newnum;
    for (int i = 0; i < vec.size(); i++) {
        newnum = vec.at(i) * vec.at(i);
        vec.at(i) = newnum;
    }
    return vec;
};

int main()
{
        cout << "[IN] : " << 4 << std::endl;
        std::cout << "[OUT] : " << square_mult(4)<< std::endl;

        vector<int>vec = {-1, 4, 8};
        std::cout << "[IN] : ";
        for (int i = 0; i < 3; i++) {
            std::cout << vec[i] << " ";
        };
        std::cout << std::endl;

        vec = square_mult(vec);

        std::cout << "[OUT] : ";
        for (int i = 0; i < 3; i++) {
            std::cout << vec[i] << " ";
        };
        std::cout << std::endl;
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
