// -------------------------------------------------------------------------------------------------------------------------------------//
//   _______  _______  _______  ___      ___      _______    ___      _______  _______                                                  //
//  |       ||       ||       ||   |    |   |    |   _   |  |   |    |   _   ||  _    |      SAS For C++                                //
//  |  _____||_     _||    ___||   |    |   |    |  |_|  |  |   |    |  |_|  || |_|   |      Version  : 1.0.0                           //
//  | |_____   |   |  |   |___ |   |    |   |    |       |  |   |    |       ||       |      Author   : usagi0419                       //
//  |_____  |  |   |  |    ___||   |___ |   |___ |       |  |   |___ |       ||  _    | ___                                             //
//   _____| |  |   |  |   |___ |       ||       ||   _   |  |       ||   _   || |_|   ||   | SPDX-FileCopyrightText : 2025~ StellaLab.  //
//  |_______|  |___|  |_______||_______||_______||__| |__|  |_______||__| |__||_______||___| SPDX-License-Identifier: MIT               //
// -------------------------------------------------------------------------------------------------------------------------------------//
//  I am from a country where English is not my native language
//  The following explanation may contain inaccuracies. Please be aware of this.
// -------------------------------------------------------------------------------------------------------------------------------------//
// ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆ Individual  Discription ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆ //
// -------------------------------------------------------------------------------------------------------------------------------------//
//
// -------------------------------------------------------------------------------------------------------------------------------------//
// ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆ Common  Description ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆ //
// -------------------------------------------------------------------------------------------------------------------------------------//
// This project is Stella Emotional Network Action Models: SENaM.
// SENaM is a small-scale network model that predicts and outputs changes in emotions, parameters, and actions from input strings.
// Please refer to the reference for basic operation.
// URL: https://xxxxx/SENaM/Reference.html
// For individual inquiries, please contact Mizunashi Sora. (StellaLab.)
// Email : shuiwukong6@gmail.com
// -------------------------------------------------------------------------------------------------------------------------------------//
// SENaM Project Coding Style and Naming Conventions
// This document outlines the standardized coding style and naming conventions for the SENaM C++ project.
// Consistent adherence to these rules ensures high readability, consistency, and maintainability across the codebase.
// -------------------------------------------------------------------------------------------------------------------------------------//
// I. Naming Conventions
// ・Classes, Structs, Enums, and Type Definitions: Use PascalCase (all words start with an uppercase letter).
// ・Member Variables: Prefix with a lowercase m (for member) and use PascalCase for the rest of the name.
// ・Static Variables: Prefix with a lowercase s (for static) and use PascalCase.
// ・Constant Variables: Prefix with a lowercase c (for Constant) and use PascalCase.
// ・Function/Method Arguments: Prefix with a lowercase p and use PascalCase for the rest of the name.
// ・Temporary/Local Variables: Prefix with a lowercase t (for temporary) and use PascalCase.
// ・Public Methods: Use PascalCase with no special prefix.
// -------------------------------------------------------------------------------------------------------------------------------------//
// II. Code Structure and Style
// Namespace Usage: All standard library entities must be referenced using their fully qualified names.
// Rule: Always use the std:: prefix.
// Class Definition Order: 
// The visibility sections within a class or struct must be defined in the following order to prioritize the user-facing interface:
// [1]public
// [2]private
// [3]protected (if applicable, typically placed last)
// General Principle: Prefer enum class for defining sets of named constants over macro definitions (#define) to ensure strong type safety.
// -------------------------------------------------------------------------------------------------------------------------------------//
// ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆ License summary ◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆ //
// -------------------------------------------------------------------------------------------------------------------------------------//
// SPDX-FileCopyrightText : 2025~ StellaLab.
// SPDX-License-Identifier: MIT
// -------------------------------------------------------------------------------------------------------------------------------------//
// Please read below for specific information about spdx licenses.
// https://spdx.dev/learn/handling-license-info/
// -------------------------------------------------------------------------------------------------------------------------------------//
// Include Guarde
// -------------------------------------------------------------------------------------------------------------------------------------//
#ifndef TYPE_STRUCT_COLOR_HPP
#define TYPE_STRUCT_COLOR_HPP
// -------------------------------------------------------------------------------------------------------------------------------------//
#ifndef __SAS_BUILD__
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
#endif
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
// Types Object Header
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
// Utility Object  Header
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//


// -------------------------------------------------------------------------------------------------------------------------------------//
// Custom Object Header
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//


