#include "./TypeAndroid.hpp"



SAS::TypeAndroid::TypeAndroid()
    :Param( std::make_unique< std::vector<ErogenousZoneParam>>( static_cast<size_t>(ErogenousZoneName::LIST_SIZE)))
{

} 