//
// Created by ASUS on 10/11/2021.
//

#include "Mouse.h"

Mouse::Mouse(const std::string &id, const std::string &nombre, const std::string &marca, double precio) : ID(id),
                                                                                                          nombre(nombre),
                                                                                                          marca(marca),
                                                                                                          precio(precio) {}

const std::string &Mouse::getId() const {
    return ID;
}

void Mouse::setId(const std::string &id) {
    ID = id;
}

const std::string &Mouse::getNombre() const {
    return nombre;
}

void Mouse::setNombre(const std::string &nombre) {
    Mouse::nombre = nombre;
}

const std::string &Mouse::getMarca() const {
    return marca;
}

void Mouse::setMarca(const std::string &marca) {
    Mouse::marca = marca;
}

double Mouse::getPrecio() const {
    return precio;
}

void Mouse::setPrecio(double precio) {
    Mouse::precio = precio;
}

std::ostream &operator<<(std::ostream &os, const Mouse &mouse) {
    os << "ID: " << mouse.ID << " nombre: " << mouse.nombre << " marca: " << mouse.marca << " precio: " << mouse.precio;
    return os;
}
