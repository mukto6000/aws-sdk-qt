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

#include "describestatementrequest.h"
#include "describestatementrequest_p.h"
#include "describestatementresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::DescribeStatementRequest
 * \brief The DescribeStatementRequest class provides an interface for RedshiftData DescribeStatement requests.
 *
 * \inmodule QtAwsRedshiftData
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run SQL statements, which are
 *  committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API and CLI usage examples, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataClient::describeStatement
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStatementRequest::DescribeStatementRequest(const DescribeStatementRequest &other)
    : RedshiftDataRequest(new DescribeStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStatementRequest object.
 */
DescribeStatementRequest::DescribeStatementRequest()
    : RedshiftDataRequest(new DescribeStatementRequestPrivate(RedshiftDataRequest::DescribeStatementAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStatementRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStatementResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::DescribeStatementRequestPrivate
 * \brief The DescribeStatementRequestPrivate class provides private implementation for DescribeStatementRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a DescribeStatementRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
DescribeStatementRequestPrivate::DescribeStatementRequestPrivate(
    const RedshiftDataRequest::Action action, DescribeStatementRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStatementRequest
 * class' copy constructor.
 */
DescribeStatementRequestPrivate::DescribeStatementRequestPrivate(
    const DescribeStatementRequestPrivate &other, DescribeStatementRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
