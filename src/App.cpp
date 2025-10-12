#include "./App.hpp"
#include <chrono>

int main()
{
    auto start = std::chrono::high_resolution_clock::now();

    std::unique_ptr<SAS::SasCore> core = std::make_unique<SAS::SasCore>();

    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
    std::cout << "This is Test Module SAS Programs " << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;

    core->Test();

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Execution Time (Core Init): " << duration.count() << " ms" << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
    // ----------------------------------------------------

    
    return 0;
}