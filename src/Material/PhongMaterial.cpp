#ifndef __NEUTRON_GRAPHICS_PHONGMATERIAL_CPP__
#define __NEUTRON_GRAPHICS_PHONGMATERIAL_CPP__

#include "PhongMaterial.hpp"

namespace ngl
{
    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::PhongMaterial(const AmbientType &ambient,
                                       const DiffuseType &diffuse,
                                       const SpecularType &specular,
                                       const EmissionType &emission,
                                       float shininess)
        : m_ambient(ambient),
          m_diffuse(diffuse),
          m_specular(specular),
          m_emission(emission),
          m_shininess(shininess) {}

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    const m_AmbientType &
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::get_ambient() const
    {
        return m_ambient;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    const m_DiffuseType &
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::get_diffuse() const
    {
        return m_diffuse;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    const m_SpecularType &
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::get_specular() const
    {
        return m_specular;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    const m_EmissionType &
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::get_emission() const
    {
        return m_emission;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    float
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::get_shininess() const
    {
        return m_shininess;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    void
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::set_ambient(const AmbientType &ambient)
    {
        m_ambient = ambient;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    void
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::set_diffuse(const DiffuseType &diffuse)
    {
        m_diffuse = diffuse;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    void
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::set_specular(const SpecularType &specular)
    {
        m_specular = specular;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    void
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::set_emission(const EmissionType &emission)
    {
        m_emission = emission;
    }

    template <
        typename m_AmbientType,
        typename m_DiffuseType,
        typename m_SpecularType,
        typename m_EmissionType>
    void
    PhongMaterial<
        m_AmbientType,
        m_DiffuseType,
        m_SpecularType,
        m_EmissionType>::set_shininess(float shininess)
    {
        m_shininess = shininess;
    }

} // namespace ngl

#endif