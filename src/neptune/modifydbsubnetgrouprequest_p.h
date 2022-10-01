// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPREQUEST_P_H
#define QTAWS_MODIFYDBSUBNETGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "modifydbsubnetgrouprequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBSubnetGroupRequest;

class ModifyDBSubnetGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    ModifyDBSubnetGroupRequestPrivate(const NeptuneRequest::Action action,
                                   ModifyDBSubnetGroupRequest * const q);
    ModifyDBSubnetGroupRequestPrivate(const ModifyDBSubnetGroupRequestPrivate &other,
                                   ModifyDBSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyDBSubnetGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
