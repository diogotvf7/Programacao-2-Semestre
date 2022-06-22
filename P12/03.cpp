#include <iostream>
#include <iomanip>
#include "Piece.h"
#include "Domino.h"

bool Piece::can_be_left_to(const Piece& other) const {return right_ == other.get_left();}
bool Piece::can_be_right_to(const Piece& other) const {return left_ == other.get_right();}
const Piece& Domino::left() const {return pieces_.front();}
const Piece& Domino::right() const{return pieces_.back();}
bool Domino::place_left(const Piece& p) {
    if (!p.can_be_left_to(left())) return false;
    pieces_.push_front(p);
    return true;
}
bool Domino::place_right(const Piece& p) {

    if (!p.can_be_right_to(right())) return false;
    pieces_.push_back(p);
    return true;
}