#include "Colors.hpp"
#include "StaticColors.hpp"

// clang-format off


// clang-format on

#include <iostream>

int main() {


    My::Colors colors;
    My::Colors colorsArgsEnum(My::ColorEnum::blue, My::BackgroundColorEnum::on_bright_blue);
    My::Colors colorsArgsStr("red", "on_yellow");
    My::Colors colorsArgsEnumWrong((My::ColorEnum)18, (My::BackgroundColorEnum)24);
    My::Colors colorsArgsStrWrong("piss", "zsfgf");
    My::Colors Empty("", "");
    My::Colors EmptyColorReturn("", "on_yellow");
    My::Colors EmptyBackgroundReturn("red", "");

    My::Colors *colorsPtr  = My::StaticColors::GetColorsPtr();
    My::Colors *colorsPtr1 = colorsPtr1->ColorsPtr();

    bool       bTest_bCheckBackgroundExists = colors.bCheckBackgroundExists("on_bright_white");
    bool       bTest_bCheckExists = colors.bCheckColorExists("bright_white");
    bool       bTest_bCheckBackgroundDoNotExists = colors.bCheckBackgroundExists("on_bright_white");
    bool       bTest_bCheckColorNotExists = colors.bCheckColorExists("bright_white");
    bool bTest_bGetLocale = colors.bGetLocale();
    colors.ColorsPtr();
    colors.constColorsPtr();
    colors.EnumGetBackgroundColor();
    return 0;
}