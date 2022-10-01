// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETRESPONSE_H
#define QTAWS_DESCRIBEDATASETRESPONSE_H

#include "cognitosyncresponse.h"
#include "describedatasetrequest.h"

namespace QtAws {
namespace CognitoSync {

class DescribeDatasetResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT DescribeDatasetResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    DescribeDatasetResponse(const DescribeDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetResponse)
    Q_DISABLE_COPY(DescribeDatasetResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
