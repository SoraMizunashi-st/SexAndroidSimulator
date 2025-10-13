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
#ifndef TYPE_STRUCT_CHARACTER_CLOTHES_HPP
#define TYPE_STRUCT_CHARACTER_CLOTHES_HPP
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
#include "../Enum/Cloth/TypeEnumClothHeadAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothHairStyle.hpp"
#include "../Enum/Cloth/TypeEnumClothFaceAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothEarring.hpp"
#include "../Enum/Cloth/TypeEnumClothPanty.hpp"
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

constexpr uint8_t CL_NAKED = 0;
constexpr uint8_t CL_NONE  = 255;

struct F_CharacterClothes
{
    uint8_t DUMMY_PARAM;
    // === Head & Face (頭部・顔) ===
    E_CL_HEAD_ACCESSORY HeadAccessory1;     // ヘアバンド、帽子などの主要アクセサリー
    E_CL_HEAD_ACCESSORY HeadAccessory2;     // ヘッドアクセサリの2番目のスロット
    E_CL_HAIR_STYLE HairStyle;          // 髪型（モデル/テクスチャID）
    E_CL_FACE_ACCESSORY FaceAccessory1;     // 眼鏡、マスク、主要な顔の装飾
    E_CL_FACE_ACCESSORY FaceAccessory2;     // フェイスペイント、タトゥーなど

    // === Body Attachments (身体装着物/ピアスなど) ===
    E_CL_EARRING EarringLeft;        // 耳のアクセサリー（ピアス、イヤリング）
    E_CL_EARRING EarringRight;       // 耳のアクセサリー（ピアス、イヤリング）
    uint8_t NipplePiercingLeft; // 乳首の装飾/アクセサリー
    uint8_t NipplePiercingRight;// 乳首の装飾/アクセサリー
    uint8_t NavelPiercing;      // へそ（BellyButton）の装飾/アクセサリー
    uint8_t ClitPiercing;       // 陰核の装飾/アクセサリー (Clitoris)
    uint8_t AnalAccessory;      // アナルの装飾/アクセサリー (Anal)
    uint8_t BodyPaint;

    // === Upper Body Apparel (上半身のアパレル) ===
    uint8_t Outerwear;          // アウター（コート、ジャケット）
    uint8_t Top;                // トップス、シャツ、セーター
    uint8_t Bra;                // 上の肌着、ブラジャー、インナー

    // === Lower Body Apparel (下半身のアパレル) ===
    uint8_t Bottoms;            // ズボン、スカート、主要なボトムス
    E_CL_PANTY Panties;            // 下の肌着、パンツ（Shortsをより一般的な名称に）

    // === Limbs & Extremities (四肢・末端) ===
    uint8_t UpperArmLeft;       // 左上腕（アームバンドなど）
    uint8_t UpperArmRight;      // 右上腕（アームバンドなど）
    uint8_t HandwearLeft;       // 左手（グローブ、ミトンなど）
    uint8_t HandwearRight;      // 右手（グローブ、ミトンなど）
    uint8_t WristAccessoryLeft; // 左手首（腕時計、ブレスレット）
    uint8_t WristAccessoryRight;// 右手首（腕時計、ブレスレット）

    // === Legs & Feet (脚部・足) ===
    uint8_t UpperThighLeft;     // 左太もも（ガーターベルト、レッグリング）
    uint8_t UpperThighRight;    // 右太もも（ガーターベルト、レッグリング）
    uint8_t LegwearLeft;        // 左脚（靴下、ストッキング、タイツ）
    uint8_t LegwearRight;       // 右脚（靴下、ストッキング、タイツ）
    uint8_t FootwearLeft;       // 左足（靴、ブーツ）
    uint8_t FootwearRight;      // 右足（靴、ブーツ）

    // === Non-Limb Accessories (非身体部位アクセサリー) ===
    uint8_t NeckAccessory;      // ネックレス、チョーカー、スカーフ（新規追加）
    uint8_t WaistAccessory;     // ベルト、腰回りのチェーン（新規追加）
    uint8_t FullBodyAccessory;  // 天使の輪、羽など（部位に縛られない大きな装飾）
};


constexpr F_CharacterClothes CL_Preset_Naked = { CL_NAKED };


}
// -------------------------------------------------------------------------------------------------------------------------------------//
// Ending NameSpace { SAS : SexAndroidSimulator }
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
// Include Guarde
// -------------------------------------------------------------------------------------------------------------------------------------//
#endif
// -------------------------------------------------------------------------------------------------------------------------------------//