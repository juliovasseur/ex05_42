#include "ATarget.hpp"

ATarget::ATarget()
{
    this->type = "default";
}

ATarget &ATarget::operator=(const ATarget &src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;

}

ATarget::ATarget(const ATarget &src)
{
    *this = src;
}

ATarget::ATarget(std::string const &type)
{
    this->type = type;
}

ATarget::~ATarget() {};

std::string const &ATarget::getType() const
{
    return (this->type);
}

void ATarget::getHitBySpell(const ASpell &src) const
{
    std::cout << this->type << " has been " << src.getEffects() << "!" << std::endl;
}

