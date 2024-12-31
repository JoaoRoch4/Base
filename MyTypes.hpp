#pragma once

#define CLANG_FORMAT_OFF() /* // clang-format off */
#define CLANG_FORMAT_ON() /* // clang-format on */

// clang-format off


#define __MY_CUSTOM_DATE__    "// Date " __DATE__ " at " __TIME__ "(GMT - 4)"
#define __MY_CUSTOM_AUTHOR__  "// Author: João Rocha."
#define __MY_CUSTOM_PLACE__   "// Place : Pimenta Bueno, RO Brasil."
#define __MY_CUSTOM_VERSION__ "// Version : 0.0.1"
#define __MY_CUSTOM_PATH__    __FILE__ 

#define __MY_CUSTOM_HEADER__ "" \
 __MY_CUSTOM_DATE__ \
__MY_CUSTOM_AUTHOR__ \
__MY_CUSTOM_PLACE__ \
"// Version : 0.0.1"


// clang-format on

#include "BaseClass.hpp"

namespace My {

    class MyTypes : public virtual My::Base {

    public:
        MyTypes() = default;
        ~MyTypes() = default;
        virtual void print() override {};
        virtual void setUTF8() override;

        bool operator==(const MyTypes& other) const { return false;}
    };
}

