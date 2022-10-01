// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTEVENTPATTERNREQUEST_H
#define QTAWS_TESTEVENTPATTERNREQUEST_H

#include "cloudwatcheventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class TestEventPatternRequestPrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT TestEventPatternRequest : public CloudWatchEventsRequest {

public:
    TestEventPatternRequest(const TestEventPatternRequest &other);
    TestEventPatternRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestEventPatternRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
