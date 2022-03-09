#include <iostream>

using namespace std;

int Roof (int wide) //функция построения крыши
{
    string a, b, c, d, e, f;
    int roof = wide - 2;  //ширина крыши без кровли
    int i, n, N;
    a= "   /";
    b= '\\';
    c= "_";
    d= ' ';
    if (wide % 2 == 0) //для четной ширины
    {
        for (i = 1; i < (wide/2); i++)
        {
            n = roof - 2 - i;
            N = i;
            if (((roof - 2) - n) > 1)
            {
                f.append(d);
                f.append(d);
            }
            e.clear();
            for (N; N < (roof/2 + 1); N++)
            {
                e.append(d);
            } 
            cout << e << a << f << b << endl;
        }
    }
    else //для нечетной ширины
    {
        for (i = 1; i < (wide/2 + 4); i++)
        {
            e.append(d);
        } 
        cout << e<< c << endl;
        f = ' ';
        for (i=1; i<(wide/2); i++)
        {
            n = roof - 2 - i;
            N = i;
            if (((roof - 2) - n) > 1)
            {
                f.append(d);
                f.append(d);
            }
            e.clear();
            for (N; N < (roof/2 + 1); N++)
            {
                e.append(d);
            } 
            cout << e << a << f << b <<endl;
        }
    }
    for (i = 1; i < (wide - 1); i++)
    {
        a.append(c);
    }
    cout << a << b;
    return 0;
}

int window (int vvod, int count) //функция построения этажа с окнами
{
    string a, b;
    a = "   |";
    b = "|\n";
    int h; // для счёта строк высоты одного этажа дома
    int i; // для подсчёта расстояний внутри этажа
    int n; // для подсчёта расстояний внутри этажа
    int d; // пропорции окна по высоте
    int c; // счёт количества этажей
    d = ((vvod - 2)/2 - 1)/3;
    int s = (vvod - 2)/12 + 1; // для счёта количества окон
    for (c = 1; c <= count - 1; c++)
    {
        for (h = 1; h <= d - 1; h++) // пустые строки после крыши
        {
            cout << a;
            for (n = 1; n <= vvod - 2; n++)
                cout << ' ';
            cout << b; 
        }
        cout << a;  // строка с верхней рамой окна
        for (n = 1; n <= (vvod - 2)/4/s; n++)
            cout << ' ';
        n = 1;
        while (n <= s)
        {
            cout << ' ';
            for (i = 1; i <= (vvod - 2 - (vvod - 2)/4/s - (vvod - 2)/4/s - 2*s)/s; i++)
                cout << '_'; // верхняя рамка
            cout << ' ';
            n++;
        }
        for (n = 1; n <= (vvod - 2)/4/s + ((vvod - 2) - (vvod - 2)/4/s - (vvod - 2)/4/s - 2*s) % s; n++)
            cout << ' ';
        cout << b;
        for (h = 1; h <= ((vvod - 2)/2 - 2) - 2*d; h++) // база окна
        {
            cout << a;
            for (n = 1; n <= (vvod - 2)/4/s; n++) 
                cout << ' ';
            n = 1;
            while (n <= s)
            {
                cout << '|';
                for (i = 1; i <= ((vvod - 2) - (vvod - 2)/4/s - (vvod - 2)/4/s - 2*s)/s; i++)
                    cout << ' ';
                cout << '|';
                n++;
            }
            for (i = 1; i <= (vvod - 2)/4/s + ((vvod - 2) - (vvod - 2)/4/s - (vvod - 2)/4/s - 2*s) % s; i++)
                cout << ' ';
            cout << b;
        }
        cout << a;  // строка нижней части окна
        for (n = 1; n <= (vvod - 2)/4/s; n++) 
            cout << ' ';
        n = 1;
        while (n <= s)
        {
            cout << '|';
            for (i = 1; i <= ((vvod - 2) - (vvod - 2)/4/s - (vvod - 2)/4/s - 2*s)/s; i++)
                cout << '_';
            cout << '|';
            n++;
        }
        for (n = 1; n <= (vvod - 2)/4/s + ((vvod - 2) - (vvod - 2)/4/s - (vvod - 2)/4/s - 2*s) % s; n++) 
            cout << ' ';
        cout << b;
        for (h = 1; h <= d - 1; h++) // пустые строки после окна
        {
            cout << a;
            for (n = 1; n <= (vvod - 2); n++) 
                cout << ' ';
            cout << b;
        }
        cout << a; // последняя строка этажа с "полом"
        for (n = 1; n <= (vvod - 2); n++) 
                cout << '_';
        cout << b;
    }
    return 0;
}

int door (int vvod) //функция построения этажа с дверью
{
    string a, b;
    a = "   |";
    b = "|\n";
    int n;
    int i = 1;
    while (i <= ((vvod - 2)/2 - 1)/6) //пустые строчки перед дверью
    {
        cout << a;
        for (n = 1; n <= (vvod - 2); n++)
            cout << ' ';
        cout << b;
        i++;
    }
    cout << a;
    for (n = 1; n <= (vvod - 2) - (vvod - 2)/3; n++)
        cout << ' ';
    for (n = 1; n <= (vvod - 2)/3; n++)
        cout << '_';
    cout << b;
    while (i < ((vvod - 2)/2 - 1) - 1)
    {
        cout << a;
        for (n = 1; n <= (vvod - 2) - (vvod - 2)/3 - 1; n++)
            cout << ' ';
        cout << '|';
        for (n = 1; n <= (vvod - 2)/3; n++)
            cout << ' ';
        cout << b;
        i++;
    }
    cout << a;
    for (n = 1; n <= (vvod - 2) - (vvod - 2)/3 - 1; n++)
        cout << '_';
    cout << '|';
    for (n = 1; n <= (vvod - 2)/3; n++)
        cout << '_';
    cout << b;
    return 0;
}

int main()
{
    int wide;
    int count;
    cout << "Введите ширину: " << endl;
    cin >> wide;
    cout << "Введите количество этажей дома: " << endl;
    cin >> count;
    if (wide < 4 || count <= 0)
    {
        cout << "Невозможно построить дом.";
    }
    else 
    {
        Roof (wide);
        cout << endl;
        window (wide, count);
        door (wide);
        cout << endl;
    cout << "Вы успешно построили дом! С новым домом!";
    }
    return 0;
}
