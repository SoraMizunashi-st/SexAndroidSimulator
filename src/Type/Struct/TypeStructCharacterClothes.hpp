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
#include "../Enum/Cloth/TypeEnumClothNippleAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothNavelAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothClitorisAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothAnalAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothBodyPaint.hpp"
#include "../Enum/Cloth/TypeEnumClothOuterwear.hpp"
#include "../Enum/Cloth/TypeEnumClothTops.hpp"
#include "../Enum/Cloth/TypeEnumClothBra.hpp"
#include "../Enum/Cloth/TypeEnumClothBottoms.hpp"
#include "../Enum/Cloth/TypeEnumClothPanty.hpp"
#include "../Enum/Cloth/TypeEnumClothUpperArm.hpp"
#include "../Enum/Cloth/TypeEnumClothHandCuffs.hpp"
#include "../Enum/Cloth/TypeEnumClothWristAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothUpperThigh.hpp"
#include "../Enum/Cloth/TypeEnumClothLegwear.hpp"
#include "../Enum/Cloth/TypeEnumClothFootwear.hpp"
#include "../Enum/Cloth/TypeEnumClothNeckAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothWaistAccessory.hpp"
#include "../Enum/Cloth/TypeEnumClothOtherAccessory.hpp"
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
    uint8_t DUMMY_PARAM; // To Initialize Dummy
    // === Head & Face (頭部・顔) ===
    E_CL_HEAD_ACCESSORY HeadAccessory1;     // ヘアバンド、帽子などの主要アクセサリー
    E_CL_HEAD_ACCESSORY HeadAccessory2;     // ヘッドアクセサリの2番目のスロット
    E_CL_HAIR_STYLE HairStyle;          // 髪型（モデル/テクスチャID）
    E_CL_FACE_ACCESSORY FaceAccessory1;     // 眼鏡、マスク、主要な顔の装飾
    E_CL_FACE_ACCESSORY FaceAccessory2;     // フェイスペイント、タトゥーなど

    // === Body Attachments (身体装着物/ピアスなど) ===
    E_CL_EARRING EarringLeft;        // 耳のアクセサリー（ピアス、イヤリング）
    E_CL_EARRING EarringRight;       // 耳のアクセサリー（ピアス、イヤリング）
    E_CL_NIPPLE_ACCESSORY NippleAccessoryLeft; // 乳首の装飾/アクセサリー
    E_CL_NIPPLE_ACCESSORY NippleAccessoryRight;// 乳首の装飾/アクセサリー
    E_CL_NAVEL_ACCESSORY NavelAccessory;      // へそ（BellyButton）の装飾/アクセサリー
    E_CL_CLITORIS_ACCESSORY ClitorisAccessory;       // 陰核の装飾/アクセサリー (Clitoris)
    E_CL_ANAL_ACCESSORY AnalAccessory;      // アナルの装飾/アクセサリー (Anal)
    E_CL_BODY_PAINT BodyPaint;

    // === Upper Body Apparel (上半身のアパレル) ===
    E_CL_OUTERWEAR Outerwear;          // アウター（コート、ジャケット）
    E_CL_TOPS Tops;                // トップス、シャツ、セーター
    E_CL_BRA Bra;                // 上の肌着、ブラジャー、インナー

    // === Lower Body Apparel (下半身のアパレル) ===
    E_CL_BOTTOMS Bottoms;            // ズボン、スカート、主要なボトムス
    E_CL_PANTY Panty;            // 下の肌着、パンツ（Shortsをより一般的な名称に）

    // === Limbs & Extremities (四肢・末端) ===
    E_CL_UPPER_ARM UpperArmLeft;       // 左上腕（アームバンドなど）
    E_CL_UPPER_ARM UpperArmRight;      // 右上腕（アームバンドなど）
    E_CL_HAND_CUFFS HandCuffsLeft;       // 左手（グローブ、ミトンなど）
    E_CL_HAND_CUFFS HandCuffsRight;      // 右手（グローブ、ミトンなど）
    E_CL_WRIST_ACCESSORY WristAccessoryLeft; // 左手首（腕時計、ブレスレット）
    E_CL_WRIST_ACCESSORY WristAccessoryRight;// 右手首（腕時計、ブレスレット）

    // === Legs & Feet (脚部・足) ===
    E_CL_UPPER_THIGH UpperThighLeft;     // 左太もも（ガーターベルト、レッグリング）
    E_CL_UPPER_THIGH UpperThighRight;    // 右太もも（ガーターベルト、レッグリング）
    E_CL_LEGWEAR LegwearLeft;        // 左脚（靴下、ストッキング、タイツ）
    E_CL_LEGWEAR LegwearRight;       // 右脚（靴下、ストッキング、タイツ）
    E_CL_FOOTWEAR FootwearLeft;       // 左足（靴、ブーツ）
    E_CL_FOOTWEAR FootwearRight;      // 右足（靴、ブーツ）

    // === Non-Limb Accessories (非身体部位アクセサリー) ===
    E_CL_NECK_ACCESSORY NeckAccessory;      // ネックレス、チョーカー、スカーフ（新規追加）
    E_CL_WAIST_ACCESSORY WaistAccessory;     // ベルト、腰回りのチェーン（新規追加）
    E_CL_OTHER_ACCESSORY OtherAccessory;  // 天使の輪、羽など（部位に縛られない大きな装飾）

