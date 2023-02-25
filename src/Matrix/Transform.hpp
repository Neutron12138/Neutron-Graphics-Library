#ifndef __NEUTRONGL_MATRIX_TRANSFORM_HPP__
#define __NEUTRONGL_MATRIX_TRANSFORM_HPP__

#include <glm/glm.hpp>
#include "MatrixHolder.hpp"

namespace ngl
{
    /// @brief 3D变换类，用于3D变换
    class Transform : public MatrixHolder<glm::mat4>
    {
    public:
        using MatrixType = glm::mat4;

        using SelfType = Transform;
        using ParentType = MatrixHolder<MatrixType>;

    protected:
        /// @brief 位移
        glm::vec3 m_translation = glm::vec3(0.0f, 0.0f, 0.0f);

        /// @brief 旋转
        glm::vec3 m_rotation = glm::vec3(0.0f, 0.0f, 0.0f);

        /// @brief 缩放
        glm::vec3 m_scale = glm::vec3(1.0f, 1.0f, 1.0f);

    public:
        Transform() = default;
        explicit Transform(const glm::vec3 &translation, const glm::vec3 &rotation, const glm::vec3 &scale);
        explicit Transform(const SelfType &from) = default;
        ~Transform() override = default;

    public:
        SelfType &operator=(const SelfType &from) = default;

    public:
        /// @brief 获取位移
        /// @return 位移
        const glm::vec3 &get_translation() const;

        /// @brief 获取旋转
        /// @return 旋转
        const glm::vec3 &get_rotation() const;

        /// @brief 获取缩放
        /// @return 缩放
        const glm::vec3 &get_scale() const;

        /// @brief 设置位移
        /// @param translation 位移
        /// @return 本对象
        virtual void set_translation(const glm::vec3 &translation);

        /// @brief 设置旋转
        /// @param rotation 旋转
        /// @return 本对象
        virtual void set_rotation(const glm::vec3 &rotation);

        /// @brief 设置缩放
        /// @param scale 缩放
        /// @return 本对象
        virtual void set_scale(const glm::vec3 &scale);

    public:
        /// @brief 位移一段距离
        /// @param translation 要位移的距离
        virtual void translate(const glm::vec3 &translation);

        /// @brief 旋转一定角度
        /// @param rotation 要旋转的角度
        virtual void rotate(const glm::vec3 &rotation);

        /// @brief 拉伸一定大小
        /// @param scale 要拉伸的大小
        virtual void scale(const glm::vec3 &scale);

        /// @brief 位移一段距离
        /// @param translation 要位移的距离
        virtual Transform translated(const glm::vec3 &translation);

        /// @brief 旋转一定角度
        /// @param rotation 要旋转的角度
        virtual Transform rotated(const glm::vec3 &rotation);

        /// @brief 拉伸一定大小
        /// @param scale 要拉伸的大小
        virtual Transform scaled(const glm::vec3 &scale);

    public:
        virtual void update();
    };

} // namespace ngl

#endif