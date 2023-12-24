#include "C:\Users\HUAWEI\source\repos\КУрачс\laba1\laba1\labulya1.cpp"
#include "C:\Users\HUAWEI\source\repos\laba2\laba2\labulya2.cpp"
#include "C:\Users\HUAWEI\source\repos\For_matrix\For_matrix\labyla.cpp"
#include "C:\Users\HUAWEI\source\repos\Laba4\Laba4\labababa4.cpp"
#include <iostream>
#include "../x64/labulya1.cpp"

int main()
{

    int labs;
    do {
        int a;
        std::cout << "Выберите лабу \n";
        std::cin >> a;
        switch (a) {
        case 1: {
            main1();
            break;
        }
        case 2: {
            main2();
            break;
        }
        case 3: {
            main3();
            break;
        }
        case 4: {
            main4();
            break;
        }
        }

    } while (labs);
    return 0;
}