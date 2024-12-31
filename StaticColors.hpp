#pragma once

#include "Colors.hpp"
     
namespace My {

class StaticColors : private virtual Colors {

    friend class Colors;

    ColorEnum           color;
    BackgroundColorEnum backgroundColor;
    bool                isLocalized;
    std::string         ColorReturnStr;
    std::string         BackgroundReturnStr;
    bool                InitializerCalled;

public:
    // Default constructor
    StaticColors() noexcept;
    // copy constructor
    StaticColors(const StaticColors &c) noexcept;

    // copy constructor with unique_ptr
    StaticColors(const std::unique_ptr<Colors> &ptr) noexcept;

    // copy constructor with shared_ptr
    StaticColors(const std::shared_ptr<Colors> &ptr) noexcept;

    StaticColors(const ColorEnum &color, const BackgroundColorEnum &backgroundColor,
      bool isLocalized, const std::string &ColorReturnStr, const std::string &BackgroundReturnStr,
      bool InitializerCalled);

    __forceinline const static void SetClassColor(const ColorEnum &color) noexcept {
        return Colors().SetClassColor(color);
    }

    __forceinline const static void SetClassColor(const std::string &color) {
        return Colors().SetClassColor(color);
    }

    __forceinline const static void SetClassBackgroundColor(
      const BackgroundColorEnum &BackgroundColor) noexcept {
        return Colors().SetClassBackgroundColor(BackgroundColor);
    }

    __forceinline const static void SetClassBackgroundColor(const std::string &BackgroundColor) {
        return Colors().SetClassBackgroundColor(BackgroundColor);
    }

    __forceinline const static void SetLocale(const bool &locale) noexcept {
        return Colors().SetLocale(locale);
    }

    __forceinline const static std::string &EnumToStr(const ColorEnum &color) {
        return Colors().strEnumToStream(color);
    }

    __forceinline const static void ResetColors() { return Colors().ResetColor(); }

    __forceinline const static void ResetBackgroundColor() noexcept {
        return Colors().ResetBackgroundColor();
    }

    __forceinline const static std::ostream &Print(
      const std::string &msg, const ColorEnum &color) {
        return Colors().Print(msg, color);
    }
    __forceinline const static Colors GetColors() noexcept { return Colors().GetColors(); }

    __forceinline const static Colors *ColorsPtr() noexcept { return Colors().ColorsPtr(); }
    
    __forceinline const static Colors GetColors(
      ColorEnum &color, const BackgroundColorEnum &BackgroundColor) noexcept {
        return Colors().GetColors(color, BackgroundColor);
    }

    __forceinline const static Colors* GetColorsPtr(
      ColorEnum &color, const BackgroundColorEnum &BackgroundColor) noexcept {
        return Colors().GetColorsPtr(color, BackgroundColor);
    }

    __forceinline const static Colors GetColors(const Colors &c) noexcept {
        // TODO: Implement this function
    }

    __forceinline const static Colors* GetColorsPtr(const Colors &c) noexcept {
        // TODO: Implement this function
    }

    __forceinline const static Colors GetColors(const Colors *c) noexcept {
        // TODO: Implement this function
    }

    __forceinline const static Colors GetColorsPtr(const Colors *c) noexcept {
        Colors().GetColorsPtr(c);
    }

    __forceinline const static Colors* GetColorsPtr(const Colors &c) noexcept {
        Colors().GetColorsPtr(c);
    }
                // TODO: Implement this function
    __forceinline const static Colors GetColors(std::unique_ptr<Colors> &ptr) {}

            // TODO: Implement this function
    __forceinline const static Colors* GetColorsPtr(std::unique_ptr<Colors> &ptr) {}

    __forceinline const static Colors GetColors(std::shared_ptr<Colors> &ptr) {}

    // TODO: Implement this function
    __forceinline const static Colors *GetColorsPtr(std::shared_ptr<Colors> &ptr) {}

                // TODO: Implement this function
    __forceinline const static Colors GetColors(std::shared_ptr<Colors> &ptr) {}

                // TODO: Implement this function
    __forceinline const static Colors *GetColorsPtr(std::unique_ptr<Colors> &ptr) {}

    __forceinline const static Colors GetColors(
      const std::string &ColorReturn, const std::string &BackgroundReturn) noexcept {
        return Colors().GetColors(ColorReturn, BackgroundReturn);
    }

    __forceinline const static Colors* GetColorsPtr(
      const std::string &ColorReturn, const std::string &BackgroundReturn) noexcept {
        return Colors().GetColorsPtr(ColorReturn, BackgroundReturn);
    }

    __forceinline const static std::string &GetColorStr(const Colors &colors) {
        return Colors().StrGetColor(colors);
    }

    __forceinline const static std::string &GetColorStr() noexcept {
        return Colors().StrGetColor();
    }
    __forceinline const static std::string &GetBackgroundColorStr(const Colors &c) {
        return Colors().StrGetBackgroundColor(c);
    }
    __forceinline const static std::string &GetBackgroundColorStr() noexcept {
        return Colors().StrGetBackgroundColor();
    };

    __forceinline const static std::string &UseColor(const ColorEnum &color) {
        return Colors().UseColor(color);
    }

    __forceinline const static std::string &UseColor(const BackgroundColorEnum &BackgroundColor) {
        return Colors().UseColor(BackgroundColor);
    }

    __forceinline const static std::string &UseBackgroundColor(
      const BackgroundColorEnum &BackgroundColor) {
        return Colors().UseBackgroundColor(BackgroundColor);
    }

    virtual ~StaticColors();

    // bool          operator==(const StaticColors& other) const = default;
    StaticColors &operator=(const StaticColors &other);
    StaticColors &operator=(const Colors &other);

    

    bool operator==(const StaticColors &other) const = default;
};
} // namespace My