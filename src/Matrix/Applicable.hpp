#ifndef __NEUTRONGL_MATRIX_APPLICABLE_HPP__
#define __NEUTRONGL_MATRIX_APPLICABLE_HPP__

#include <ntl/NTL.hpp>
#include "MatrixHolder.hpp"
#include "Transform.hpp"

namespace ngl
{
    /// @brief 可应用的对象，主要用于模型
    /// @tparam m_MatrixHolderType 矩阵类型，继承自MatrixHolder
    template <typename m_MatrixHolderType = Transform>
    class Applicable : public ntl::Object
    {
    public:
        /// @brief 矩阵持有者类型
        using MatrixHolderType = m_MatrixHolderType;

        using SelfType = Applicable<MatrixHolderType>;
        using ParentType = ntl::Object;

    public:
        constexpr Applicable() = default;
        constexpr explicit Applicable(const SelfType &from) = default;
        ~Applicable() override = default;

    public:
        constexpr SelfType &operator=(const SelfType &from) = default;

    public:
        /// @brief 将矩阵应用至当前对象
        /// @param matrix 矩阵
        virtual void apply(const MatrixHolderType &matrix) = 0;
    };

} // namespace ngl

#endif