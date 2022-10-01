// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedefaultclusterparametersrequest.h"
#include "describedefaultclusterparametersrequest_p.h"
#include "describedefaultclusterparametersresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/*!
 * \class QtAws::Redshift::DescribeDefaultClusterParametersRequest
 * \brief The DescribeDefaultClusterParametersRequest class provides an interface for Redshift DescribeDefaultClusterParameters requests.
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
 * Constructs a copy of \a other.
 */
DescribeDefaultClusterParametersRequest::DescribeDefaultClusterParametersRequest(const DescribeDefaultClusterParametersRequest &other)
    : RedshiftRequest(new DescribeDefaultClusterParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDefaultClusterParametersRequest object.
 */
DescribeDefaultClusterParametersRequest::DescribeDefaultClusterParametersRequest()
    : RedshiftRequest(new DescribeDefaultClusterParametersRequestPrivate(RedshiftRequest::DescribeDefaultClusterParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDefaultClusterParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDefaultClusterParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDefaultClusterParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDefaultClusterParametersResponse(*this, reply);
}

/*!
 * \class QtAws::Redshift::DescribeDefaultClusterParametersRequestPrivate
 * \brief The DescribeDefaultClusterParametersRequestPrivate class provides private implementation for DescribeDefaultClusterParametersRequest.
 * \internal
 *
 * \inmodule QtAwsRedshift
 */

/*!
 * Constructs a DescribeDefaultClusterParametersRequestPrivate object for Redshift \a action,
 * with public implementation \a q.
 */
DescribeDefaultClusterParametersRequestPrivate::DescribeDefaultClusterParametersRequestPrivate(
    const RedshiftRequest::Action action, DescribeDefaultClusterParametersRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDefaultClusterParametersRequest
 * class' copy constructor.
 */
DescribeDefaultClusterParametersRequestPrivate::DescribeDefaultClusterParametersRequestPrivate(
    const DescribeDefaultClusterParametersRequestPrivate &other, DescribeDefaultClusterParametersRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
