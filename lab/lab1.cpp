#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "Russian");

    std::string surname = "Арустамян";
    std::string initials = "А.Р.";
    std::string birth_place = "г. Саратов, Россия";
    std::string birth_date = "27.04.2008";

    std::cout << "Фамилия и инициалы: " << surname << " " << initials << std::endl;
    std::cout << "Место рождения: " << birth_place << std::endl;
    std::cout << "Дата рождения: " << birth_date << std::endl;

    return 0;
}