// -------------------------------------------------------------------------------------------------------------------------------------//
// External Library Header
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
// Standard Library Header
// -------------------------------------------------------------------------------------------------------------------------------------//
#include <string>  // use <string>

#include <cstdint> // use <uint8_t>
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
// Starting NameSpace { SAS : SexAndroidSimulator }
// -------------------------------------------------------------------------------------------------------------------------------------//
namespace SAS
{

struct F_ColorRGB
{
    uint8_t R;
    uint8_t G;
    uint8_t B;

};

struct F_ColorRGBA
{
    uint8_t R;
    uint8_t G;
    uint8_t B;
    uint8_t A;

};

struct F_ColorCMYK
{
    uint8_t C;
    uint8_t M;
    uint8_t Y;
    uint8_t K;

};

// -------------------------------------------------------------------------------------------------------------------------------------//
// 140 Web Color Constants (HTML Named Colors)
// -------------------------------------------------------------------------------------------------------------------------------------//

// A:
constexpr F_ColorRGB AliceBlue       = { 0xF0, 0xF8, 0xFF }; // #f0f8ff
constexpr F_ColorRGB AntiqueWhite    = { 0xFA, 0xEB, 0xD7 }; // #faebd7
constexpr F_ColorRGB Aqua            = { 0x00, 0xFF, 0xFF }; // #00ffff (Cyanと同一)
constexpr F_ColorRGB Aquamarine      = { 0x7F, 0xFF, 0xD4 }; // #7fffd4
constexpr F_ColorRGB Azure           = { 0xF0, 0xFF, 0xFF }; // #f0ffff

// B:
constexpr F_ColorRGB Beige           = { 0xF5, 0xF5, 0xDC }; // #f5f5dc
constexpr F_ColorRGB Bisque          = { 0xFF, 0xE4, 0xC4 }; // #ffe4c4
constexpr F_ColorRGB Black           = { 0x00, 0x00, 0x00 }; // #000000
constexpr F_ColorRGB BlanchedAlmond  = { 0xFF, 0xEB, 0xCD }; // #ffebcd
constexpr F_ColorRGB Blue            = { 0x00, 0x00, 0xFF }; // #0000ff
constexpr F_ColorRGB BlueViolet      = { 0x8A, 0x2B, 0xE2 }; // #8a2be2
constexpr F_ColorRGB Brown           = { 0xA5, 0x2A, 0x2A }; // #a52a2a
constexpr F_ColorRGB BurlyWood       = { 0xDE, 0xB8, 0x87 }; // #deb887

// C:
constexpr F_ColorRGB CadetBlue       = { 0x5F, 0x9E, 0xA0 }; // #5f9ea0
constexpr F_ColorRGB Chartreuse      = { 0x7F, 0xFF, 0x00 }; // #7fff00
constexpr F_ColorRGB Chocolate       = { 0xD2, 0x69, 0x1E }; // #d2691e
constexpr F_ColorRGB Coral           = { 0xFF, 0x7F, 0x50 }; // #ff7f50
constexpr F_ColorRGB CornflowerBlue  = { 0x64, 0x95, 0xED }; // #6495ed
constexpr F_ColorRGB Cornsilk        = { 0xFF, 0xF8, 0xDC }; // #fff8dc
constexpr F_ColorRGB Crimson         = { 0xDC, 0x14, 0x3C }; // #dc143c
constexpr F_ColorRGB Cyan            = { 0x00, 0xFF, 0xFF }; // #00ffff (Aquaと同一)

// D:
constexpr F_ColorRGB DarkBlue        = { 0x00, 0x00, 0x8B }; // #00008b
constexpr F_ColorRGB DarkCyan        = { 0x00, 0x8B, 0x8B }; // #008b8b
constexpr F_ColorRGB DarkGoldenrod   = { 0xB8, 0x86, 0x0B }; // #b8860b
constexpr F_ColorRGB DarkGray        = { 0xA9, 0xA9, 0xA9 }; // #a9a9a9
constexpr F_ColorRGB DarkGreen       = { 0x00, 0x64, 0x00 }; // #006400
constexpr F_ColorRGB DarkKhaki       = { 0xBD, 0xB7, 0x6B }; // #bdb76b
constexpr F_ColorRGB DarkMagenta     = { 0x8B, 0x00, 0x8B }; // #8b008b
constexpr F_ColorRGB DarkOliveGreen  = { 0x55, 0x6B, 0x2F }; // #556b2f
constexpr F_ColorRGB DarkOrange      = { 0xFF, 0x8C, 0x00 }; // #ff8c00
constexpr F_ColorRGB DarkOrchid      = { 0x99, 0x32, 0xCC }; // #9932cc
constexpr F_ColorRGB DarkRed         = { 0x8B, 0x00, 0x00 }; // #8b0000
constexpr F_ColorRGB DarkSalmon      = { 0xE9, 0x96, 0x7A }; // #e9967a
constexpr F_ColorRGB DarkSeaGreen    = { 0x8F, 0xBC, 0x8F }; // #8fbc8f
constexpr F_ColorRGB DarkSlateBlue   = { 0x48, 0x3D, 0x8B }; // #483d8b
constexpr F_ColorRGB DarkSlateGray   = { 0x2F, 0x4F, 0x4F }; // #2f4f4f
constexpr F_ColorRGB DarkTurquoise   = { 0x00, 0xCE, 0xD1 }; // #00ced1
constexpr F_ColorRGB DarkViolet      = { 0x94, 0x00, 0xD3 }; // #9400d3
constexpr F_ColorRGB DeepPink        = { 0xFF, 0x14, 0x93 }; // #ff1493
constexpr F_ColorRGB DeepSkyBlue     = { 0x00, 0xBF, 0xFF }; // #00bfff
constexpr F_ColorRGB DimGray         = { 0x69, 0x69, 0x69 }; // #696969
constexpr F_ColorRGB DodgerBlue      = { 0x1E, 0x90, 0xFF }; // #1e90ff

// F:
constexpr F_ColorRGB FireBrick       = { 0xB2, 0x22, 0x22 }; // #b22222
constexpr F_ColorRGB FloralWhite     = { 0xFF, 0xFA, 0xF0 }; // #fffaf0
constexpr F_ColorRGB ForestGreen     = { 0x22, 0x8B, 0x22 }; // #228b22
constexpr F_ColorRGB Fuchsia         = { 0xFF, 0x00, 0xFF }; // #ff00ff (Magentaと同一)

// G:
constexpr F_ColorRGB Gainsboro       = { 0xDC, 0xDC, 0xDC }; // #dcdcdc
constexpr F_ColorRGB GhostWhite      = { 0xF8, 0xF8, 0xFF }; // #f8f8ff
constexpr F_ColorRGB Gold            = { 0xFF, 0xD7, 0x00 }; // #ffd700
constexpr F_ColorRGB Goldenrod       = { 0xDA, 0xA5, 0x20 }; // #daa520
constexpr F_ColorRGB Gray            = { 0x80, 0x80, 0x80 }; // #808080
constexpr F_ColorRGB Green           = { 0x00, 0x80, 0x00 }; // #008000
constexpr F_ColorRGB GreenYellow     = { 0xAD, 0xFF, 0x2F }; // #adff2f

// H:
constexpr F_ColorRGB HoneyDew        = { 0xF0, 0xFF, 0xF0 }; // #f0fff0
constexpr F_ColorRGB HotPink         = { 0xFF, 0x69, 0xB4 }; // #ff69b4

// I:
constexpr F_ColorRGB IndianRed       = { 0xCD, 0x5C, 0x5C }; // #cd5c5c
constexpr F_ColorRGB Indigo          = { 0x4B, 0x00, 0x82 }; // #4b0082
constexpr F_ColorRGB Ivory           = { 0xFF, 0xFF, 0xF0 }; // #fffff0

// K:
constexpr F_ColorRGB Khaki           = { 0xF0, 0xE6, 0x8C }; // #f0e68c

// L:
constexpr F_ColorRGB Lavender        = { 0xE6, 0xE6, 0xFA }; // #e6e6fa
constexpr F_ColorRGB LavenderBlush   = { 0xFF, 0xF0, 0xF5 }; // #fff0f5
constexpr F_ColorRGB LawnGreen       = { 0x7C, 0xFC, 0x00 }; // #7cfc00
constexpr F_ColorRGB LemonChiffon    = { 0xFF, 0xFA, 0xCD }; // #fffacd
constexpr F_ColorRGB LightBlue       = { 0xAD, 0xD8, 0xE6 }; // #add8e6
constexpr F_ColorRGB LightCoral      = { 0xF0, 0x80, 0x80 }; // #f08080
constexpr F_ColorRGB LightCyan       = { 0xE0, 0xFF, 0xFF }; // #e0ffff
constexpr F_ColorRGB LightGoldenrodYellow = { 0xFA, 0xFA, 0xD2 }; // #fafad2
constexpr F_ColorRGB LightGray       = { 0xD3, 0xD3, 0xD3 }; // #d3d3d3
constexpr F_ColorRGB LightGreen      = { 0x90, 0xEE, 0x90 }; // #90ee90
constexpr F_ColorRGB LightPink       = { 0xFF, 0xB6, 0xC1 }; // #ffb6c1
constexpr F_ColorRGB LightSalmon     = { 0xFF, 0xA0, 0x7A }; // #ffa07a
constexpr F_ColorRGB LightSeaGreen   = { 0x20, 0xB2, 0xAA }; // #20b2aa
constexpr F_ColorRGB LightSkyBlue    = { 0x87, 0xCE, 0xFA }; // #87cefa
constexpr F_ColorRGB LightSlateGray  = { 0x77, 0x88, 0x99 }; // #778899
constexpr F_ColorRGB LightSteelBlue  = { 0xB0, 0xC4, 0xDE }; // #b0c4de
constexpr F_ColorRGB LightYellow     = { 0xFF, 0xFF, 0xE0 }; // #ffffe0
constexpr F_ColorRGB Lime            = { 0x00, 0xFF, 0x00 }; // #00ff00
constexpr F_ColorRGB LimeGreen       = { 0x32, 0xCD, 0x32 }; // #32cd32
constexpr F_ColorRGB Linen           = { 0xFA, 0xF0, 0xE6 }; // #faf0e6

// M:
constexpr F_ColorRGB Magenta         = { 0xFF, 0x00, 0xFF }; // #ff00ff (Fuchsiaと同一)
constexpr F_ColorRGB Maroon          = { 0x80, 0x00, 0x00 }; // #800000
constexpr F_ColorRGB MediumAquamarine= { 0x66, 0xCD, 0xAA }; // #66cdaa
constexpr F_ColorRGB MediumBlue      = { 0x00, 0x00, 0xCD }; // #0000cd
constexpr F_ColorRGB MediumOrchid    = { 0xBA, 0x55, 0xD3 }; // #ba55d3
constexpr F_ColorRGB MediumPurple    = { 0x93, 0x70, 0xDB }; // #9370db
constexpr F_ColorRGB MediumSeaGreen  = { 0x3C, 0xB3, 0x71 }; // #3cb371
constexpr F_ColorRGB MediumSlateBlue = { 0x7B, 0x68, 0xEE }; // #7b68ee
constexpr F_ColorRGB MediumSpringGreen = { 0x00, 0xFA, 0x9A }; // #00fa9a
constexpr F_ColorRGB MediumTurquoise = { 0x48, 0xD1, 0xCC }; // #48d1cc
constexpr F_ColorRGB MediumVioletRed = { 0xC7, 0x15, 0x85 }; // #c71585
constexpr F_ColorRGB MidnightBlue    = { 0x19, 0x19, 0x70 }; // #191970
constexpr F_ColorRGB MintCream       = { 0xF5, 0xFF, 0xFA }; // #f5fffa
constexpr F_ColorRGB MistyRose       = { 0xFF, 0xE4, 0xE1 }; // #ffe4e1
constexpr F_ColorRGB Moccasin        = { 0xFF, 0xE4, 0xB5 }; // #ffe4b5

// N:
constexpr F_ColorRGB NavajoWhite     = { 0xFF, 0xDE, 0xAD }; // #ffdead
constexpr F_ColorRGB Navy            = { 0x00, 0x00, 0x80 }; // #000080

// O:
constexpr F_ColorRGB OldLace         = { 0xFD, 0xF5, 0xE6 }; // #fdf5e6
constexpr F_ColorRGB Olive           = { 0x80, 0x80, 0x00 }; // #808000
constexpr F_ColorRGB OliveDrab       = { 0x6B, 0x8E, 0x23 }; // #6b8e23
constexpr F_ColorRGB Orange          = { 0xFF, 0xA5, 0x00 }; // #ffa500
constexpr F_ColorRGB OrangeRed       = { 0xFF, 0x45, 0x00 }; // #ff4500
constexpr F_ColorRGB Orchid          = { 0xDA, 0x70, 0xD6 }; // #da70d6

// P:
constexpr F_ColorRGB PaleGoldenrod   = { 0xEE, 0xE8, 0xAA }; // #eee8aa
constexpr F_ColorRGB PaleGreen       = { 0x98, 0xFB, 0x98 }; // #98fb98
constexpr F_ColorRGB PaleTurquoise   = { 0xAF, 0xEE, 0xEE }; // #afeeee
constexpr F_ColorRGB PaleVioletRed   = { 0xDB, 0x70, 0x93 }; // #db7093
constexpr F_ColorRGB PapayaWhip      = { 0xFF, 0xEF, 0xD5 }; // #ffefd5
constexpr F_ColorRGB PeachPuff       = { 0xFF, 0xDA, 0xB9 }; // #ffdab9
constexpr F_ColorRGB Peru            = { 0xCD, 0x85, 0x3F }; // #cd853f
constexpr F_ColorRGB Pink            = { 0xFF, 0xC0, 0xCB }; // #ffc0cb
constexpr F_ColorRGB Plum            = { 0xDD, 0xA0, 0xDD }; // #dda0dd
constexpr F_ColorRGB PowderBlue      = { 0xB0, 0xE0, 0xE6 }; // #b0e0e6
constexpr F_ColorRGB Purple          = { 0x80, 0x00, 0x80 }; // #800080

// R:
constexpr F_ColorRGB Red             = { 0xFF, 0x00, 0x00 }; // #ff0000
constexpr F_ColorRGB RosyBrown       = { 0xBC, 0x8F, 0x8F }; // #bc8f8f
constexpr F_ColorRGB RoyalBlue       = { 0x41, 0x69, 0xE1 }; // #4169e1

// S:
constexpr F_ColorRGB SaddleBrown     = { 0x8B, 0x45, 0x13 }; // #8b4513
constexpr F_ColorRGB Salmon          = { 0xFA, 0x80, 0x72 }; // #fa8072
constexpr F_ColorRGB SandyBrown      = { 0xF4, 0xA4, 0x60 }; // #f4a460
constexpr F_ColorRGB SeaGreen        = { 0x2E, 0x8B, 0x57 }; // #2e8b57
constexpr F_ColorRGB SeaShell        = { 0xFF, 0xF5, 0xEE }; // #fff5ee
constexpr F_ColorRGB Sienna          = { 0xA0, 0x52, 0x2D }; // #a0522d
constexpr F_ColorRGB Silver          = { 0xC0, 0xC0, 0xC0 }; // #c0c0c0
constexpr F_ColorRGB SkyBlue         = { 0x87, 0xCE, 0xEB }; // #87ceeb
constexpr F_ColorRGB SlateBlue       = { 0x6A, 0x5A, 0xCD }; // #6a5acd
constexpr F_ColorRGB SlateGray       = { 0x70, 0x80, 0x90 }; // #708090
constexpr F_ColorRGB Snow            = { 0xFF, 0xFA, 0xFA }; // #fffafa
constexpr F_ColorRGB SpringGreen     = { 0x00, 0xFF, 0x7F }; // #00ff7f
constexpr F_ColorRGB SteelBlue       = { 0x46, 0x82, 0xB4 }; // #4682b4

// T:
constexpr F_ColorRGB Tan             = { 0xD2, 0xB4, 0x8C }; // #d2b48c
constexpr F_ColorRGB Teal            = { 0x00, 0x80, 0x80 }; // #008080
constexpr F_ColorRGB Thistle         = { 0xD8, 0xBF, 0xD8 }; // #d8bfd8
constexpr F_ColorRGB Tomato          = { 0xFF, 0x63, 0x47 }; // #ff6347
constexpr F_ColorRGB Turquoise       = { 0x40, 0xE0, 0xD0 }; // #40e0d0

// V:
constexpr F_ColorRGB Violet          = { 0xEE, 0x82, 0xEE }; // #ee82ee

// W:
constexpr F_ColorRGB Wheat           = { 0xF5, 0xDE, 0xB3 }; // #f5deb3
constexpr F_ColorRGB White           = { 0xFF, 0xFF, 0xFF }; // #ffffff
constexpr F_ColorRGB WhiteSmoke      = { 0xF5, 0xF5, 0xF5 }; // #f5f5f5

// Y:
constexpr F_ColorRGB Yellow          = { 0xFF, 0xFF, 0x00 }; // #ffff00
constexpr F_ColorRGB YellowGreen     = { 0x9A, 0xCD, 0x32 }; // #9acd32


}
// -------------------------------------------------------------------------------------------------------------------------------------//
// Endting NameSpace { SAS : SexAndroidSimulator }
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
// Include Guarde
// -------------------------------------------------------------------------------------------------------------------------------------//
#endif
// -------------------------------------------------------------------------------------------------------------------------------------//