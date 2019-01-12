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
#pragma once

extern "C" {
#include <hdf5.h>
}

#include <h5cpp/node/types.hpp>

namespace hdf5 {
namespace node {

class GroupInfo
{
  private:
    H5G_info_t _info;
  public:

    StorageType storage_type() const noexcept;

    size_t number_of_links() const noexcept;

    bool has_file_mounted() const noexcept;

    int64_t maximum_corder() const noexcept;

    explicit operator H5G_info_t() const noexcept
    {
      return _info;
    }

    explicit operator H5G_info_t*() noexcept
    {
      return &_info;
    }

    explicit operator const H5G_info_t*() const noexcept
    {
      return &_info;
    }

};


} // end of namespace node
} // end of namespace hdf5



