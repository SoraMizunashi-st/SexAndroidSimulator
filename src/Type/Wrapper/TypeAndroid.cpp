#include "./TypeAndroid.hpp"



SAS::TypeAndroid::TypeAndroid()
    : m_Data( std::make_unique< F_ConfigAndroidData >() )
    , m_Param( std::make_unique< std::vector< F_ErogenousZoneParam>>( static_cast<size_t>(E_ErogenousZoneName::LIST_SIZE)))
{

}