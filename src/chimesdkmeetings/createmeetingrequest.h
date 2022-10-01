// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGREQUEST_H
#define QTAWS_CREATEMEETINGREQUEST_H

#include "chimesdkmeetingsrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class CreateMeetingRequestPrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT CreateMeetingRequest : public ChimeSdkMeetingsRequest {

public:
    CreateMeetingRequest(const CreateMeetingRequest &other);
    CreateMeetingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMeetingRequest)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
