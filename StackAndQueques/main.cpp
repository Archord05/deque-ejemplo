#include <iostream>
#include <deque> //Similar a <Vector>
#include <vector>
#include "string"
int main() {
    std::deque<std::string> comidas = {"papas", "tacos", "manzana"};

    int respuesta = 0;
    std::string agregarComida;

    while (respuesta != -1) {
        std::cout << "elije una opcion" << std::endl;
        std::cout << "1. mostrar comidas" << std::endl;
        std::cout << "2. agregar una comida al inicio" << std::endl;
        std::cout << "3. agregar una comida al final" << std::endl;
        std::cout << "4. remover una comida del inicio" << std::endl;
        std::cout << "5. remover una comida del final" << std::endl;
        std::cout << "6. vaciar lista" << std::endl;
        std::cout << "7. comprobar si la lista esta vacia" << std::endl;
        std::cout << "-1. salir" << std::endl;

        std::cin >> respuesta;

        switch (respuesta) {

            case 1:
                for (int i = 0; i < comidas.size(); ++i) {
                    std::cout << comidas[i] << std::endl;
                }
            break;

            case 2:
                std::cout << "Escriba la comida para añadir al inicio" << std::endl;
            std::cin >> agregarComida;
            comidas.push_front(agregarComida); //Agrega al inicio de la lista.
            break;

            case 3:
                std::cout << "Escriba la comida para añadir al final" << std::endl;
            std::cin >> agregarComida;
            comidas.push_back(agregarComida); //Agrega al final de la lista
            break;

            case 4:
                std::cout << "La comida" + comidas.front() + "fue eliminada" << std::endl; //Imprime el primer elemento en la lista
                comidas.pop_front(); //Elimina el primer elemento en la lista
            break;

            case 5:
                std::cout << "La comida" + comidas.back() + "fue eliminada" << std::endl; //Imprime el ultimo elemento en la lista
                comidas.pop_back(); //Elimina el ultimo elemento en la lista
            break;

            case 6:
                std::cout <<"La lista fue vaciada" << std::endl;
                comidas.clear(); //Vacia la lista
            break;

            case 7:
                if (comidas.empty()) { //retorna true si la lista esta vacia, si no retorna false
                    std::cout << "La lista esta vacia" << std::endl;

                } else {
                    std::cout << "La lista no esta vacia" << std::endl;
                }
            break;

            case -1:
                std::cout << "Saliendo del programa\n";
                break;

            default:
                std::cout << "Opcion no existe" << std::endl;
            break;
        }

    }
    return 0;
}
