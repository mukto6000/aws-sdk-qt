// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEENGINEVERSIONSRESPONSE_H
#define QTAWS_DESCRIBECACHEENGINEVERSIONSRESPONSE_H

#include "elasticacheresponse.h"
#include "describecacheengineversionsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeCacheEngineVersionsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeCacheEngineVersionsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeCacheEngineVersionsResponse(const DescribeCacheEngineVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCacheEngineVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCacheEngineVersionsResponse)
    Q_DISABLE_COPY(DescribeCacheEngineVersionsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
