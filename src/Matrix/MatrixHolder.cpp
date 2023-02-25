#ifndef __NEUTRONGL_MATRIX_MATRIXHOLDER_CPP__
#define __NEUtRONGL_MATRIX_MATRIXHOLDER_CPP__

#include "MatrixHolder.hpp"

namespace ngl
{
    template <typename m_MatrixType>
    MatrixHolder<m_MatrixType>::MatrixHolder(
        const m_MatrixType &matrix)
        : m_matrix(matrix) {}

    template <typename m_MatrixType>
    void
    MatrixHolder<m_MatrixType>::set_matrix(
        const MatrixType &matrix)
    {
        m_matrix = matrix;
        return *this;
    }

    template <typename m_MatrixType>
    const m_MatrixType &
    MatrixHolder<m_MatrixType>::get_matrix() const
    {
        return m_matrix;
    }

} // namespace ngl

#endif