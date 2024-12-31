#pragma once
#include "MyTypes.hpp"

#include <iostream>
#include <string>

namespace My {


    class Error;
    class StaticError;

    class Error : public virtual MyTypes {

        friend class StaticError;

    protected:
        inline const void Throw(const std::string& msg);

    public:

        virtual const void Exit();
        virtual const void Exit(int exitCode);
        virtual const void Exit(const std::string& msg);

        virtual const bool ExitBool();
        virtual const bool ExitBool(int exitCode);
        virtual const bool ExitBool(const std::string& msg);

        virtual const void ThrowMsg(const std::string& msg);

        virtual const void Catch();

        virtual const void TryCatch(const std::string& msg);
        virtual const void ExitTryCatch(const std::string& msg);
        virtual const void Print(const std::string& msg);


        Error() = default;

    };

    class StaticError : public virtual Error {

        friend class Error;

    public:

        __forceinline const static void Exit() { return Error::Error().Exit(); }

        __forceinline const static void Exit(int exitCode) {
            return Error().Exit(exitCode);
        }

        __forceinline const static void Exit(const std::string& msg) {
            return Error().Exit(msg);
        }

        __forceinline const static void ThrowMsg(const std::string& msg) {
            return Error().ThrowMsg(msg);
        }
        __forceinline const static void Catch() {
            return Error().Catch();
        }
        __forceinline const static void TryCatch(const std::string& msg) {
            return Error().TryCatch(msg);
        }

        __forceinline const static bool ExitBool() { 
            return Error().ExitBool();
        }

        __forceinline const static bool ExitBool(int exitCode) {
            return Error().ExitBool(exitCode);
        }
        __forceinline const static bool ExitBool(const std::string& msg) {
            return Error().ExitBool(msg);
        }

        __forceinline const static void Print(const std::string& msg) {
            return Error().Print(msg);
        }

        StaticError() = default;
    };
}