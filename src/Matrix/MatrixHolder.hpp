#ifndef __NEUTRONGL_MATRIX_MATRIXHOLDER_HPP__
#define __NEUTRONGL_MATRIX_MATRIXHOLDER_HPP__

#include <ntl/NTL.hpp>

namespace ngl
{
    /// @brief 矩阵持有者，矩阵对象的基类
    /// @tparam m_MatrixType 矩阵类型
    template <typename m_MatrixType>
    class MatrixHolder : public ntl::Object
    {
    public:
        /// @brief 矩阵类型
        using MatrixType = m_MatrixType;

        using SelfType = MatrixHolder<MatrixType>;
        using ParentType = ntl::Object;

    protected:
        /// @brief 矩阵
        MatrixType m_matrix;

    public:
        MatrixHolder() = default;
        explicit MatrixHolder(const MatrixType &matrix);
        explicit MatrixHolder(const SelfType &from) = default;
        ~MatrixHolder() override = default;

    public:
        SelfType &operator=(const SelfType &from) = default;

    public:
        /// @brief 设置矩阵
        /// @param matrix 要设置的矩阵
        virtual void set_matrix(const MatrixType &matrix);

        /// @brief 获取矩阵
        /// @return 矩阵
        const MatrixType &get_matrix() const;

    public:
        /// @brief 更新矩阵
        virtual void update() = 0;
    };

} // namespace ngl

#endif