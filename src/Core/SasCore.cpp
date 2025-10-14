
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
        // ---------------------------------------------------------------------------------------------------------------------------------//
        // Completion judgment | LifeTime is None Pat.
        // ---------------------------------------------------------------------------------------------------------------------------------//
        if( android->getLifeTime() < 0 ){ break; }

        // ---------------------------------------------------------------------------------------------------------------------------------//
        // Log | Minimal resource logging
        // ---------------------------------------------------------------------------------------------------------------------------------//
        std::cout   << " Reaming LifeTimes : " << this->android->getLifeTime()  << "(Vita)"
                    << " | Money : " << this->android->getWalletBasicMoney() << "(Pico)" << std::endl;
        
        // ---------------------------------------------------------------------------------------------------------------------------------//
        // ActionChain | Change in Desire value of CostGain
        // ---------------------------------------------------------------------------------------------------------------------------------//
        // tmp : Since this is a demo version, filtering is performed directly from values, not from inference results.
        // ---------------------------------------------------------------------------------------------------------------------------------//
        // LifeTime Layer
        if( 10 < this->android->getDesireEat() ){t_LifeTimeGain -= 2;}
        else{t_LifeTimeGain = 0;}

        // Wallet Layer
        if( 10 < this->android->getDesireSleep() && 10 < this->android->getDesireSexual() )
        {
            t_WalletGain -=30;
        }
        else if(10 < this->android->getDesireSleep())
        {
            t_WalletGain -= 10;
        }
        else if( 10 < this->android->getDesireSexual() )
        {
            t_WalletGain -=20;
        }
        else
        {
            t_WalletGain = 0;
        }

        // ---------------------------------------------------------------------------------------------------------------------------------//
        // ActionChain | Collect Initial Cost
        // ---------------------------------------------------------------------------------------------------------------------------------//
        this->android->AddLifeTime(t_LifeTimeGain).AddWallet(t_WalletGain);
        
        // ---------------------------------------------------------------------------------------------------------------------------------//
        // ActionChain | Receipt of Income
        // ---------------------------------------------------------------------------------------------------------------------------------//



        //tmp MainActionChain
        this->ResourceCheck().InferenceAction().Result();

        // ---------------------------------------------------------------------------------------------------------------------------------//
        // Next Time Update | Change in Desire value of self.
        // ---------------------------------------------------------------------------------------------------------------------------------//
        if( 10 < this->android->getDesireEat() ){this->android->AddDesireEat(-10);}
        else{this->android->AddDesireEat(5);}

        if( 10 < this->android->getDesireSleep() ){this->android->AddDesireSleep(-10);}
        else{this->android->AddDesireSleep(4);}

        if( 10 < this->android->getDesireSexual() ){this->android->AddDesireSexual(-10);}
        else{this->android->AddDesireSexual(3);}
    }

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
    std::cout << " Killed GameOver X(" << std::endl;

    return 0;
}

SAS::SasCore& SAS::SasCore::ResourceCheck()
{
    std::cout << " Current Resource Check | Finished " << std::endl;
    return *this;
}

SAS::SasCore& SAS::SasCore::InferenceAction()
{
    std::cout << " InferenceAction | Finished " << std::endl;
    return *this;
}

SAS::SasCore& SAS::SasCore::Result()
{
    // ---------------------------------------------------------------------------------------------------------------------------------//
    // tmp Comment | Originally, it implements the function to send data to the server side.
    // ---------------------------------------------------------------------------------------------------------------------------------//


#ifdef __DEBUG__
    std::cout << " Result | Desires : Eat (" <<  this->android->getDesireEat()
              << ")pt : Sleep ("          <<  this->android->getDesireSleep()
              << ")pt : Sexual ("         <<  this->android->getDesireSexual()
              << ")pt" << std::endl;

    std::cout << " Result | Actions Cost [Initial Cost] -> LifeTime : "
              << std::showpos << std::setw(3)
              << t_LifeTimeGain << " Vita / Money : "
              << t_WalletGain   << " Pico" << std::endl;

    std::cout << " Result | Actions Cost [Income  Cost] -> LifeTime :  +0 Vita / Money :  +0 Pico" << std::endl;

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
#endif

    return *this;
}