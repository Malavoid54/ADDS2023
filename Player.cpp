#include "Player.h"

Player::Player(std::string name) : m_name(name) {}

std::string Player::getName() {
    return m_name;
}
