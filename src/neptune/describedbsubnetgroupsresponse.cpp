// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbsubnetgroupsresponse.h"
#include "describedbsubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::DescribeDBSubnetGroupsResponse
 * \brief The DescribeDBSubnetGroupsResponse class provides an interace for Neptune DescribeDBSubnetGroups responses.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network
 * 
 *  security>
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 *
 * \sa NeptuneClient::describeDBSubnetGroups
 */

/*!
 * Constructs a DescribeDBSubnetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBSubnetGroupsResponse::DescribeDBSubnetGroupsResponse(
        const DescribeDBSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NeptuneResponse(new DescribeDBSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBSubnetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBSubnetGroupsRequest * DescribeDBSubnetGroupsResponse::request() const
{
    Q_D(const DescribeDBSubnetGroupsResponse);
    return static_cast<const DescribeDBSubnetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Neptune DescribeDBSubnetGroups \a response.
 */
void DescribeDBSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Neptune::DescribeDBSubnetGroupsResponsePrivate
 * \brief The DescribeDBSubnetGroupsResponsePrivate class provides private implementation for DescribeDBSubnetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a DescribeDBSubnetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeDBSubnetGroupsResponsePrivate::DescribeDBSubnetGroupsResponsePrivate(
    DescribeDBSubnetGroupsResponse * const q) : NeptuneResponsePrivate(q)
{

}

/*!
 * Parses a Neptune DescribeDBSubnetGroups response element from \a xml.
 */
void DescribeDBSubnetGroupsResponsePrivate::parseDescribeDBSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBSubnetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Neptune
} // namespace QtAws
