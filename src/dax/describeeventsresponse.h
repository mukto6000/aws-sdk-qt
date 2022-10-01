// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSRESPONSE_H
#define QTAWS_DESCRIBEEVENTSRESPONSE_H

#include "daxresponse.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace Dax {

class DescribeEventsResponsePrivate;

class QTAWSDAX_EXPORT DescribeEventsResponse : public DaxResponse {
    Q_OBJECT

public:
    DescribeEventsResponse(const DescribeEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsResponse)
    Q_DISABLE_COPY(DescribeEventsResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
