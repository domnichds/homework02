#include <iostream>
#include <string>

int main() {
    std::string name; # Имя пользователя
    std::cin >> name; # Запрос имени пользователя
    std::cout << "Hello world from " << name << std::endl; # Вывод на экран
    return 0;
}