public:
    F_CharacterClothes();

    // ---------------------------------------------------------------------------------------------------------------------------------//
    // Accessor / Setter Method
    // ---------------------------------------------------------------------------------------------------------------------------------//
    F_CharacterClothes& setHeadAccessory1( E_CL_HEAD_ACCESSORY  p_HeadAccessoryIndex );
    F_CharacterClothes& setHeadAccessory2( E_CL_HEAD_ACCESSORY  p_HeadAccessoryIndex );
    F_CharacterClothes& setHairStyle( E_CL_HAIR_STYLE  p_HairStyleIndex );
    F_CharacterClothes& setFaceAccessory1( E_CL_FACE_ACCESSORY  p_FaceAccessoryIndex );
    F_CharacterClothes& setFaceAccessory2( E_CL_FACE_ACCESSORY  p_FaceAccessoryIndex );
    F_CharacterClothes& setEarringLeft(  E_CL_EARRING  p_EarringIndex );
    F_CharacterClothes& setEarringRight( E_CL_EARRING  p_EarringIndex );
    F_CharacterClothes& setNippleAccessoryLeft( E_CL_NIPPLE_ACCESSORY  p_NippleAccessoryIndex );
    F_CharacterClothes& setNippleAccessoryRight( E_CL_NIPPLE_ACCESSORY  p_NippleAccessoryIndex );
    F_CharacterClothes& setNavelAccessory( E_CL_NAVEL_ACCESSORY  p_NavelAccessoryIndex );
    F_CharacterClothes& setClitorisAccessory( E_CL_CLITORIS_ACCESSORY  p_ClitorisIndex );
    F_CharacterClothes& setAnalAccessory( E_CL_ANAL_ACCESSORY p_AnalAccessoryIndex );
    F_CharacterClothes& setBodyPaint( E_CL_BODY_PAINT  p_BodyPaintIndex );
    F_CharacterClothes& setOuterwear( E_CL_OUTERWEAR  p_OuterwearIndex );
    F_CharacterClothes& setTops( E_CL_TOPS  p_BodyTopsIndex );
    F_CharacterClothes& setBra( E_CL_BRA  p_BraIndex );
    F_CharacterClothes& setBottoms( E_CL_BOTTOMS  p_BottomsIndex );
    F_CharacterClothes& setPanty( E_CL_PANTY  p_PantyIndex );
    F_CharacterClothes& setUpperArmLeft( E_CL_UPPER_ARM  p_UpperArmIndex );
    F_CharacterClothes& setUpperArmRight( E_CL_UPPER_ARM  p_UpperArmIndex );
    F_CharacterClothes& setHandCuffsLeft( E_CL_HAND_CUFFS  p_HandCuffsIndex );
    F_CharacterClothes& setHandCuffsRight( E_CL_HAND_CUFFS  p_HandCuffsIndex );
    F_CharacterClothes& setWristAccessoryLeft( E_CL_WRIST_ACCESSORY  p_WristAccessoryIndex );
    F_CharacterClothes& setWristAccessoryRight( E_CL_WRIST_ACCESSORY  p_WristAccessoryIndex );
    F_CharacterClothes& setUpperThighLeft( E_CL_UPPER_THIGH  p_UpperThighIndex );
    F_CharacterClothes& setUpperThighRight( E_CL_UPPER_THIGH  p_UpperThighIndex );
    F_CharacterClothes& setLegwearLeft( E_CL_LEGWEAR  p_LegwearIndex );
    F_CharacterClothes& setLegwearRight( E_CL_LEGWEAR  p_LegwearIndex );
    F_CharacterClothes& setFootwearLeft( E_CL_FOOTWEAR  p_FootwearIndex );
    F_CharacterClothes& setFootwearRight( E_CL_FOOTWEAR  p_FootwearIndex );
    F_CharacterClothes& setNeckAccessory( E_CL_NECK_ACCESSORY  p_NeckAccessoryIndex );
    F_CharacterClothes& setWaistAccessory( E_CL_WAIST_ACCESSORY  p_WaistAccessoryIndex );
    F_CharacterClothes& setOtherAccessory( E_CL_OTHER_ACCESSORY  p_OtherAccessoryIndex );

    // ---------------------------------------------------------------------------------------------------------------------------------//
    // Accessor / Getter Method
    // ---------------------------------------------------------------------------------------------------------------------------------//
    E_CL_HEAD_ACCESSORY getHeadAccessory1() const;
    E_CL_HEAD_ACCESSORY getHeadAccessory2() const;
    E_CL_HAIR_STYLE getHairStyle() const;
    E_CL_FACE_ACCESSORY getFaceAccessory1() const;
    E_CL_FACE_ACCESSORY getFaceAccessory2() const;
    E_CL_EARRING getEarringLeft() const;
    E_CL_EARRING getEarringRight() const;
    E_CL_NIPPLE_ACCESSORY getNippleAccessoryLeft() const;
    E_CL_NIPPLE_ACCESSORY getNippleAccessoryRight() const;
    E_CL_NAVEL_ACCESSORY getNavelAccessory() const;
    E_CL_CLITORIS_ACCESSORY getClitorisAccessory() const;
    E_CL_ANAL_ACCESSORY getAnalAccessory() const;
    E_CL_BODY_PAINT getBodyPaint() const;
    E_CL_OUTERWEAR getOuterwear() const;
    E_CL_TOPS getTops() const;
    E_CL_BRA getBra() const;
    E_CL_BOTTOMS getBottoms() const;
    E_CL_PANTY getPanty() const;
    E_CL_UPPER_ARM getUpperArmLeft() const;
    E_CL_UPPER_ARM getUpperArmRight() const;
    E_CL_HAND_CUFFS getHandCuffsLeft() const;
    E_CL_HAND_CUFFS getHandCuffsRight() const;
    E_CL_WRIST_ACCESSORY getWristAccessoryLeft() const;
    E_CL_WRIST_ACCESSORY getWristAccessoryRight() const;
    E_CL_UPPER_THIGH getUpperThighLeft() const;
    E_CL_UPPER_THIGH getUpperThighRight() const;
    E_CL_LEGWEAR getLegwearLeft() const;
    E_CL_LEGWEAR getLegwearRight() const;
    E_CL_FOOTWEAR getFootwearLeft() const;
    E_CL_FOOTWEAR getFootwearRight() const;
    E_CL_NECK_ACCESSORY getNeckAccessory() const;
    E_CL_WAIST_ACCESSORY getWaistAccessory() const;
    E_CL_OTHER_ACCESSORY getOtherAccessory() const;

private:

};


//constexpr F_CharacterClothes CL_Preset_Naked = { CL_NAKED };


}
// -------------------------------------------------------------------------------------------------------------------------------------//
// Ending NameSpace { SAS : SexAndroidSimulator }
// -------------------------------------------------------------------------------------------------------------------------------------//

// -------------------------------------------------------------------------------------------------------------------------------------//
// Include Guarde
// -------------------------------------------------------------------------------------------------------------------------------------//
#endif
// -------------------------------------------------------------------------------------------------------------------------------------//