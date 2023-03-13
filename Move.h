#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
public:
    Move(const std::string& name) : m_name(name) {}
    virtual ~Move() {}
    virtual bool operator>(const Move& other) const = 0;
    virtual std::string getName() const { return m_name; }
private:
    std::string m_name;
};

#endif // MOVE_H
