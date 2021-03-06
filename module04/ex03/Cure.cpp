#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const & cure) : AMateria(cure) {
}

Cure::~Cure() {
}

AMateria*   Cure::clone() const {
    return new Cure(*this);
}

void        Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
    AMateria::use(target);
}