#include "./TypeAndroid.hpp"



SAS::TypeAndroid::TypeAndroid()
    : m_Data()
    , m_LifeTime(10)
    , m_Wallet(100)
    , m_Greed(0)
    , m_Personality( SAS::EMOTION_DIMENSION_8Dx8D)
{
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
    std::cout << "Type Android Initialize" << std::endl;
}

// -------------------------------------------------------------------------------------------------------------------------------------//
// Accessor / Setter Method
// -------------------------------------------------------------------------------------------------------------------------------------//




// -------------------------------------------------------------------------------------------------------------------------------------//
// Accessor / Getter Method
// -------------------------------------------------------------------------------------------------------------------------------------//

int SAS::TypeAndroid::getLifeTime()
{
    return this->m_LifeTime.BasicLifeTime;
}

int SAS::TypeAndroid::getWalletBasicMoney()
{
    return this->m_Wallet.BasicMoney;
}

int SAS::TypeAndroid::getDesireEat()
{
    return this->m_Greed.DesireEat;
}

int SAS::TypeAndroid::getDesireSleep()
{
    return this->m_Greed.DesireSleep;
}

int SAS::TypeAndroid::getDesireSexual()
{
    return this->m_Greed.DesireSexual;
}

// -------------------------------------------------------------------------------------------------------------------------------------//
// Accessor / Adder Method
// -------------------------------------------------------------------------------------------------------------------------------------//
SAS::TypeAndroid& SAS::TypeAndroid::AddLifeTime( int AdditionalValue )
{
    this->m_LifeTime.BasicLifeTime += AdditionalValue;

    return *this;
}

SAS::TypeAndroid& SAS::TypeAndroid::AddWallet( int AdditionalValue )
{
    this->m_Wallet.BasicMoney += AdditionalValue;
    return *this;
}

SAS::TypeAndroid& SAS::TypeAndroid::AddDesireEat( int AdditionalValue )
{
    this->m_Greed.DesireEat += AdditionalValue;
    return *this;
}

SAS::TypeAndroid& SAS::TypeAndroid::AddDesireSleep( int AdditionalValue )
{
    this->m_Greed.DesireSleep += AdditionalValue;
    return *this;
}

SAS::TypeAndroid& SAS::TypeAndroid::AddDesireSexual( int AdditionalValue )
{
    this->m_Greed.DesireSexual += AdditionalValue;
    return *this;
}