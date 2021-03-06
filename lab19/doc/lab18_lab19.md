# ЛАБОРАТОРНА РОБОТА № 18. ДИНАМІЧНІ МАСИВИ.
# ЛАБОРАТОРНА РОБОТА № 19. ДИНАМІЧНІ СПИСКИ.
1. ВИМОГИ
#### 1.1. Розробник
* Бельчинська Катерина Юріївна;
* студентка групи КІТ-320;
* 2021
#### 1.2. Загальне завдання (лабораторна робота №18)
* розробити функцію, яка реалізує вставку в рядок “s” другий рядок “s2” в “i”-у позицію рядка “s”;
* розробити функцію видалення з рядка “s” усіх символів з індексами в заданому діапазоні;
* за допомогою функцій memcpy, memset створити функції додання та видалення елементів з динамічного масиву вашої прикладної області;
* додати модульні тести, що демонструють коректність розроблених функцій.
#### 1.3. Загальне завдання (лабораторна робота №19)
* реалізувати сортування вмісту списку за одним з критеріїв. При цьому обов’язково забеспечити, щоб обмін місцями об’єктів здійснювався шляхом обміну їх покажчиків.
2. ОПИС ПРОГРАМИ (ЛАБОРАТОРНА РОБОТА №18)
#### 2.1. Функціональне призначення
Використання динамічних масивів для динамічного виділення пам'яті та використання функцій memcopy та memset.


#### 2.2. Опис логічної структури

![рисунок 4](assets/delete_array.png)

Рисунок 1. Функція видалення частини строки.

![рисунок 4](assets/insert.png)

Рисунок 2. Функція для вставки однієї строки в іншу.

![рисунок 4](assets/deleteStructElement.png)

Рисунок 3. Функція для видалення елементу з масиву елементів.

![рисунок 4](assets/copyStructElement.png)

Рисунок 4. Функція для додавання елементу у масив елементів.

#### 2.3. Структура проекту
````
.
├── doc
│   ├── assets
│   │   ├── addElement.png
│   │   ├── cleanUp.png
│   │   ├── copyStructElement.png
│   │   ├── delete_array.png
│   │   ├── deleteElementNext.png
│   │   ├── deleteStructElement.png
│   │   ├── dialog.png
│   │   ├── findByCriterion.png
│   │   ├── get_element_by_pos.png
│   │   ├── getInstrumentList.png
│   │   ├── insertEl.png
│   │   ├── insert.png
│   │   ├── showArray.png
│   │   ├── sortByYearList.png
│   │   └── writeInFileList.png
│   └── lab18_lab19.md
├── Doxyfile
├── Makefile
├── README.md
├── src
│   ├── CMakeLists.txt
│   ├── lib.c
│   ├── lib.h
│   └── main.c
└── test
    └── test.c
````
#### 2.4. Генерування Doxygen-документації

![рисунок 4](assets/doxygen.png)

Рисунок 5.

#### 2.5. Перевірка на утечки памʼяті за допомогою Valgrind:

![рисунок 4](assets/valgrind.png)

Рисунок. 6.

3. ОПИС ПРОГРАМИ (ЛАБОРАТОРНА РОБОТА №19)

#### 3.1. Функціональне призначення
Використання двонаправлених списків для пересування між елементами масиву елементів в обидві сторони



#### 3.2. Опис логічної структури

![рисунок 4](assets/get_element_by_pos.png)

Рисунок 7. Перехід до потрібного елементу за заданою позицією.

![рисунок 4](assets/insertEl.png)

Рисунок 8. Додавання пам'яті для нового елементу.

![рисунок 4](assets/getInstrumentList.png)

Рисунок 9. Читання списку інструментів з файлу.

![рисунок 4](assets/sortByYearList.png)

Рисунок 10. Сортування списку за роком виготовлення.

![рисунок 4](assets/writeInFileList.png)

Рисунок 11. Запис списку у файл.

![рисунок 4](assets/addElement.png)

Рисунок 12. Додавання елементу до списку.

![рисунок 4](assets/deleteElementNext.png)

Рисунок 13. Видалення елементу зі списку.

![рисунок 4](assets/showArray.png)

Рисунок 14. Вивід вмісту списку на екран.

![рисунок 4](assets/findByCriterion.png)

Рисунок 15. Пошук елементу зі списку за фірмою Yamaha.

![рисунок 4](assets/dialog.png)

Рисунок 16. Діалог з користувачем для виконання певних дій.

![рисунок 4](assets/cleanUp.png)

Рисунок 17. Звільнення пам'яті для списку.

#### 3.3. Структура проекту
````
.
├── doc
│   ├── assets
│   │   ├── addElement.png
│   │   ├── add_struct_element.png
│   │   ├── cleanUp.png
│   │   ├── copyStructElement.png
│   │   ├── delete_array.png
│   │   ├── deleteElementNext.png
│   │   ├── deleteStructElement.png
│   │   ├── delete_struct_element.png
│   │   ├── dialog.png
│   │   ├── doxygen.png
│   │   ├── findByCriterion.png
│   │   ├── get_element_by_pos.png
│   │   ├── getInstrumentList.png
│   │   ├── insertEl.png
│   │   ├── insert.png
│   │   ├── showArray.png
│   │   ├── sortByYearList.png
│   │   ├── tests_lab18.png
│   │   └── writeInFileList.png
│   └── lab18_lab19.md
├── Doxyfile
├── src
│   ├── data.c
│   ├── data.h
│   ├── list.c
│   ├── list.h
│   └── main.c
└── test
    └── test.c
````
4. ВАРІАНТИ ВИКОРИСТАННЯ (ЛАБОРАТОРНА РОБОТА №18)

![рисунок 4](assets/delete_struct_element.png)

Рисунок 18. Результат видалення елементу з масиву елементів.

![рисунок 4](assets/add_struct_element.png)

Рисунок 19. Результат додавання елементу з масиву елементів.

![рисунок 4](assets/tests_lab18.png)

Рисунок 20. Тести для додавання строки у іншу строку та видалення частини строки.


5. ВАРІАНТИ ВИКОРИСТАННЯ (ЛАБОРАТОРНА РОБОТА №19)

![рисунок 4](assets/dialog_with_user.png)

Рисунок 21. Діалог з користувачем.

![рисунок 4](assets/sorted_list.png)

Рисунок 22. Сортований список за роком виготовлення інструментів.

![рисунок 4](assets/write_list_in_file.png)

Рисунок 23. Запис  списку у файл.

![рисунок 4](assets/delete_struct_element.png)

Риунок 24. Видалення елементу зі списку.

![рисунок 4](assets/add_list_element.png)

Рисунок 25. Додавання елементу у список.

![рисунок 4](assets/find_by_criterion.png)

Рисунок 26. Пошук скрипки фірми Yamaha.

![рисунок 4](assets/list_%20in_in_reverse_order.png)

Рисунок 27. Написання списку у зворотньому порядку.


ВИСНОВКИ

В ході виконання даних лабораторних робіт була осовоєна з динамічними масивами та списками.
