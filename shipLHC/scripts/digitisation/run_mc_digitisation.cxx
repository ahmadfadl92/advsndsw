// Retired in TB_V1.0-fix: its copy of the write loop never loaded the noise profiles and produced no digis at TB_V1.0.
#include <iostream>

int main()
{
    std::cerr << "run_mc_digitisation is retired and digitises nothing.\n"
              << "Use: python $ADVSNDSW_ROOT/shipLHC/run_digiSND.py -cpp -f <sim file> -g <geofile> -n <events> [-s <seed>]\n";
    return 1;
}
