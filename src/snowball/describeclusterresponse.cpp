// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclusterresponse.h"
#include "describeclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeClusterResponse
 * \brief The DescribeClusterResponse class provides an interace for Snowball DescribeCluster responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::describeCluster
 */

/*!
 * Constructs a DescribeClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClusterResponse::DescribeClusterResponse(
        const DescribeClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeClusterResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClusterRequest * DescribeClusterResponse::request() const
{
    Q_D(const DescribeClusterResponse);
    return static_cast<const DescribeClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball DescribeCluster \a response.
 */
void DescribeClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::DescribeClusterResponsePrivate
 * \brief The DescribeClusterResponsePrivate class provides private implementation for DescribeClusterResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeClusterResponsePrivate object with public implementation \a q.
 */
DescribeClusterResponsePrivate::DescribeClusterResponsePrivate(
    DescribeClusterResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball DescribeCluster response element from \a xml.
 */
void DescribeClusterResponsePrivate::parseDescribeClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
