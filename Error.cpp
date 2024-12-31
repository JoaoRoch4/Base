#include "Error.hpp"

#include "Colors.hpp"
#include "MyTypes.hpp"


#include <__msvc_ostream.hpp>
#include <cassert>
#include <cstdlib>
#include <exception>
#include <ostream>
#include <stdexcept>
#include <iostream>

namespace My {

#define assertm(exp, msg) assert((void(msg), exp))


    const void Error::Throw(const std::string& msg) { throw std::runtime_error(msg); }

    const void Error::Exit() {

        std::cin.get();
        std::exit(EXIT_SUCCESS);
    }

    const void Error::Exit(int exitCode) {

        My::StaticColors::UseColor(ColorEnum::red);
        assertm(exitCode == EXIT_SUCCESS || exitCode == EXIT_FAILURE, "Error : Invalid exit code.");

        if (EXIT_FAILURE) ExitTryCatch("1 EXIT_FAILURE passed.");

        My::StaticColors::ResetColors();
        std::exit(EXIT_SUCCESS);
    }

    const void Error::Exit(const std::string& msg) {

        Throw(msg);

        try {

        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
            std::cin.get();
            std::exit(EXIT_FAILURE);
        }
    }

    const bool Error::ExitBool() {

        std::cin.get();
        std::exit(EXIT_SUCCESS);
        return true;
    }

    const bool Error::ExitBool(int exitCode) {

        assert(!(exitCode == EXIT_SUCCESS || exitCode == EXIT_FAILURE) && "Error : Invalid exit code.");
        std::cin.get();
        std::exit(exitCode);
        return true;
    }

    const bool Error::ExitBool(const std::string& msg) {

        Throw(msg);
        try {
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
            std::cin.get();
            std::exit(EXIT_FAILURE);
        }
        return true;
    }

    const void Error::ThrowMsg(const std::string& msg) { return throw std::runtime_error(msg); }

    const void Error::Catch() {

        try {
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    const void Error::TryCatch(const std::string& msg) {

        My::StaticColors::UseColor(My::ColorEnum::red);

        try {
            throw std::runtime_error(msg);
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        My::StaticColors::ResetColors();

    }

    const void Error::ExitTryCatch(const std::string& msg) {

        My::StaticColors::UseColor(My::ColorEnum::red);

        try {
            throw std::runtime_error(msg);
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
        My::StaticColors::ResetColors();
        std::cin.get();
        std::exit(EXIT_FAILURE);
    }

    const void Error::Print(const std::string& msg) {
        My::StaticColors::UseColor(My::ColorEnum::red);
        std::cout << msg;
        My::StaticColors::ResetColors();
    }

}