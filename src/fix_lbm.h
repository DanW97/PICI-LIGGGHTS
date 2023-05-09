#ifdef FIX_CLASS

FixStyle(couple/lbm,FixLbmCoupling)

#else

#ifndef LMP_FIX_LBM_COUPLING_H
#define LMP_FIX_LBM_COUPLING_H

#include "fix.h"

namespace LAMMPS_NS {

class FixLbmCoupling : public Fix {

    public:
        
};

}

#endif
#endif