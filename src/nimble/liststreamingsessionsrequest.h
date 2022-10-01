// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGSESSIONSREQUEST_H
#define QTAWS_LISTSTREAMINGSESSIONSREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class ListStreamingSessionsRequestPrivate;

class QTAWSNIMBLE_EXPORT ListStreamingSessionsRequest : public NimbleRequest {

public:
    ListStreamingSessionsRequest(const ListStreamingSessionsRequest &other);
    ListStreamingSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamingSessionsRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
