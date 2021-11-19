using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Hello World!\n";

    cout << "1 Задание\n";
    cout << "Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.).\nВывести дату в виде текста (например, «пятое января»).\n";
    int a, b, a10;
    cout << "Введите номер дня ";
    cin >> a;
    cout << "           месяца ";
    cin >> b;
    a10 = trunc(a / 10);
    switch (a10)
    {
    case(1):
        switch (a % 10)
        {
        case(1):cout << "один"; break;
        case(2):cout << "две"; break;
        case(3):cout << "три"; break;
        case(4):cout << "четыр"; break;
        case(5):cout << "пят"; break;
        case(6):cout << "шест"; break;
        case(7):cout << "сем"; break;
        case(8):cout << "восем"; break;
        case(9):cout << "девят"; break;
        }
        cout << "надцатое "; break;
    case(2):cout << "двадцать "; break;
    case(3):cout << "тридцать "; break;
    }
    if (a == 10) cout << "десятое ";
    if (a10 != 1)
    {
        switch (a % 10)
        {
        case(1):cout << "первое "; break;
        case(2):cout << "второе "; break;
        case(3):cout << "третье "; break;
        case(4):cout << "четвертое "; break;
        case(5):cout << "пятое "; break;
        case(6):cout << "шестое "; break;
        case(7):cout << "седьмое "; break;
        case(8):cout << "восьмое "; break;
        case(9):cout << "девятое "; break;
        }
    }
    switch (b)
    {
    case(1):cout << "января"; break;
    case(2):cout << "февраля"; break;
    case(3):cout << "марта"; break;
    case(4):cout << "апреля"; break;
    case(5):cout << "мая"; break;
    case(6):cout << "июня"; break;
    case(7):cout << "июля"; break;
    case(8):cout << "августа"; break;
    case(9):cout << "сентября"; break;
    case(10):cout << "октября"; break;
    case(11):cout << "ноября"; break;
    case(12):cout << "декабря"; break;
    }
    cout << "\n";

    cout << "Задание 2\n";
    cout << "Робот может перемещаться в четырех направлениях («с» — север, «з» — запад, «ю» — юг, «в» — восток)\n и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо.\nДан символ C — исходное направление робота и целое число N — посланная ему команда.\nВывести направление робота после выполнения полученной команды\n";
    cout << "Исходное направление: ";
    char s;
    cin >> s;
    int count, direction, command;
    if (s == -31)          direction = 0;
    else
    {
        if (s == -89)      direction = 1;
        else
        {
            if (s == -18)  direction = 2;
            else           direction = 3;
        }
    }
    count = 0;
    cout << "Вводите команды поочерёдно\n";
    cout << "Для остановки ввода введите неподходящее условиям число\n";
    cin >> command;
    while (command == 0 or command == 1 or command == -1)
    {
        count = count + command;
        cin >> command;
    }
    while (count < 0) count = count + 4;
    direction = (direction + count) % 4;
    switch (direction)
    {
    case(0):cout << "север\n"; break;
    case(1):cout << "запад\n"; break;
    case(2):cout << "юг\n"; break;
    case(3):cout << "восток\n"; break;
    }

    cout << "Задание 3\n";
    cout << "Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме.\nВывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание»,\nнапример: 18 — «восемнадцать учебных заданий».\n";
    cout << "Введите число ";
    int tsk, tsk10;
    cin >> tsk;
    tsk10 = trunc(tsk / 10);

    if (tsk >= 10 and tsk <= 19)              // 10-19
    {
        if (tsk == 10) cout << "десять \n";
        else
        {
            switch (tsk % 10)
            {
            case(1):cout << "один"; break;
            case(2):cout << "две"; break;
            case(3):cout << "три"; break;
            case(4):cout << "четыр"; break;
            case(5):cout << "пятн"; break;
            case(6):cout << "шест"; break;
            case(7):cout << "сем"; break;
            case(8):cout << "восем"; break;
            case(9):cout << "девят"; break;
            }
            cout << "надцать ";
        }
        cout << "учебных заданий";
    }
    else
    {
        if (tsk % 10 == 0 or tsk % 10 >= 5 and tsk % 10 <= 9)        // .5 - .9  .0
        {
            switch (tsk10)
            {
            case(2):cout << "двадцать "; break;
            case(3):cout << "тридцать "; break;
            case(4):cout << "сорок "; break;
            }
            switch (tsk % 10)
            {
            case(5):cout << "пять "; break;
            case(6):cout << "шесть "; break;
            case(7):cout << "семь "; break;
            case(8):cout << "восемь "; break;
            case(9):cout << "девять "; break;
            }
            cout << "учебных заданий";
        }
        else
        {
            if (tsk % 10 >= 2 and tsk % 10 <= 4)                    // .2 - .4 
            {
                switch (tsk10)
                {
                case(2):cout << "двадцать "; break;
                case(3):cout << "тридцать "; break;
                case(4):cout << "сорок "; break;
                }
                switch (tsk % 10)
                {
                case(2):cout << "два "; break;
                case(3):cout << "три "; break;
                case(4):cout << "четыре "; break;
                }
                cout << "учебных задания";
            }
            else                                                    // .1
            {
                switch (tsk10)
                {
                case(2):cout << "двадцать "; break;
                case(3):cout << "тридцать "; break;
                }
                cout << "одно учебное задание";

            }

        }

    }
    cout << "\n";

    cout << "Задание 4\n";
    cout << "Дано целое число в диапазоне 100–999.\n Вывести строку-описание данного числа,\nнапример: 256 — «двести пятьдесят шесть»,\n814 — «восемьсот четырнадцать».\n";
    cout << "Введите число ";
    int h, h100, h10;
    cin >> h;
    h100 = trunc(h / 100);
    h10 = trunc((h % 100) / 10);
    switch (h100)
    {
    case(1):cout << "сто "; break;
    case(2):cout << "двести "; break;
    case(3):cout << "триста "; break;
    case(4):cout << "четыреста "; break;
    case(5):cout << "пятьсот "; break;
    case(6):cout << "шестьсот "; break;
    case(7):cout << "семьсот "; break;
    case(8):cout << "восемьсот "; break;
    case(9):cout << "девятьсот "; break;
    }
    if (h % 100 >= 10 and h % 100 <= 19)              // 10-19
    {
        if (h % 100 == 10) cout << "десять \n";
        else
        {
            switch (h % 10)
            {
            case(1):cout << "один"; break;
            case(2):cout << "две"; break;
            case(3):cout << "три"; break;
            case(4):cout << "четыр"; break;
            case(5):cout << "пятн"; break;
            case(6):cout << "шест"; break;
            case(7):cout << "сем"; break;
            case(8):cout << "восем"; break;
            case(9):cout << "девят"; break;
            }
            cout << "надцать ";
        }
    }
    else
    {
        switch (h10)
        {
        case(2):cout << "двадцать "; break;
        case(3):cout << "тридцать "; break;
        case(4):cout << "сорок "; break;
        case(5):cout << "пятьдесят "; break;
        case(6):cout << "шестьдесят "; break;
        case(7):cout << "семьдесят "; break;
        case(8):cout << "восемьдесят "; break;
        case(9):cout << "девяносто "; break;
        }
        switch (h % 10)
        {
        case(1):cout << "один"; break;
        case(2):cout << "два"; break;
        case(3):cout << "три"; break;
        case(4):cout << "четыре"; break;
        case(5):cout << "пять"; break;
        case(6):cout << "шесть"; break;
        case(7):cout << "семь"; break;
        case(8):cout << "восемь"; break;
        case(9):cout << "девять"; break;
        }
    }
    cout << "\n";

    cout << "Задание 5\n";
    cout << "В восточном календаре принят 60-летний цикл, состоящий из 12-летних подциклов, обозначаемых названиями цвета:\nзеленый, красный, желтый, белый и черный.\nВ каждом подцикле годы носят названия животных:\nкрысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.\nПо номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».\n";
    cout << "Введите год ";
    int year,color,animal;
    cin >> year;
    year = year -(-56);
    while (year >= 60) year = year - 60;
    color = trunc(year / 12);
    animal = year % 12;
    cout << "Год ";
    if (animal == 2 or animal == 3 or animal == 4)
    {
        switch(color)
        {
        case(0):cout << "зелёного "; break;
        case(1):cout << "красного "; break;
        case(2):cout << "желтого "; break;
        case(3):cout << "белого "; break;
        case(4):cout << "чёрного "; break;
        }
        switch (animal)
        {
        case(2):cout << "тигра"; break;
        case(3):cout << "зайца"; break;
        case(4):cout << "дракона"; break;
        }
    }
    else
    {
        switch (color)
        {
        case(0):cout << "зелёной "; break;
        case(1):cout << "красной "; break;
        case(2):cout << "жёлтой "; break;
        case(3):cout << "белой "; break;
        case(4):cout << "чёрной "; break;
        }
        switch (animal)
        {
        case(0):cout << "крысы"; break;
        case(1):cout << "коровы"; break;
        case(5):cout << "змеи"; break;
        case(6):cout << "лошади"; break;
        case(7):cout << "овцы"; break;
        case(8):cout << "обезьяны"; break;
        case(9):cout << "курицы"; break;
        case(10):cout << "собаки"; break;
        case(11):cout << "свиньи"; break;
        }
    }
}
