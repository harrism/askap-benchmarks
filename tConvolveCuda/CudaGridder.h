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

#ifndef CUDA_GRIDDER_H
#define CUDA_GRIDDER_H

#include <vector>
#include <complex>

void gridKernelCuda(const std::vector< std::complex<float> >& data,
		const int support,
		const std::vector< std::complex<float> >& C,
		const std::vector<int>& cOffset,
		const std::vector<int>& iu,
		const std::vector<int>& iv,
		std::vector< std::complex<float> >& grid,
		const int gSize,
		double &time);

void degridKernelCuda(const std::vector< std::complex<float> >& grid,
                const int gSize,
                const int support,
                const std::vector< std::complex<float> >& C,
                const std::vector<int>& cOffset,
                const std::vector<int>& iu,
                const std::vector<int>& iv,
                std::vector< std::complex<float> >& data,
		double &time);

#endif
