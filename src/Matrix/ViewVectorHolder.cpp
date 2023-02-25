#ifndef __NEUTRONGL_MATRIX_VIEWVECTORHOLDER_CPP__
#define __NEUTRONGL_MATRIX_VIEWVECTORHOLDER_CPP__

#include "ViewVectorHolder.hpp"

namespace ngl
{
    ViewVectorHolder::ViewVectorHolder(
        const glm::vec3 &position,
        const glm::vec3 &target,
        const glm::vec3 &up)
        : ViewVectorHolder::ParentType(),
          m_position(position),
          m_target(target),
          m_up(up) {}

    const glm::vec3 &
    ViewVectorHolder::get_position() const
    {
        return m_position;
    }

    const glm::vec3 &
    ViewVectorHolder::get_target() const
    {
        return m_target;
    }

    const glm::vec3 &
    ViewVectorHolder::get_up() const
    {
        return m_up;
    }

    void
    ViewVectorHolder::set_position(
        const glm::vec3 &position)
    {
        m_position = position;
    }

    void
    ViewVectorHolder::set_target(
        const glm::vec3 &target)
    {
        m_target = target;
    }

    void
    ViewVectorHolder::set_up(
        const glm::vec3 &up)
    {
        m_up = up;
    }

    void
    ViewVectorHolder::apply(
        const ViewVectorHolder::MatrixHolderType &matrix)
    {
        m_position = glm::vec3(matrix.get_matrix() * glm::vec4(m_position));
        m_target = glm::vec3(matrix.get_matrix() * glm::vec4(m_target));
        m_up = glm::vec3(matrix.get_matrix() * glm::vec4(m_up));
    }

} // namespace ngl

#endif