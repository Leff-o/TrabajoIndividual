//
// Created by ASUS on 10/11/2021.
//

#ifndef TRABAJOINDIVIDUAL_MOUSE_H
#define TRABAJOINDIVIDUAL_MOUSE_H
#include <string>
#include <ostream>

class Mouse {

private:

    std::string ID;
    std::string nombre;
    std::string marca;
    double precio;
public:
    friend std::ostream &operator<<(std::ostream &os, const Mouse &mouse);

public:

    Mouse(const std::string &id, const std::string &nombre, const std::string &marca, double precio);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::string &getMarca() const;

    void setMarca(const std::string &marca);

    double getPrecio() const;

    void setPrecio(double precio);

};


#endif //TRABAJOINDIVIDUAL_MOUSE_H
