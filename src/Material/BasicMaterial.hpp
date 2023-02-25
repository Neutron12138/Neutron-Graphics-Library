#ifndef __NEUTRONGL_MATERIAL_BASICMATERIAL_HPP__
#define __NEUTRONGL_MATERIAL_BASICMATERIAL_HPP__

#include <glm/glm.hpp>
#include <ntl/NTL.hpp>

namespace ngl
{
    /// @brief 基础材料类
    class BasicMaterial : public ntl::Object
    {
    public:
        using SelfType = BasicMaterial;
        using ParentType = ntl::Object;

    public:
        BasicMaterial() = default;
        explicit BasicMaterial(const SelfType &from) = default;
        ~BasicMaterial() override = default;

    public:
        SelfType &operator=(const SelfType &from) = default;
    };

} // namespace ngl

#endif