/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describereservednodeexchangestatusresponse.h"
#include "describereservednodeexchangestatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeReservedNodeExchangeStatusResponse
 * \brief The DescribeReservedNodeExchangeStatusResponse class provides an interace for Redshift DescribeReservedNodeExchangeStatus responses.
 *
 * \inmodule QtAwsRedshift
 *
 *  <fullname>Amazon Redshift</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 *  interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 *  some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 *  has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 *  next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 *  interfaces, go to <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon
 *  Redshift Management
 * 
 *  Interfaces</a>>
 * 
 *  Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 *  monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 *  using your data to acquire new insights for your business and
 * 
 *  customers>
 * 
 *  If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the <a
 *  href="https://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 * 
 *  Guide</a>>
 * 
 *  If you are a database developer, the <a href="https://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 *  Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 *  data warehouse.
 *
 * \sa RedshiftClient::describeReservedNodeExchangeStatus
 */

/*!
 * Constructs a DescribeReservedNodeExchangeStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservedNodeExchangeStatusResponse::DescribeReservedNodeExchangeStatusResponse(
        const DescribeReservedNodeExchangeStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeReservedNodeExchangeStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedNodeExchangeStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservedNodeExchangeStatusRequest * DescribeReservedNodeExchangeStatusResponse::request() const
{
    Q_D(const DescribeReservedNodeExchangeStatusResponse);
    return static_cast<const DescribeReservedNodeExchangeStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift DescribeReservedNodeExchangeStatus \a response.
 */
void DescribeReservedNodeExchangeStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservedNodeExchangeStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::DescribeReservedNodeExchangeStatusResponsePrivate
 * \brief The DescribeReservedNodeExchangeStatusResponsePrivate class provides private implementation for DescribeReservedNodeExchangeStatusResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeReservedNodeExchangeStatusResponsePrivate object with public implementation \a q.
 */
DescribeReservedNodeExchangeStatusResponsePrivate::DescribeReservedNodeExchangeStatusResponsePrivate(
    DescribeReservedNodeExchangeStatusResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift DescribeReservedNodeExchangeStatus response element from \a xml.
 */
void DescribeReservedNodeExchangeStatusResponsePrivate::parseDescribeReservedNodeExchangeStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedNodeExchangeStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Redshift
} // namespace QtAws
