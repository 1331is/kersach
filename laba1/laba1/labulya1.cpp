#include <iostream>
using namespace std;
void f(int n) {
    int a[32] = {};
    int j = 0;

    while (n > 0) {
        a[j] += n % 2;
        n = n / 2;
        j += 1;
    }
    for (int i = 31; i > 0 - 1; i--) {
        cout << a[i];
        if (i % 8 == 0) {
            cout << "    ";
        }
        if (i % 31 == 0) {
            cout << "    ";
        }
    }


    return;
}
//---------------------------------------------------------------
void d(int n) {
    int a[32] = {};
    int j = 0;
    n = n * (-1);
    while (n > 0) {
        a[j] += n % 2;
        n = n / 2;
        j += 1;
    }
    a[31] = 1;
    for (int i = 31; i > 0 - 1; i--) {
        cout << a[i];
        if (i % 8 == 0) {
            cout << "    ";
        }
        if (i % 31 == 0) {
            cout << "    ";
        }
    }

    return;
}
//---------------------------------------------------------------
int main()
{
    int choose = 2;
    setlocale(LC_ALL, "RU");
    while (choose > 0 and choose <= 6) {
        cin >> choose;
        if (choose == 2) {
            cout << "¬ведите инт (число) ";
            int a;
            int b;
            unsigned int mask = 1 << 31; // 10000000000000000000000
            cin >> a;
            for (int i = 1; i <= 32; i++) {
                if ((mask & a) == mask) {
                    cout << 1;
                }
                else {
                    cout << 0;
                }
                if (i % 8 == 0 or i == 1) {
                    cout << " ";
                }
                //cout << "\n" << (mask&b) << " " << mask <<" \n";
                mask = mask >> 1;

            }
            cout << "’отите ли вы инвертировать все биты? (1/0) \n";
            cin >> b;
            if (b == 1) {
                a = ~a;
                unsigned int mask = 1 << 31; // 10000000000000000000000
                for (int i = 1; i <= 32; i++) {
                    if ((mask & a) == mask) {
                        cout << 1;
                    }
                    else {
                        cout << 0;
                    }
                    if (i % 8 == 0 or i == 1) {
                        cout << " ";
                    }
                    //cout << "\n" << (mask&b) << " " << mask <<" \n";
                    mask = mask >> 1;

                }
            }
        }
        if (choose == 3) {
            
            union 
            {
                int b;
                float c;
            };
            cout << "¬ведите ‘лоат (число с плавающей точкой) \n";
            unsigned int mask = 1 << 31; // 1000000000000000000
            cin >> c;
            for (int i = 1; i <= 32; i++) {
                if ((mask & b) == mask) {
                    cout << 1;
                }
                else {
                    cout << 0;
                }
                if (i == 9 or i == 1) {
                    cout << " ";
                }
                //cout << "\n" << (mask&b) << " " << mask <<" \n";
                mask = mask >> 1;

            }


        }
        if (choose == 4) {
            
            union 
            {
                unsigned int a[2];
                double d;
            };
            cout << "¬ведите дабл ";
            cin >> d;
            
            for (int i = 1; i >= 0; i--) {
                unsigned int mask = 1 << 31;
                for (int j = 0; j <= 31; j++) {
                    if ((mask & a[i]) == mask) {
                        cout << 1;
                    }
                    else {
                        cout << 0;
                    }
                    if (j == 0 and i == 1) {
                        cout << " ";
                    }
                    if (j == 11 and i == 1) {
                        cout << " ";
                    }
                    mask = mask >> 1;


                }
            }
        }
        cout << "\n";

                if (choose == 1) {
                    cout <<
                        "int: " << sizeof(int) << '\n' <<
                        "short int: " << sizeof(short int) << '\n' <<
                        "long int: " << sizeof(long int) << '\n' <<
                        "float: " << sizeof(float) << '\n' <<
                        "double: " << sizeof(double) << '\n' <<
                        "long double: " << sizeof(long double) << '\n' <<
                        "char: " << sizeof(char) << '\n' <<
                 
                        "bool: " << sizeof(bool) << '\n';
                }
                if (choose == 5) {
                    int q;
                    cin >> q;
                  
                    if (q > 0) {
                        f(q);
                    }
                    else {
                        d(q);
                    }
                    cout << "\n";
                }
    }
}
