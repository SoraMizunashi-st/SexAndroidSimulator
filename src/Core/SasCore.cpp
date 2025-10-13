
#include "./SasCore.hpp"



SAS::SasCore::SasCore()
    : android( std::make_unique< TypeAndroid>())
{
    std::cout << "Type Android Initialized" << std::endl;
}


void SAS::SasCore::Test()
{


}

SAS::SasCore& SAS::SasCore::Run()
{
#ifdef __DEBUG__
    std::cout << " Sas Core Run " << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;

#endif

    return *this;
}

int SAS::SasCore::MainLoop()
{
    while( true )
    {

        std::cout   << " Reaming LifeTimes : " << LifeTime  << "(Vita)"
                    << " | Money : " << android->getWalletBasicModey() << "(Pico)" << std::endl;
 
        this->ResourceCheack().InferenceAction().Result();
        
        LifeTime--;
        if( LifeTime <= 0 ){ break; }
    }

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
    std::cout << " Killed GameOver X(" << std::endl;

    return 0;
}

SAS::SasCore& SAS::SasCore::ResourceCheack()
{
    std::cout << " Current Resource Cheack | Finished " << std::endl;
    return *this;
}

SAS::SasCore& SAS::SasCore::InferenceAction()
{
    std::cout << " InferenceAction | Finished " << std::endl;
    return *this;
}

SAS::SasCore& SAS::SasCore::Result()
{
    std::cout << " Result | Action Failed -> LifeTime + 0 Vita / Money + 0 Pico" << std::endl;
    return *this;
}