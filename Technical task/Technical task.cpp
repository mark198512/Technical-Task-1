﻿// Technical task.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");

                                    /*Доровских Павел БД 111 Компьютерная Академия Шаг*/

                                                  /*Игра Поле Чудес */

    cout << "Поле Чудес\n"; /*На экране консоли будет выводится большими буквами */
    cout << "\n";
    cout << "Меню игры будет состоять из 5 пунктов\n";
    cout << "\n";
    cout << "1 Новая игра\n";              /*При каждом новом входе в программу будет возможность начать новую игру*/
    cout << "2 Сохранить игру\n";           /*Эта функция будет добавлена потому что отсутствовалва в прототипе*/
    cout << "3 Загрузить игру\n";           /*Присутствие этой функции вытекает из первой чтобы пользователю было легче*/
    cout << "4 Выход\n";
    cout << "\n";
    cout << "Участниками игры будут сказочные персонажи из сказок Астрид Линдгрен\n";
    cout << "Малыш и Карлсон и Пеппи Длинный Чулок\n";  /*Выбор участников игры самостоятельно будет невозможен*/
    cout << "\n";


                                     /*Логика или что мы увидим при запуске игры*/

    cout << "При запуске игры мы видим в центре экрана Барабан со стандартным перечнем набора очков как в шоу\n";
    cout << "Слева и справа от барабана будут находится противники игрока, которых программа будет выбирать случайноn\n";
    cout << "В левом нижнем углу будет присутствовать изображение ведущего, Якубовича\n";
    cout << "В правом верхнем углу будет технический персонаж, который будет открывать буквы, если их угадали\n";
    cout << "\n";
    cout << "Игрок который будет играть против указанных персонажей не будет иметь собственного персонажа\n";

                                           /*Игровой процесс*/
    cout << "\n";
    cout << "Ведущий будет предлагать игроку крутить барабан если выпадет 0 ход теряется\n";
    cout << "фразы ведущего будут появлятьсяя сбоку от него над головой\n";
    cout << "По такому же принципу будут работать ответы всех участников\n";

                                                         /*Окончание игры */

    cout << "Отдельно будет реализована кнопка назвать слово которую игрок сможет нажать и ввести все слово сразу\n";
    cout << "В случае неверного ответа ход переходит к противникам\n";
    cout << "Новацией будет то что возможность назвать слово будет у противников то есть компа\n";
    cout << "\n";
    
    cout << "Вторым способом окончания игры будет возможность для игрока взять приз\n";
    cout << "\n";
    cout << "Два способа взять приз (только игрок), назвать все слово  (игроком или персонажами), конец игры\n";


















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
