#include "Move.h"

Move::Move(std::string name) : m_name(name) {}

std::string Move::getName() {
    return m_name;
}
