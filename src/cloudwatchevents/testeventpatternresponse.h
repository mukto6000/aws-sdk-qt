// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTEVENTPATTERNRESPONSE_H
#define QTAWS_TESTEVENTPATTERNRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "testeventpatternrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class TestEventPatternResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT TestEventPatternResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    TestEventPatternResponse(const TestEventPatternRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestEventPatternRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestEventPatternResponse)
    Q_DISABLE_COPY(TestEventPatternResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
