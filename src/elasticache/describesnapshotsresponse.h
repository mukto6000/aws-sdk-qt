// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBESNAPSHOTSRESPONSE_H

#include "elasticacheresponse.h"
#include "describesnapshotsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeSnapshotsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeSnapshotsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeSnapshotsResponse(const DescribeSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotsResponse)
    Q_DISABLE_COPY(DescribeSnapshotsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
