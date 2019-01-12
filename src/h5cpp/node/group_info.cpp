//
// (c) Copyright 2019 DESY,ESS,Eugen Wintersberger <eugen.wintersberger@gmail.com>
//
// This file is part of h5cpp.
//
// This library is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published
// by the Free Software Foundation; either version 2.1 of the License, or
// (at your option) any later version.
//
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty ofMERCHANTABILITY
// or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
// License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this library; if not, write to the
// Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor
// Boston, MA  02110-1301 USA
// ===========================================================================
//
// Author: Eugen Wintersberger <eugen.wintersberger@gmail.com>
// Created on: Jan 12, 2019
//


#include <h5cpp/node/group_info.hpp>

namespace hdf5 {
namespace node {

StorageType GroupInfo::storage_type() const noexcept
{
  return static_cast<StorageType>(_info.storage_type);
}

size_t GroupInfo::number_of_links() const noexcept
{
  return _info.nlinks;
}

bool GroupInfo::has_file_mounted() const noexcept
{
  return _info.mounted;
}

int64_t GroupInfo::maximum_corder() const noexcept
{
  return _info.max_corder;
}


} // end of namespace node
} // end of namespace hdf5



