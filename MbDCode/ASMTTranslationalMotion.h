#pragma once

#include "ASMTMotion.h"
#include "ZTranslation.h"

namespace MbD {
    class ASMTTranslationalMotion : public ASMTMotion
    {
        //
    public:
        void parseASMT(std::vector<std::string>& lines) override;
        void initMarkers() override;
        void createMbD(std::shared_ptr<System> mbdSys, std::shared_ptr<Units> mbdUnits) override;
        std::shared_ptr<Joint> mbdClassNew() override;

        std::string motionJoint, translationZ;

    };
}
