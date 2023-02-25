#ifndef __NEUTRONGL_MATRIX_TRANSFORM_CPP__
#define __NEUTRONGL_MATRIX_TRANSFORM_CPP__

#include <glm/gtc/matrix_transform.hpp>
#include "Transform.hpp"

namespace ngl
{
    Transform::Transform(
        const glm::vec3 &translation,
        const glm::vec3 &rotation,
        const glm::vec3 &scale)
        : MatrixHolder(),
          m_translation(translation),
          m_rotation(rotation),
          m_scale(scale) { update(); }

    const glm::vec3 &
    Transform::get_translation() const
    {
        return m_translation;
    }

    const glm::vec3 &
    Transform::get_rotation() const
    {
        return m_rotation;
    }

    const glm::vec3 &
    Transform::get_scale() const
    {
        return m_scale;
    }

    void
    Transform::set_translation(
        const glm::vec3 &translation)
    {
        m_translation = translation;
    }

    void
    Transform::set_rotation(
        const glm::vec3 &rotation)
    {
        m_rotation = rotation;
    }

    void
    Transform::set_scale(
        const glm::vec3 &scale)
    {
        m_scale = scale;
    }

    void
    Transform::translate(
        const glm::vec3 &translation)
    {
        m_translation += translation;
    }

    void
    Transform::rotate(
        const glm::vec3 &rotation)
    {
        m_rotation += rotation;
    }

    void
    Transform::scale(
        const glm::vec3 &scale)
    {
        m_scale += scale;
    }

    Transform
    Transform::translated(
        const glm::vec3 &translation)
    {
        Transform result = static_cast<Transform>(*this);
        result.translate(translation);
        result.update();
        return static_cast<Transform>(result);
    }

    Transform
    Transform::rotated(
        const glm::vec3 &rotation)
    {
        Transform result = static_cast<Transform>(*this);
        result.rotate(rotation);
        result.update();
        return static_cast<Transform>(result);
    }

    Transform
    Transform::scaled(
        const glm::vec3 &scale)
    {
        Transform result = static_cast<Transform>(*this);
        result.scale(scale);
        result.update();
        return static_cast<Transform>(result);
    }

    void
    Transform::update()
    {
        m_matrix = glm::mat4(1.0f);
        m_matrix = glm::translate(m_matrix, m_translation);
        m_matrix = glm::rotate(m_matrix, m_rotation.x, glm::vec3(1.0f, 0.0f, 0.0f));
        m_matrix = glm::rotate(m_matrix, m_rotation.y, glm::vec3(0.0f, 1.0f, 0.0f));
        m_matrix = glm::rotate(m_matrix, m_rotation.z, glm::vec3(0.0f, 0.0f, 1.0f));
        m_matrix = glm::scale(m_matrix, m_scale);
    }

} // namespace ngl

#endif