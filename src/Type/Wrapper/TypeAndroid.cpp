#include "./TypeAndroid.hpp"



SAS::TypeAndroid::TypeAndroid()
    : Data( std::make_unique< F_ConfigAndroidData >() )
    , Param( std::make_unique< std::vector< F_ErogenousZoneParam>>( static_cast<size_t>(E_ErogenousZoneName::LIST_SIZE)))
{

} 