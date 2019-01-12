//
// (c) Copyright 2019 DESY,ESS, Eugen Wintersberger <eugen.wintersberger@gmail.com>
//
// This file is part of h5pp.
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

#include <gtest/gtest.h>
#include <h5cpp/hdf5.hpp>

using namespace hdf5;

TEST(StorageTypeTest,test_string_representation)
{
  std::stringstream stream;

  stream<<node::StorageType::UNKNOWN;
  EXPECT_EQ("UNKNOWN",stream.str());

  stream.str(std::string());
  stream<<node::StorageType::COMPACT;
  EXPECT_EQ("COMPACT",stream.str());

  stream.str(std::string());
  stream<<node::StorageType::DENSE;
  EXPECT_EQ("DENSE",stream.str());

  stream.str(std::string());
  stream<<node::StorageType::SYMBOL_TABLE;
  EXPECT_EQ("SYMBOL_TABLE",stream.str());

}


TEST(StorageTypeTest,test_values)
{
  EXPECT_EQ(H5G_STORAGE_TYPE_UNKNOWN,
            static_cast<H5G_storage_type_t>(node::StorageType::UNKNOWN));
  EXPECT_EQ(H5G_STORAGE_TYPE_COMPACT,
            static_cast<H5G_storage_type_t>(node::StorageType::COMPACT));
  EXPECT_EQ(H5G_STORAGE_TYPE_DENSE,
            static_cast<H5G_storage_type_t>(node::StorageType::DENSE));
  EXPECT_EQ(H5G_STORAGE_TYPE_SYMBOL_TABLE,
            static_cast<H5G_storage_type_t>(node::StorageType::SYMBOL_TABLE));

}


