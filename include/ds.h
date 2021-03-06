/*
    This file is part of RIBS (Robust Infrastructure for Backend Systems).
    RIBS is an infrastructure for building great SaaS applications (but not
    limited to).

    Copyright (C) 2011 Adap.tv, Inc.

    RIBS is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, version 2.1 of the License.

    RIBS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with RIBS.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef _DS__H_
#define _DS__H_

#include "ds_field.h"
#include "index.h"

struct ds_to_load
{
    index_container<> *idx;
    ds_field_base *ds;
    ds_field_base *link;
    const char *name;
};

int load_ds(ds_to_load *ds, const char *path);

#endif // _DS__H_
