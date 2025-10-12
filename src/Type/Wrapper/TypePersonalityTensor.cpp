#include "./TypePersonalityTensor.hpp"

SAS::PersonalityTensor::PersonalityTensor()
    : m_PersonalityTensor( std::make_unique<T_PersonalityTensor>())
{

}