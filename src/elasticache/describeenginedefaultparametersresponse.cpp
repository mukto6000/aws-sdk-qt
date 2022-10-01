// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeenginedefaultparametersresponse.h"
#include "describeenginedefaultparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeEngineDefaultParametersResponse
 * \brief The DescribeEngineDefaultParametersResponse class provides an interace for ElastiCache DescribeEngineDefaultParameters responses.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::describeEngineDefaultParameters
 */

/*!
 * Constructs a DescribeEngineDefaultParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEngineDefaultParametersResponse::DescribeEngineDefaultParametersResponse(
        const DescribeEngineDefaultParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeEngineDefaultParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeEngineDefaultParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEngineDefaultParametersRequest * DescribeEngineDefaultParametersResponse::request() const
{
    Q_D(const DescribeEngineDefaultParametersResponse);
    return static_cast<const DescribeEngineDefaultParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeEngineDefaultParameters \a response.
 */
void DescribeEngineDefaultParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEngineDefaultParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeEngineDefaultParametersResponsePrivate
 * \brief The DescribeEngineDefaultParametersResponsePrivate class provides private implementation for DescribeEngineDefaultParametersResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeEngineDefaultParametersResponsePrivate object with public implementation \a q.
 */
DescribeEngineDefaultParametersResponsePrivate::DescribeEngineDefaultParametersResponsePrivate(
    DescribeEngineDefaultParametersResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeEngineDefaultParameters response element from \a xml.
 */
void DescribeEngineDefaultParametersResponsePrivate::parseDescribeEngineDefaultParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngineDefaultParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
