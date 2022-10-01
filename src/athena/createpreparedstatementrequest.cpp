// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpreparedstatementrequest.h"
#include "createpreparedstatementrequest_p.h"
#include "createpreparedstatementresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::CreatePreparedStatementRequest
 * \brief The CreatePreparedStatementRequest class provides an interface for Athena CreatePreparedStatement requests.
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
 * \sa AthenaClient::createPreparedStatement
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePreparedStatementRequest::CreatePreparedStatementRequest(const CreatePreparedStatementRequest &other)
    : AthenaRequest(new CreatePreparedStatementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePreparedStatementRequest object.
 */
CreatePreparedStatementRequest::CreatePreparedStatementRequest()
    : AthenaRequest(new CreatePreparedStatementRequestPrivate(AthenaRequest::CreatePreparedStatementAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePreparedStatementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePreparedStatementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePreparedStatementRequest::response(QNetworkReply * const reply) const
{
    return new CreatePreparedStatementResponse(*this, reply);
}

/*!
 * \class QtAws::Athena::CreatePreparedStatementRequestPrivate
 * \brief The CreatePreparedStatementRequestPrivate class provides private implementation for CreatePreparedStatementRequest.
 * \internal
 *
 * \inmodule QtAwsAthena
 */

/*!
 * Constructs a CreatePreparedStatementRequestPrivate object for Athena \a action,
 * with public implementation \a q.
 */
CreatePreparedStatementRequestPrivate::CreatePreparedStatementRequestPrivate(
    const AthenaRequest::Action action, CreatePreparedStatementRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePreparedStatementRequest
 * class' copy constructor.
 */
CreatePreparedStatementRequestPrivate::CreatePreparedStatementRequestPrivate(
    const CreatePreparedStatementRequestPrivate &other, CreatePreparedStatementRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
