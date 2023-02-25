#ifndef __NEUTRONGL_MATRIX_VIEW_CPP__
#define __NEUTRONGL_MATRIX_VIEW_CPP__

#include <glm/gtc/matrix_transform.hpp>
#include "View.hpp"

namespace ngl
{
    View::View(
        const ViewVectorHolder &holder)
        : View::ParentType(),
          m_view_vector(holder) { update(); }

    const ViewVectorHolder &
    View::get_view_vector() const
    {
        return m_view_vector;
    }

    void
    View::set_view_vector(
        const ViewVectorHolder &holder)
    {
        m_view_vector = holder;
    }

    void View::update()
    {
        m_matrix =
            glm::lookAt(
                m_view_vector.get_position(),
                m_view_vector.get_target(),
                m_view_vector.get_up());
    }

} // namespace ngl

#endif