#include <iostream>
#include <string>
using namespace std;

//Разработайте программу, реализующую работу с бинарными деревьями поиска.Необходимо хранить информацию о расписании автобусов :
//-номер маршрута(уникален);
//-ФИО водителя;
//-пункт отправления;
//-пункт назначения.
//Реализовать добавить следующие функции, вызываемые из меню :
//Ввод информации(добавление) с клавиатуры и формирование дерева.
//Вывод бинарного дерева на экран в симметричном порядке(выводить все поля).
//Удаление информации из бинарного дерева по фамилии.
//Вывод на экран информации обо всех маршрутах с пунктом отправления введенным пользователем.
//Нахождение количества маршрутов с пунктом отправления Минск для построенного бинарного дерева.


struct tree
{

    int nomer;
    string name;
    tree* left;
    tree* right;
};

tree* addnode(tree* root,int nomer1,string name1)
{
    tree* add = new tree;
    add->nomer = nomer1;
    add->name = name1;
    add->left = NULL;
    add->right = NULL;
    if (root == NULL)
    {
        return add;
    }
    else
    if (nomer1 < root->nomer)
        root->left = addnode(root->left, nomer1,name1);
    else
        root->right = addnode(root->right, nomer1,name1);
    return root;
}

void treePrint(tree* root)
{
    if (root != NULL)
    {
        treePrint(root->left);
        cout << " " << root->nomer/30 << "." << root->nomer%30 << endl << "Название файла: " << root->name << endl;
        treePrint(root->right);
    }
}

tree* delNode(tree* root, int key)
{
    tree* p;
    tree* p2;



    if (root == NULL)
    {
        cout << "вершина не найдена" << endl;
        return root;
    }
    if (root->nomer < key)
    {
        if (root->left == root->right)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        {
            p = root->right;
            delete root;
            return p;
        }
        else if (root->right == NULL)
        {
            p = root->left;
            delete root;
            return p;

        }
        else
        {
            p2 = root->right;
            p = root->right;
            while (p->left != NULL)
                p = p->left;
            p->left = root->left;
            delete root;
            return p2;
        }
    }
    if (root->nomer < key)
    {
        root->right = delNode(root->right, key);
    }
    else
    {
        root->left = delNode(root->left, key);
    }
    return root;

}

void PrintOnly(tree* root, int key)
{
    if (root != NULL)
    {
        if (root->nomer == key)
        {
            PrintOnly(root->left, key);
            cout << " " << root->nomer << endl;
            PrintOnly(root->right, key);
        }
    }
}



int main()
{
    tree* root;
    root = NULL;
    while (true)
    {
        int choise;
        cout << "1.Введите данные о файле" << endl;
        cout << "2.Вывод бинарного дерева на экран" << endl;
        cout << "3.Удаление файлы из бинарного дерева раньше ввеленной даты" << endl;
        cout << "6.Выход" << endl;
        cin >> choise;
        switch (choise)
        {
            case 1:
            {
                int number;
                cout << "Введите дату: " << endl;
                int day,month;
                cout << "Введите месяц" << endl;
                cin >> month;
                cout << "Введите день"  << endl;
                cin >> day ;

                number = month * 30 + day;

                string name;
                cout <<"Введите имя файла"<< endl;
                cin >> name;
                root = addnode(root, number,name);
                treePrint(root);
                break;
            }
            case 2:
            {
                treePrint(root);
                break;
            }
            case 3:
            {
                int delnomer;
                cout << "Введите дату: " << endl;
                int day,month;
                cout << "Введите месяц" << endl;
                cin >> month;
                cout << "Введите день"  << endl;
                cin >> day ;
                delnomer = month * 30 + day;
                while(root->nomer < delnomer)
                {
                    root = delNode(root, delnomer);
                }
                treePrint(root);
                break;
            }

            case 6:
            {
                exit(0);
            }
        }
    }
}