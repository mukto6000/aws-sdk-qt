// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSRESPONSE_H
#define QTAWS_DESCRIBETAGSRESPONSE_H

#include "directconnectresponse.h"
#include "describetagsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeTagsResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeTagsResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DescribeTagsResponse(const DescribeTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTagsResponse)
    Q_DISABLE_COPY(DescribeTagsResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
