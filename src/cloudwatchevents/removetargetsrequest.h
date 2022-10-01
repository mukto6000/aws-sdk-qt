// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETARGETSREQUEST_H
#define QTAWS_REMOVETARGETSREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class RemoveTargetsRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT RemoveTargetsRequest : public CloudWatchEventsRequest {

public:
    RemoveTargetsRequest(const RemoveTargetsRequest &other);
    RemoveTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTargetsRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
