// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefunctionrequest.h"
#include "deletefunctionrequest_p.h"
#include "deletefunctionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteFunctionRequest
 * \brief The DeleteFunctionRequest class provides an interface for CloudFront DeleteFunction requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteFunction
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFunctionRequest::DeleteFunctionRequest(const DeleteFunctionRequest &other)
    : CloudFrontRequest(new DeleteFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFunctionRequest object.
 */
DeleteFunctionRequest::DeleteFunctionRequest()
    : CloudFrontRequest(new DeleteFunctionRequestPrivate(CloudFrontRequest::DeleteFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFunctionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteFunctionRequestPrivate
 * \brief The DeleteFunctionRequestPrivate class provides private implementation for DeleteFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteFunctionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteFunctionRequestPrivate::DeleteFunctionRequestPrivate(
    const CloudFrontRequest::Action action, DeleteFunctionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFunctionRequest
 * class' copy constructor.
 */
DeleteFunctionRequestPrivate::DeleteFunctionRequestPrivate(
    const DeleteFunctionRequestPrivate &other, DeleteFunctionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
