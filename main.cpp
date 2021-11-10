#include <iostream>

#include "Mouse.h"
#include "LinkedlIST.cpp"
using namespace std;
bool seguir = true;
int main() {
    int opcion;
    LinkedList <Mouse> *linked = new LinkedList<Mouse>();
    linked->addNodeLast(Mouse("8374", "AX01", "Asus", 1200));
    linked->addNodeLast(Mouse("234", "OPM3", "Razer", 1300));
    linked->addNodeLast(Mouse("123", "RH546", "Logitech", 1400));
    linked->addNodeLast(Mouse("000", "JYRTH", "Genius", 800));

    do{ cout<<"\n|------------------------------|";
        cout << "\n| 1. Crear Mouse               | ";
        cout << "\n| 2. Buscar Mouse            | ";
        cout << "\n| 3. Mostrar Mouse            | ";
        cout<<  "\n| 4. Mostrar Mouse get object | ";
        cout << "\n| 5. Salir                     | ";
        cout << "\n|------------------------------| ";
        cout << "\n\n Escoja una Opcion: \n";
        cin >> opcion;
        switch (opcion) {
            case 1: {
                string ID;
                string nombre;
                string marca;
                double precio;
                int year;
                cout << "\n\n CREAR UN NUEVO MOUSE \n\n";
                cout << "\n\n INSERTE ID\n";
                cin >> ID;
                cout << "\n\n INSERTE NOMBRE\n";
                cin >> nombre;
                fflush(stdin);
                cout << "\n\n INSERTE MARCA\n";
                cin >> marca;
                cout << "\n\n INSERTE PRECIO\n";
                cin >> precio;

                Mouse *mouse = new Mouse(ID, nombre, marca, precio);

                int optInt;
                cout << "Ingrese el número para agregar el Mouse en la posición deseada\n";
                cout << "1. Al principio\n2. Al final\n3.Antes de\n4.Después de\n\n";
                cin >> optInt;
                switch (optInt) {
                    case 1:
                        linked->addNodeFirst(*mouse);
                        break;
                    case 2:
                        linked->addNodeLast(*mouse);
                        break;

                    case 3: {
                        string information;
                        cout << "Ingrese el ID del mouse\n";
                        cin >> information;

                        Node<Mouse> *findMouse = linked->findNode(information);
                        linked->addNodeBeforeTo(findMouse, *mouse);
                    }
                        break;

                    case 4: {
                        string information;
                        cout << "Ingrese el ISBN del libro referencia\n";
                        cin >> information;

                        Node<Mouse> *findMouse = linked->findNode(information);
                        linked->addNodeAfterTo(findMouse, *mouse);
                    }
                        break;
                }

            }
                break;
            case 2: {
                string ID;
                cout << "Ingrese el ID del mouse\n";
                cin >> ID;
                Mouse *findMouse = linked->findInfo(ID);

                if (findMouse != NULL) {
                    cout << "encontrado\n";
                    cout << *findMouse << endl;
                } else {
                    cout << "Nel" << endl;
                }
            }
                break;

            case 3:{
                for (Mouse mouse : linked->getLinkedList( ) ){
                    cout<<mouse<<endl;
                }
            }
                break;

            case 4:

                int index;
                cout<<"Ingresa la posición del libro\n";
                cin>> index;
                cout<<*linked->getObject(index);
                break;

            case 5: {
                cout<<"BYE BYE"<<endl;
                seguir = false;
            }
                break;
        }
    }while(seguir);
    return 0;

}