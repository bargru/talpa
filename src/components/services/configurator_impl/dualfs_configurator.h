/*
 * dualfs_configurator.h
 *
 * TALPA Filesystem Interceptor
 *
 * Copyright (C) 2004-2007 Sophos Plc, Oxford, England.
 *
 * This program is free software; you can redistribute it and/or modify it under the terms of the
 * GNU General Public License Version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program; if not,
 * write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */
#ifndef H_DUALFSCONFIGURATOR
#define H_DUALFSCONFIGURATOR

#include "common/bool.h"
#include "configurator/econfiguration_group.h"
#include "configurator/iconfigurator.h"

#include "components/services/configurator_impl/procfs_configurator.h"
#include "components/services/configurator_impl/securityfs_configurator.h"

typedef struct tag_DualfsConfigurator
{
    IConfigurator           i_IConfigurator;
    void                    (*delete)(struct tag_DualfsConfigurator* object);
    ProcfsConfigurator      *mProcFS;
    SecurityfsConfigurator  *mSecurityFS;
} DualfsConfigurator;

/*
 * Object creation/destruction.
 */
DualfsConfigurator* newDualfsConfigurator(bool noprocfs);

#endif

/*
 * End of dualfs_configurator.h
 */
