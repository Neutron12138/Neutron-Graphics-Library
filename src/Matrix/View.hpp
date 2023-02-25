#ifndef __NEUTRONGL_MATRIX_VIEW_HPP__
#define __NEUTRONGL_MATRIX_VIEW_HPP__

#include <glm/glm.hpp>
#include "MatrixHolder.hpp"
#include "Transform.hpp"
#include "Applicable.hpp"
#include "ViewVectorHolder.hpp"

namespace ngl
{
    /// @brief 视图基类
    class View : public MatrixHolder<glm::mat4>
    {
    public:
        using MatrixType = glm::mat4;

        using SelfType = View;
        using ParentType = MatrixHolder<MatrixType>;

    protected:
        /// @brief 视图向量
        ViewVectorHolder m_view_vector;

    public:
        View() = default;
        constexpr explicit View(const ViewVectorHolder &holder);
        constexpr explicit View(const SelfType &from) = default;
        ~View() override = default;

    public:
        constexpr SelfType &operator=(const SelfType &from) = default;

    public:
        ///
        const ViewVectorHolder &get_view_vector() const;

        ///
        virtual void set_view_vector(const ViewVectorHolder &holder);

    public:
        void update() override;
    };

} // namespace ngl

#endif