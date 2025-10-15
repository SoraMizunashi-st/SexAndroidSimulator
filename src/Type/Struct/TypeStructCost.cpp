#include "./TypeStructCost.hpp"


SAS::F_CostBase::F_CostBase()
    : COST_ID(0)
    , Gain(0)
{

}

SAS::F_Cost::F_Cost()
    : Cost()
{
    Cost[static_cast<uint8_t>(SAS::E_COST::LIFE_TIME)].COST_ID = static_cast<uint8_t>(SAS::E_COST::LIFE_TIME);
    Cost[static_cast<uint8_t>(SAS::E_COST::WALLET)].COST_ID    = static_cast<uint8_t>(SAS::E_COST::WALLET);
}