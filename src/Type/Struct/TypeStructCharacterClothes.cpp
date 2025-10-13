#include "./TypeStructCharacterClothes.hpp"


SAS::F_CharacterClothes::F_CharacterClothes()
{

}

// -------------------------------------------------------------------------------------------------------------------------------------//
// Accessor / Setter Method
// -------------------------------------------------------------------------------------------------------------------------------------//

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setHeadAccessory1( E_CL_HEAD_ACCESSORY  p_HeadAccessoryIndex )
{
    HeadAccessory1 = p_HeadAccessoryIndex;

    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setHeadAccessory2( E_CL_HEAD_ACCESSORY  p_HeadAccessoryIndex )
{
    HeadAccessory2 = p_HeadAccessoryIndex;

    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setHairStyle( SAS::E_CL_HAIR_STYLE  p_HairStyleIndex )
{
    HairStyle = p_HairStyleIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setFaceAccessory1( SAS::E_CL_FACE_ACCESSORY  p_FaceAccessoryIndex )
{
    FaceAccessory1 = p_FaceAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setFaceAccessory2( SAS::E_CL_FACE_ACCESSORY  p_FaceAccessoryIndex )
{
    FaceAccessory2 = p_FaceAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setEarringLeft(  SAS::E_CL_EARRING  p_EarringIndex )
{
    EarringLeft = p_EarringIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setEarringRight( SAS::E_CL_EARRING  p_EarringIndex )
{
    EarringRight = p_EarringIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setNippleAccessoryLeft( SAS::E_CL_NIPPLE_ACCESSORY  p_NippleAccessoryIndex )
{
    NippleAccessoryLeft = p_NippleAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setNippleAccessoryRight( SAS::E_CL_NIPPLE_ACCESSORY  p_NippleAccessoryIndex )
{
    NippleAccessoryRight = p_NippleAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setNavelAccessory( SAS::E_CL_NAVEL_ACCESSORY  p_NavelAccessoryIndex )
{
    NavelAccessory = p_NavelAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setClitorisAccessory( SAS::E_CL_CLITORIS_ACCESSORY  p_ClitorisIndex )
{
    ClitorisAccessory = p_ClitorisIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setAnalAccessory( SAS::E_CL_ANAL_ACCESSORY p_AnalAccessoryIndex )
{
    AnalAccessory = p_AnalAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setBodyPaint( SAS::E_CL_BODY_PAINT  p_BodyPaintIndex )
{
    BodyPaint = p_BodyPaintIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setOuterwear( SAS::E_CL_OUTERWEAR  p_OuterwearIndex )
{
    Outerwear = p_OuterwearIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setTops( SAS::E_CL_TOPS  p_BodyTopsIndex )
{
    Tops = p_BodyTopsIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setBra( SAS::E_CL_BRA  p_BraIndex )
{
    Bra = p_BraIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setBottoms( SAS::E_CL_BOTTOMS  p_BottomsIndex )
{
    Bottoms = p_BottomsIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setPanty( SAS::E_CL_PANTY  p_PantyIndex )
{
    Panty = p_PantyIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setUpperArmLeft( SAS::E_CL_UPPER_ARM  p_UpperArmIndex )
{
    UpperArmLeft = p_UpperArmIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setUpperArmRight( SAS::E_CL_UPPER_ARM  p_UpperArmIndex )
{
    UpperArmRight = p_UpperArmIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setHandCuffsLeft( SAS::E_CL_HAND_CUFFS  p_HandCuffsIndex )
{
    HandCuffsLeft = p_HandCuffsIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setHandCuffsRight( SAS::E_CL_HAND_CUFFS  p_HandCuffsIndex )
{
    HandCuffsRight = p_HandCuffsIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setWristAccessoryLeft( SAS::E_CL_WRIST_ACCESSORY  p_WristAccessoryIndex )
{
    WristAccessoryLeft = p_WristAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setWristAccessoryRight( SAS::E_CL_WRIST_ACCESSORY  p_WristAccessoryIndex )
{
    WristAccessoryRight = p_WristAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setUpperThighLeft( SAS::E_CL_UPPER_THIGH  p_UpperThighIndex )
{
    UpperThighLeft = p_UpperThighIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setUpperThighRight( SAS::E_CL_UPPER_THIGH  p_UpperThighIndex )
{
    UpperThighRight = p_UpperThighIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setLegwearLeft( SAS::E_CL_LEGWEAR  p_LegwearIndex )
{
    LegwearLeft = p_LegwearIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setLegwearRight( SAS::E_CL_LEGWEAR  p_LegwearIndex )
{
    LegwearRight = p_LegwearIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setFootwearLeft( SAS::E_CL_FOOTWEAR  p_FootwearIndex )
{
    FootwearLeft = p_FootwearIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setFootwearRight( SAS::E_CL_FOOTWEAR  p_FootwearIndex )
{
    FootwearRight = p_FootwearIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setNeckAccessory( SAS::E_CL_NECK_ACCESSORY  p_NeckAccessoryIndex )
{
    NeckAccessory = p_NeckAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setWaistAccessory( SAS::E_CL_WAIST_ACCESSORY  p_WaistAccessoryIndex )
{
    WaistAccessory = p_WaistAccessoryIndex;
    return *this;
}

SAS::F_CharacterClothes& SAS::F_CharacterClothes::setOtherAccessory( SAS::E_CL_OTHER_ACCESSORY  p_OtherAccessoryIndex )
{
    OtherAccessory = p_OtherAccessoryIndex;
    return *this;
}

// -------------------------------------------------------------------------------------------------------------------------------------//
// Accessor / Getter Method
// -------------------------------------------------------------------------------------------------------------------------------------//

SAS::E_CL_HEAD_ACCESSORY SAS::F_CharacterClothes::getHeadAccessory1() const
{
    return HeadAccessory1;
}

SAS::E_CL_HEAD_ACCESSORY SAS::F_CharacterClothes::getHeadAccessory2() const
{
    return HeadAccessory2;
}

SAS::E_CL_HAIR_STYLE SAS::F_CharacterClothes::getHairStyle() const
{
    return HairStyle;
}

SAS::E_CL_FACE_ACCESSORY SAS::F_CharacterClothes::getFaceAccessory1() const
{
    return FaceAccessory1;
}

SAS::E_CL_FACE_ACCESSORY SAS::F_CharacterClothes::getFaceAccessory2() const
{
    return FaceAccessory2;
}

SAS::E_CL_EARRING SAS::F_CharacterClothes::getEarringLeft() const
{
    return EarringLeft;
}

SAS::E_CL_EARRING SAS::F_CharacterClothes::getEarringRight() const
{
    return EarringRight;
}

SAS::E_CL_NIPPLE_ACCESSORY SAS::F_CharacterClothes::getNippleAccessoryLeft() const
{
    return NippleAccessoryLeft;
}

SAS::E_CL_NIPPLE_ACCESSORY SAS::F_CharacterClothes::getNippleAccessoryRight() const
{
    return NippleAccessoryRight;
}

SAS::E_CL_NAVEL_ACCESSORY SAS::F_CharacterClothes::getNavelAccessory() const
{
    return NavelAccessory;
}

SAS::E_CL_CLITORIS_ACCESSORY SAS::F_CharacterClothes::getClitorisAccessory() const
{
    return ClitorisAccessory;
}

SAS::E_CL_ANAL_ACCESSORY SAS::F_CharacterClothes::getAnalAccessory() const
{
    return AnalAccessory;
}

SAS::E_CL_BODY_PAINT SAS::F_CharacterClothes::getBodyPaint() const
{
    return BodyPaint;
}

SAS::E_CL_OUTERWEAR SAS::F_CharacterClothes::getOuterwear() const
{
    return Outerwear;
}

SAS::E_CL_TOPS SAS::F_CharacterClothes::getTops() const
{
    return Tops;
}

SAS::E_CL_BRA SAS::F_CharacterClothes::getBra() const
{
    return Bra;
}

SAS::E_CL_BOTTOMS SAS::F_CharacterClothes::getBottoms() const
{
    return Bottoms;
}

SAS::E_CL_PANTY SAS::F_CharacterClothes::getPanty() const
{
    return Panty;
}

SAS::E_CL_UPPER_ARM SAS::F_CharacterClothes::getUpperArmLeft() const
{
    return UpperArmLeft;
}

SAS::E_CL_UPPER_ARM SAS::F_CharacterClothes::getUpperArmRight() const
{
    return UpperArmRight;
}

SAS::E_CL_HAND_CUFFS SAS::F_CharacterClothes::getHandCuffsLeft() const
{
    return HandCuffsLeft;
}

SAS::E_CL_HAND_CUFFS SAS::F_CharacterClothes::getHandCuffsRight() const
{
    return HandCuffsRight;
}

SAS::E_CL_WRIST_ACCESSORY SAS::F_CharacterClothes::getWristAccessoryLeft() const
{
    return WristAccessoryLeft;
}

SAS::E_CL_WRIST_ACCESSORY SAS::F_CharacterClothes::getWristAccessoryRight() const
{
    return WristAccessoryRight;
}

SAS::E_CL_UPPER_THIGH SAS::F_CharacterClothes::getUpperThighLeft() const
{
    return UpperThighLeft;
}

SAS::E_CL_UPPER_THIGH SAS::F_CharacterClothes::getUpperThighRight() const
{
    return UpperThighRight;
}

SAS::E_CL_LEGWEAR SAS::F_CharacterClothes::getLegwearLeft() const
{
    return LegwearLeft;
}

SAS::E_CL_LEGWEAR SAS::F_CharacterClothes::getLegwearRight() const
{
    return LegwearRight;
}

SAS::E_CL_FOOTWEAR SAS::F_CharacterClothes::getFootwearLeft() const
{
    return FootwearLeft;
}

SAS::E_CL_FOOTWEAR SAS::F_CharacterClothes::getFootwearRight() const
{
    return FootwearRight;
}

SAS::E_CL_NECK_ACCESSORY SAS::F_CharacterClothes::getNeckAccessory() const
{
    return NeckAccessory;
}

SAS::E_CL_WAIST_ACCESSORY SAS::F_CharacterClothes::getWaistAccessory() const
{
    return WaistAccessory;
}

SAS::E_CL_OTHER_ACCESSORY SAS::F_CharacterClothes::getOtherAccessory() const
{
    return OtherAccessory;
}