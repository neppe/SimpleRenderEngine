#pragma once

#include "glm/glm.hpp"
#include "LightType.hpp"

#include "SRE/Export.hpp"

namespace SRE {
    struct DllExport Light {
        LightType lightType;
        // position in worldspace
        glm::vec3 position;
        // direction towards the lightsource
        glm::vec3 direction;
        glm::vec3 color;
        float range;
        Light();
        Light(LightType lightType, glm::vec3 position, glm::vec3 direction, glm::vec3 color, float range);
    };
}