// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEETINGREQUEST_H
#define QTAWS_GETMEETINGREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetMeetingRequestPrivate;

class QTAWSCHIME_EXPORT GetMeetingRequest : public ChimeRequest {

public:
    GetMeetingRequest(const GetMeetingRequest &other);
    GetMeetingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMeetingRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
