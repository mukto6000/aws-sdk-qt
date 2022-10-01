// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSRESPONSE_H
#define QTAWS_DESCRIBESTACKSRESPONSE_H

#include "appstreamresponse.h"
#include "describestacksrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeStacksResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeStacksResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeStacksResponse(const DescribeStacksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStacksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStacksResponse)
    Q_DISABLE_COPY(DescribeStacksResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
