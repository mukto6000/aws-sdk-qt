// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEUSERREQUEST_H
#define QTAWS_ENABLEUSERREQUEST_H

#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class EnableUserRequestPrivate;

class QTAWSFINSPACEDATA_EXPORT EnableUserRequest : public FinspaceDataRequest {

public:
    EnableUserRequest(const EnableUserRequest &other);
    EnableUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableUserRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
