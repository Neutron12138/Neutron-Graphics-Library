#ifndef __NEUTRONGL_MATRIX_VIEWVECTORHOLDER_HPP__
#define __NEUTRONGL_MATRIX_VIEWVECTORHOLDER_HPP__

#include <glm/glm.hpp>
#include <ntl/NTL.hpp>
#include "Applicable.hpp"

namespace ngl
{
    /// @brief 视图向量持有者
    class ViewVectorHolder : public Applicable<Transform>
    {
    public:
        using MatrixHolderType = Transform;

        using SelfType = ViewVectorHolder;
        using ParentType = Applicable<Transform>;

    protected:
        /// @brief 位置
        glm::vec3 m_position = glm::vec3(0.0f, 0.0f, 1.0f);

        /// @brief 正在观察的目标位置
        glm::vec3 m_target = glm::vec3(0.0f, 0.0f, 0.0f);

        /// @brief 上向量
        glm::vec3 m_up = glm::vec3(0.0f, 1.0f, 0.0f);

    public:
        ViewVectorHolder() = default;
        explicit ViewVectorHolder(const glm::vec3 &position, const glm::vec3 &target, const glm::vec3 &up);
        explicit ViewVectorHolder(const SelfType &from) = default;
        ~ViewVectorHolder() override = default;

    public:
        SelfType &operator=(const SelfType &from) = default;

    public:
        /// @brief 获取视图的位置
        /// @return 视图的位置
        const glm::vec3 &get_position() const;

        /// @brief 获取视图正在观察的目标位置
        /// @return 视图正在观察的目标位置
        const glm::vec3 &get_target() const;

        /// @brief 获取视图的上向量
        /// @return 视图的上向量
        const glm::vec3 &get_up() const;

    public:
        /// @brief 设置视图的位置
        /// @param position 视图的位置
        void set_position(const glm::vec3 &position);

        /// @brief 设置视图正在观察的目标位置
        /// @param target 视图正在观察的目标位置
        void set_target(const glm::vec3 &target);

        /// @brief 设置视图的上向量
        /// @param up 视图的上向量
        void set_up(const glm::vec3 &up);

    public:
        void apply(const MatrixHolderType &matrix) override;
    };

} // namespace ngl

#endif