// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTUSERREQUEST_H
#define QTAWS_DISCONNECTUSERREQUEST_H

#include "ivschatrequest.h"

namespace QtAws {
namespace IvsChat {

class DisconnectUserRequestPrivate;

class QTAWSIVSCHAT_EXPORT DisconnectUserRequest : public IvsChatRequest {

public:
    DisconnectUserRequest(const DisconnectUserRequest &other);
    DisconnectUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectUserRequest)

};

} // namespace IvsChat
} // namespace QtAws

#endif
