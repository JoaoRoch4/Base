#pragma once
#include "BaseClass.hpp"
#include "MyTypes.hpp"
#include "Colors.hpp"
#include "StaticColors.hpp"
#include "Error.hpp"

class Base;
class MyTypes;
class Colors;
class StaticColors;
class Error;

namespace My {

    class All : public virtual Base, public virtual MyTypes, public virtual Colors, public virtual StaticColors, public virtual StaticError, public virtual Error {
    public:

        All() = default;

        bool operator==(const All& other) const = default;
    };

} // namespace My

