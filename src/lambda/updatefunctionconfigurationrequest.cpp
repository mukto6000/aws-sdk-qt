/*
    Copyright 2013-2020 Paul Colby

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

#include "updatefunctionconfigurationrequest.h"
#include "updatefunctionconfigurationrequest_p.h"
#include "updatefunctionconfigurationresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::UpdateFunctionConfigurationRequest
 * \brief The UpdateFunctionConfigurationRequest class provides an interface for Lambda UpdateFunctionConfiguration requests.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="https://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and
 *  for information about how the service works, see <a
 *  href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::updateFunctionConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFunctionConfigurationRequest::UpdateFunctionConfigurationRequest(const UpdateFunctionConfigurationRequest &other)
    : LambdaRequest(new UpdateFunctionConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFunctionConfigurationRequest object.
 */
UpdateFunctionConfigurationRequest::UpdateFunctionConfigurationRequest()
    : LambdaRequest(new UpdateFunctionConfigurationRequestPrivate(LambdaRequest::UpdateFunctionConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFunctionConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFunctionConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFunctionConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFunctionConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Lambda::UpdateFunctionConfigurationRequestPrivate
 * \brief The UpdateFunctionConfigurationRequestPrivate class provides private implementation for UpdateFunctionConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a UpdateFunctionConfigurationRequestPrivate object for Lambda \a action,
 * with public implementation \a q.
 */
UpdateFunctionConfigurationRequestPrivate::UpdateFunctionConfigurationRequestPrivate(
    const LambdaRequest::Action action, UpdateFunctionConfigurationRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFunctionConfigurationRequest
 * class' copy constructor.
 */
UpdateFunctionConfigurationRequestPrivate::UpdateFunctionConfigurationRequestPrivate(
    const UpdateFunctionConfigurationRequestPrivate &other, UpdateFunctionConfigurationRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
