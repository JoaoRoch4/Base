#include "MyTypes.hpp"

#include <clocale>
#include <consoleapi2.h>
#include <WinNls.h>

void My::MyTypes::setUTF8() {

    setlocale(LC_ALL, "");
    SetConsoleOutputCP(CP_UTF8);
}
