// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERGROUPREQUEST_H
#define QTAWS_DELETEPARAMETERGROUPREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class DeleteParameterGroupRequestPrivate;

class QTAWSDAX_EXPORT DeleteParameterGroupRequest : public DaxRequest {

public:
    DeleteParameterGroupRequest(const DeleteParameterGroupRequest &other);
    DeleteParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteParameterGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
