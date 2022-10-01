// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPTIONGROUPREQUEST_H
#define QTAWS_CREATEOPTIONGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateOptionGroupRequestPrivate;

class QTAWSRDS_EXPORT CreateOptionGroupRequest : public RdsRequest {

public:
    CreateOptionGroupRequest(const CreateOptionGroupRequest &other);
    CreateOptionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
