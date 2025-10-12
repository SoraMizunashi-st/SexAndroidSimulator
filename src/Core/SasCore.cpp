
#include "./SasCore.hpp"



SAS::SasCore::SasCore()
    : android( std::make_unique< TypeAndroid>())
{
    std::cout << "Type Android Initialize" << std::endl;
}


void SAS::SasCore::Test()
{


}