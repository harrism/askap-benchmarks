/// @copyright (c) 2009 CSIRO
/// Australia Telescope National Facility (ATNF)
/// Commonwealth Scientific and Industrial Research Organisation (CSIRO)
/// PO Box 76, Epping NSW 1710, Australia
/// atnf-enquiries@csiro.au
///
/// The ASKAP software distribution is free software: you can redistribute it
/// and/or modify it under the terms of the GNU General Public License as
/// published by the Free Software Foundation; either version 2 of the License,
/// or (at your option) any later version.
///
/// This program is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU General Public License for more details.
///
/// You should have received a copy of the GNU General Public License
/// along with this program; if not, write to the Free Software
/// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
///
/// @author Ben Humphreys <ben.humphreys@csiro.au>
/// @author Tim Cornwell  <tim.cornwell@csiro.au>

#ifndef CUDA_GRID_KERNEL_H
#define CUDA_GRID_KERNEL_H

#include <cuComplex.h>

typedef cuComplex Complex;

__host__ void cuda_gridKernel(const Complex  *data, const int dSize, const int support,
		const Complex *C, const int *cOffset,
		const int *iu, const int *iv,
		Complex *grid, const int gSize,
		const int *h_iu, const int *h_iv);

__host__ void cuda_degridKernel(const Complex *grid, const int gSize, const int support,
                const Complex *C, const int *cOffset,
                const int *iu, const int *iv,
                Complex  *data, const int dSize);

#endif
