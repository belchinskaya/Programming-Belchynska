/**
 * @mainpage
 * # Індивідуальне завдання
 * @brief Для предметної галузі з розділу “Розрахункове завдання / Індивідуальне завдання”
 * розробити два класи: - клас, що відображає сутність “базового класу”, у тому числі: -
 * конструктор за замовчуванням, копіювання та конструктор з аргументами (реалізація конструкторів
 * повинна бути продемонстрована за допомогою списків інціалізацій); - деструктор; - клас, що має у собі
 * динамічний масив об’єктів базового класу та має в собі методи додавання, видалення елемента, отримання
 * елемента по індексу (або ідентифікатору), вивід усіх елементів на екран.
 * @date 26-april-2021
 * @version 1.0
 */

#include "list.h"
/**
 * @file main.c
 * @brief Головний файл з викликом функцій,
 * виділенням пам'яті для динамічних масивів та заданням вхідного тексту.
 *
 *
 * @author Belchynska K.
 * @date 17-march-2021
 * @version 1.0
 */

/**
 * Головна функція.
 *
 * Послідовність дій:
 * -
 * -
 * -
 * -
 * -
 * -
 * -
 * -
 * -
 * -
 * -
 *
 * @return 0 при успішному завершенні програми
 */
int main() {

    List * list = new List();
    Instrument instrument("Classic", "Yamaha", 1805, 0.5f, Bow(300, PERNAMBUCO));
    list->addInstrument(instrument);
    Instrument instrument2("Acoustic", "Stenor", 1985, 1.5f, Bow(100, FIBERGLASS));
    list->addInstrument(instrument2);
    Instrument instrument3("Classic", "Mendini", 2000, 0.3f, Bow(250, BT));
    list->addInstrument(instrument3);
    list->showInstrument();
    instrument = list->getInstrument(1);
    list->removeInstrument(1);
    list->showInstrument();
    char name[15] = "Yamaha";
    list->findTheOldestInstr(*name);

    delete list;

    return 0;
}