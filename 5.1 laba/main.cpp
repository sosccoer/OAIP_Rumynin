#include <iostream>
#include <vector>
#include <list>

// Хеш-функция для определения индекса элемента в хеш-таблице
int hashFunction(int value, int tableSize) {
    return value % tableSize;
}

int main() {
    // Создание исходного массива из 12 целых чисел в диапазоне от 24000 до 54000
    std::vector<int> array = {24678, 28932, 30145, 34567, 38901, 40234, 45678, 49012, 50345, 52345, 53012, 53678};

    // Создание хеш-таблицы из 10 элементов
    const int tableSize = 10;
    std::vector<std::list<int>> hashTable(tableSize);

    // Заполнение хеш-таблицы
    for (int i = 0; i < array.size(); i++) {
        int index = hashFunction(array[i], tableSize);
        hashTable[index].push_back(array[i]);
    }

    // Вывод исходного массива
    std::cout << "Исходный массив:\n";
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n\n";

    // Вывод хеш-таблицы
    std::cout << "Хеш-таблица:\n";
    for (int i = 0; i < hashTable.size(); i++) {
        std::cout << "Индекс " << i << ": ";
        for (int value : hashTable[i]) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";

    // Поиск элемента в хеш-таблице
    int searchValue;
    std::cout << "Введите элемент для поиска: ";
    std::cin >> searchValue;

    int searchIndex = hashFunction(searchValue, tableSize);
    bool found = false;
    for (int value : hashTable[searchIndex]) {
        if (value == searchValue) {
            found = true;
            break;
        }
    }

    // Вывод результата поиска
    if (found) {
        std::cout << "Элемент " << searchValue << " найден в хеш-таблице.\n";
    } else {
        std::cout << "Элемент " << searchValue << " не найден в хеш-таблице.\n";
    }

    return 0;
}
