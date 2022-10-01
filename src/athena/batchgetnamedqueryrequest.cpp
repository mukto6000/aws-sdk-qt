// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetnamedqueryrequest.h"
#include "batchgetnamedqueryrequest_p.h"
#include "batchgetnamedqueryresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::BatchGetNamedQueryRequest
 * \brief The BatchGetNamedQueryRequest class provides an interface for Athena BatchGetNamedQuery requests.
 *
 * \inmodule QtAwsAthena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  If you connect to Athena using the JDBC driver, use version 1.1.0 of the driver or later with the Amazon Athena API.
 *  Earlier version drivers do not support the API. For more information and to download the driver, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/connect-with-jdbc.html">Accessing Amazon Athena with
 * 
 *  JDBC</a>>
 * 
 *  For code samples using the Amazon Web Services SDK for Java, see <a
 *  href="https://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::batchGetNamedQuery
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetNamedQueryRequest::BatchGetNamedQueryRequest(const BatchGetNamedQueryRequest &other)
    : AthenaRequest(new BatchGetNamedQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetNamedQueryRequest object.
 */
BatchGetNamedQueryRequest::BatchGetNamedQueryRequest()
    : AthenaRequest(new BatchGetNamedQueryRequestPrivate(AthenaRequest::BatchGetNamedQueryAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetNamedQueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetNamedQueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetNamedQueryRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetNamedQueryResponse(*this, reply);
}

/*!
 * \class QtAws::Athena::BatchGetNamedQueryRequestPrivate
 * \brief The BatchGetNamedQueryRequestPrivate class provides private implementation for BatchGetNamedQueryRequest.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a BatchGetNamedQueryRequestPrivate object for Athena \a action,
 * with public implementation \a q.
 */
BatchGetNamedQueryRequestPrivate::BatchGetNamedQueryRequestPrivate(
    const AthenaRequest::Action action, BatchGetNamedQueryRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetNamedQueryRequest
 * class' copy constructor.
 */
BatchGetNamedQueryRequestPrivate::BatchGetNamedQueryRequestPrivate(
    const BatchGetNamedQueryRequestPrivate &other, BatchGetNamedQueryRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
