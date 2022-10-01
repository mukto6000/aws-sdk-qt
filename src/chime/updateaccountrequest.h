// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTREQUEST_H
#define QTAWS_UPDATEACCOUNTREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateAccountRequestPrivate;

class QTAWSCHIME_EXPORT UpdateAccountRequest : public ChimeRequest {

public:
    UpdateAccountRequest(const UpdateAccountRequest &other);
    UpdateAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
