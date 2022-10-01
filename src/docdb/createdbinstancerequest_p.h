// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCEREQUEST_P_H
#define QTAWS_CREATEDBINSTANCEREQUEST_P_H

#include "docdbrequest_p.h"
#include "createdbinstancerequest.h"

namespace QtAws {
namespace DocDb {

class CreateDBInstanceRequest;

class CreateDBInstanceRequestPrivate : public DocDbRequestPrivate {

public:
    CreateDBInstanceRequestPrivate(const DocDbRequest::Action action,
                                   CreateDBInstanceRequest * const q);
    CreateDBInstanceRequestPrivate(const CreateDBInstanceRequestPrivate &other,
                                   CreateDBInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDBInstanceRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
