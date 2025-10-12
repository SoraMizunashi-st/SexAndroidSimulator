#include "./TypeStructConfigAndroidData.hpp"


SAS::F_ConfigAndroidData::F_ConfigAndroidData()
    : Sex(E_SexType::UNKNOWN)
    , ErogenousParam(static_cast<size_t>(E_ErogenousZoneName::LIST_SIZE) , { E_ErogenousZoneName::UNKNOWN , 0 , 0 } )
{

}