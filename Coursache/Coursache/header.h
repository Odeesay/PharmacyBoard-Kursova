#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <msclr/marshal.h>


using namespace std;

class CDrug {
private:
    string name;
    string companyProd;
    string group;
    string form;
    double price;
    vector<string> analogues;

public:
    // Конструктор за замовчуванням
    CDrug() : name(""), companyProd(""), group(""), form(""), price(0.0) {}

    // Конструктор з параметрами
    CDrug(const std::string& _name, const std::string& _companyProd, const std::string& _group,
        const std::string& _form, double _price)
        : name(_name), companyProd(_companyProd), group(_group), form(_form), price(_price) {}

    // Конструктор копіювання
    CDrug(const CDrug& other) {
        name = other.name;
        companyProd = other.companyProd;
        group = other.group;
        form = other.form;
        price = other.price;
        analogues = other.analogues;
    }

    // Гетери для полів
    string getName() const {
        return name;
    }

    string getCompanyProd() const {
        return companyProd;
    }

    string getGroup() const {
        return group;
    }

    string getForm() const {
        return form;
    }

    double getPrice() const {
        return price;
    }

    vector<std::string> getAnalogues() const {
        return analogues;
    }

    // Сетери для полів
    void setName(const string& _name) {
        name = _name;
    }

    void setCompanyProd(const string& _companyProd) {
        companyProd = _companyProd;
    }

    void setGroup(const string& _group) {
        group = _group;
    }

    void setForm(const string& _form) {
        form = _form;
    }

    void setPrice(double _price) {
        price = _price;
    }

    void setAnalogues(const vector<string>& _analogues) {
        analogues = _analogues;
    }

    // Метод для додавання аналогу
    void addAnalogue(const string& analogue) {
        analogues.push_back(analogue);
    }

    void removeAnalogue(const std::string& analogue) {
        // Використовуйте алгоритм для видалення аналогу за значенням
        analogues.erase(std::remove(analogues.begin(), analogues.end(), analogue), analogues.end());
    }

    //~CDrug();

    // Оператор запису у поток
    friend std::ostream& operator<<(std::ostream& os, const CDrug& drug) {
        os << "Назва Лікарського Засобу: " << drug.name << std::endl;
        os << "Назва Виробника: " << drug.companyProd << std::endl;
        os << "Група: " << drug.group << std::endl;
        os << "Форма: " << drug.form << std::endl;
        os << "Ціна: " << drug.price << std::endl;
        os << "Аналоги:" << std::endl;
        for (const string& analogue : drug.analogues) {
            os << analogue << std::endl;
        }
        os << "===================" << std::endl;
        return os;
    }


    friend std::istream& operator>>(std::istream& is, CDrug& drug) {
        try {
            drug.analogues.clear();  // Очистити список аналогів
            is >> drug.name;
            is >> drug.companyProd;
            is >> drug.group;
            is >> drug.form;
            is >> drug.price;
            std::string line;
            while (std::getline(is, line)) {
                if (line == "===") {
                    break;  // Зупинитись, якщо знайдено роздільник
                }
                drug.analogues.push_back(line);
            }
            return is;
        }
        catch (const std::exception& e) {
            // Обробка виняткової ситуації C++
            std::cerr << "Caught C++ exception: " << e.what() << std::endl;
            return is;
        }
        catch (...) {
            // Загальний випадок обробки виняткових ситуацій
            std::cerr << "Caught unknown C++ exception" << std::endl;
            return is;
        }
    }


};


