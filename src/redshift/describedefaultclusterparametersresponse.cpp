// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedefaultclusterparametersresponse.h"
#include "describedefaultclusterparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeDefaultClusterParametersResponse
 * \brief The DescribeDefaultClusterParametersResponse class provides an interace for Redshift DescribeDefaultClusterParameters responses.
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
 * \sa RedshiftClient::describeDefaultClusterParameters
 */

/*!
 * Constructs a DescribeDefaultClusterParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDefaultClusterParametersResponse::DescribeDefaultClusterParametersResponse(
        const DescribeDefaultClusterParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeDefaultClusterParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDefaultClusterParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDefaultClusterParametersRequest * DescribeDefaultClusterParametersResponse::request() const
{
    Q_D(const DescribeDefaultClusterParametersResponse);
    return static_cast<const DescribeDefaultClusterParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Redshift DescribeDefaultClusterParameters \a response.
 */
void DescribeDefaultClusterParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDefaultClusterParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Redshift::DescribeDefaultClusterParametersResponsePrivate
 * \brief The DescribeDefaultClusterParametersResponsePrivate class provides private implementation for DescribeDefaultClusterParametersResponse.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeDefaultClusterParametersResponsePrivate object with public implementation \a q.
 */
DescribeDefaultClusterParametersResponsePrivate::DescribeDefaultClusterParametersResponsePrivate(
    DescribeDefaultClusterParametersResponse * const q) : RedshiftResponsePrivate(q)
{

}

/*!
 * Parses a Redshift DescribeDefaultClusterParameters response element from \a xml.
 */
void DescribeDefaultClusterParametersResponsePrivate::parseDescribeDefaultClusterParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDefaultClusterParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Redshift
} // namespace QtAws
