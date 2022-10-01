// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecloudfrontoriginaccessidentityrequest.h"
#include "deletecloudfrontoriginaccessidentityrequest_p.h"
#include "deletecloudfrontoriginaccessidentityresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteCloudFrontOriginAccessIdentityRequest
 * \brief The DeleteCloudFrontOriginAccessIdentityRequest class provides an interface for CloudFront DeleteCloudFrontOriginAccessIdentity requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteCloudFrontOriginAccessIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCloudFrontOriginAccessIdentityRequest::DeleteCloudFrontOriginAccessIdentityRequest(const DeleteCloudFrontOriginAccessIdentityRequest &other)
    : CloudFrontRequest(new DeleteCloudFrontOriginAccessIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCloudFrontOriginAccessIdentityRequest object.
 */
DeleteCloudFrontOriginAccessIdentityRequest::DeleteCloudFrontOriginAccessIdentityRequest()
    : CloudFrontRequest(new DeleteCloudFrontOriginAccessIdentityRequestPrivate(CloudFrontRequest::DeleteCloudFrontOriginAccessIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCloudFrontOriginAccessIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCloudFrontOriginAccessIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCloudFrontOriginAccessIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCloudFrontOriginAccessIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteCloudFrontOriginAccessIdentityRequestPrivate
 * \brief The DeleteCloudFrontOriginAccessIdentityRequestPrivate class provides private implementation for DeleteCloudFrontOriginAccessIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteCloudFrontOriginAccessIdentityRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteCloudFrontOriginAccessIdentityRequestPrivate::DeleteCloudFrontOriginAccessIdentityRequestPrivate(
    const CloudFrontRequest::Action action, DeleteCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCloudFrontOriginAccessIdentityRequest
 * class' copy constructor.
 */
DeleteCloudFrontOriginAccessIdentityRequestPrivate::DeleteCloudFrontOriginAccessIdentityRequestPrivate(
    const DeleteCloudFrontOriginAccessIdentityRequestPrivate &other, DeleteCloudFrontOriginAccessIdentityRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
