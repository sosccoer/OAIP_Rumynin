#include <iostream>
#include <vector>
#include <list>
#include <string>

// Структура для хранения информации о товаре
struct Product {
    std::string name;
    double price;
    int day;

    // Конструктор по умолчанию
    Product() {}

    // Конструктор с параметрами
    Product(std::string _name, double _price, int _day) : name(_name), price(_price), day(_day) {}
};

// Хеш-функция для определения индекса элемента в хеш-таблице
int hashFunction(double value, int tableSize) {
    return static_cast<int>(value) % tableSize;
}

int main() {
    // Создание исходного массива структур из 7 элементов
    std::vector<Product> array(7);
    std::cout << "Введите информацию о товарах:\n";
    for (int i = 0; i < array.size(); i++) {
        std::cout << "Товар #" << i + 1 << ":\n";
        std::cout << "Наименование: ";
        std::cin >> array[i].name;
        std::cout << "Цена: ";
        std::cin >> array[i].price;
        std::cout << "День выпуска: ";
        std::cin >> array[i].day;
        std::cout << "\n";
    }

    // Создание хеш-таблицы из 10 элементов
    const int tableSize = 10;
    std::vector<std::list<Product>> hashTable(tableSize);

    // Заполнение хеш-таблицы
    for (int i = 0; i < array.size(); i++) {
        int index = hashFunction(array[i].price, tableSize);
        hashTable[index].push_back(array[i]);
    }

    // Вывод исходного массива
    std::cout << "Исходный массив:\n";
    for (int i = 0; i < array.size(); i++) {
        std::cout << "Товар #" << i + 1 << ":\n";
        std::cout << "Наименование: " << array[i].name << "\n";
        std::cout << "Цена: " << array[i].price << "\n";
        std::cout << "День выпуска: " << array[i].day << "\n\n";
    }
    std::cout << "\n";

    // Вывод хеш-таблицы
    std::cout << "Хеш-таблица:\n";
    for (int i = 0; i < hashTable.size(); i++) {
        std::cout << "Индекс " << i << ":\n";
        for (const Product& product : hashTable[i]) {
            std::cout << "Наименование: " << product.name << "\n";
            std::cout << "Цена: " << product.price << "\n";
            std::cout << "День выпуска: " << product.day << "\n\n";
        }
    }
    std::cout << "\n";

    // Поиск элемента по цене в хеш-таблице
    double searchPrice;
    std::cout << "Введите цену для поиска: ";
    std::cin >> searchPrice;

    int searchIndex = hashFunction(searchPrice, tableSize);
    bool found = false;
    for (const Product& product : hashTable[searchIndex]) {
        if (product.price == searchPrice) {
            found = true;
            std::cout << "Найденная структура:\n";
            std::cout << "Наименование: " << product.name << "\n";
            std::cout << "Цена: " << product.price << "\n";
            std::cout << "День выпуска: " << product.day << "\n";
            break;
        }
    }

    // Вывод результата поиска
    if (found) {
        std::cout << "Товар с указанной ценой найден в хеш-таблице.\n";
    } else {
        std::cout << "Товар с указанной ценой не найден в хеш-таблице.\n";
    }

    return 0;
}
